
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_3__* krb5_principal ;
struct TYPE_17__ {int forwarded; int forwardable; } ;
struct TYPE_19__ {scalar_t__ i; TYPE_2__ b; } ;
typedef TYPE_4__ krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_20__ {size_t length; void* data; } ;
typedef TYPE_5__ krb5_data ;
struct TYPE_16__ {scalar_t__ endtime; } ;
struct TYPE_21__ {TYPE_1__ times; int server; TYPE_3__* client; } ;
typedef TYPE_6__ krb5_creds ;
typedef int krb5_ccache ;
typedef int krb5_auth_context ;
typedef int creds ;
struct TYPE_18__ {int realm; } ;


 int AP_OPTS_MUTUAL_REQUIRED ;
 int AP_OPTS_USE_SUBKEY ;
 int KF_VERSION_1 ;
 int KRB5_NT_SRV_HST ;
 int KRB5_TGS_NAME ;
 char* ccache_name ;
 int context ;
 int forwardable ;
 int krb5_auth_con_free (int ,int ) ;
 scalar_t__ krb5_auth_con_init (int ,int *) ;
 scalar_t__ krb5_auth_con_setaddrs_from_fd (int ,int ,int*) ;
 scalar_t__ krb5_cc_default (int ,int *) ;
 scalar_t__ krb5_cc_get_principal (int ,int ,TYPE_3__**) ;
 int krb5_data_free (TYPE_5__*) ;
 scalar_t__ krb5_get_forwarded_creds (int ,int ,int ,scalar_t__,char const*,TYPE_6__*,TYPE_5__*) ;
 scalar_t__ krb5_make_principal (int ,int *,int ,int ,int ,int *) ;
 scalar_t__ krb5_read_priv_message (int ,int ,int*,TYPE_5__*) ;
 scalar_t__ krb5_sendauth (int ,int *,int*,int ,int *,TYPE_3__*,int,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ krb5_sname_to_principal (int ,char const*,char const*,int ,TYPE_3__**) ;
 int krb5_warn (int ,scalar_t__,char*) ;
 int krb5_warnx (int ,char*) ;
 scalar_t__ krb5_write_priv_message (int ,int ,int*,TYPE_5__*) ;
 int memcpy (char*,void*,size_t) ;
 int memset (TYPE_6__*,int ,int) ;
 char* remote_name ;
 int strcmp (char*,char*) ;
 void* strlen (char*) ;

__attribute__((used)) static int
proto (int sock, const char *hostname, const char *service,
       char *message, size_t len)
{
    krb5_auth_context auth_context;
    krb5_error_code status;
    krb5_principal server;
    krb5_data data;
    krb5_data data_send;

    krb5_ccache ccache;
    krb5_creds creds;
    krb5_kdc_flags flags;
    krb5_principal principal;

    status = krb5_auth_con_init (context, &auth_context);
    if (status) {
 krb5_warn (context, status, "krb5_auth_con_init");
 return 1;
    }

    status = krb5_auth_con_setaddrs_from_fd (context,
          auth_context,
          &sock);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_auth_con_setaddr");
 return 1;
    }

    status = krb5_sname_to_principal (context,
          hostname,
          service,
          KRB5_NT_SRV_HST,
          &server);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_sname_to_principal");
 return 1;
    }

    status = krb5_sendauth (context,
       &auth_context,
       &sock,
       KF_VERSION_1,
       ((void*)0),
       server,
       AP_OPTS_MUTUAL_REQUIRED | AP_OPTS_USE_SUBKEY,
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0));
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn(context, status, "krb5_sendauth");
 return 1;
    }

    if (ccache_name == ((void*)0))
 ccache_name = "";

    data_send.data = (void *)remote_name;
    data_send.length = strlen(remote_name) + 1;
    status = krb5_write_priv_message(context, auth_context, &sock, &data_send);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_write_message");
 return 1;
    }
    data_send.data = (void *)ccache_name;
    data_send.length = strlen(ccache_name)+1;
    status = krb5_write_priv_message(context, auth_context, &sock, &data_send);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_write_message");
 return 1;
    }

    memset (&creds, 0, sizeof(creds));

    status = krb5_cc_default (context, &ccache);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_cc_default");
 return 1;
    }

    status = krb5_cc_get_principal (context, ccache, &principal);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_cc_get_principal");
 return 1;
    }

    creds.client = principal;

    status = krb5_make_principal (context,
      &creds.server,
      principal->realm,
      KRB5_TGS_NAME,
      principal->realm,
      ((void*)0));

    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_make_principal");
 return 1;
    }

    creds.times.endtime = 0;

    flags.i = 0;
    flags.b.forwarded = 1;
    flags.b.forwardable = forwardable;

    status = krb5_get_forwarded_creds (context,
           auth_context,
           ccache,
           flags.i,
           hostname,
           &creds,
           &data);
    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_get_forwarded_creds");
 return 1;
    }

    status = krb5_write_priv_message(context, auth_context, &sock, &data);

    if (status) {
 krb5_auth_con_free(context, auth_context);
 krb5_warn (context, status, "krb5_mk_priv");
 return 1;
    }

    krb5_data_free (&data);

    status = krb5_read_priv_message(context, auth_context, &sock, &data);
    krb5_auth_con_free(context, auth_context);
    if (status) {
 krb5_warn (context, status, "krb5_mk_priv");
 return 1;
    }
    if(data.length >= len) {
 krb5_warnx (context, "returned string is too long, truncating");
 memcpy(message, data.data, len);
 message[len - 1] = '\0';
    } else {
 memcpy(message, data.data, data.length);
 message[data.length] = '\0';
    }
    krb5_data_free (&data);

    return(strcmp(message, "ok"));
}
