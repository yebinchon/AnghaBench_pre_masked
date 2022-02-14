
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int remote ;
typedef int local ;
struct TYPE_24__ {TYPE_9__* authorization_data; } ;
struct TYPE_27__ {TYPE_2__ ticket; } ;
typedef TYPE_5__ krb5_ticket ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_28__ {char* data; int length; } ;
typedef TYPE_6__ krb5_data ;
struct TYPE_29__ {int session; TYPE_6__ ticket; int client; int server; } ;
typedef TYPE_7__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_auth_context ;
struct TYPE_23__ {int length; int * data; } ;
struct TYPE_30__ {TYPE_1__ address; void* addr_type; } ;
typedef TYPE_8__ krb5_address ;
struct TYPE_31__ {int len; TYPE_4__* val; } ;
struct TYPE_25__ {scalar_t__ length; } ;
struct TYPE_26__ {int ad_type; TYPE_3__ ad_data; } ;
typedef TYPE_9__ AuthorizationData ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_8__*,TYPE_8__*) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 scalar_t__ FUNC_11 (int ,int ,int ,TYPE_7__*,TYPE_7__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *,int ,char*,int ,int *) ;
 scalar_t__ FUNC_17 (int ,int ,TYPE_6__*,TYPE_6__*,int *) ;
 scalar_t__ FUNC_18 (int ,int ,TYPE_6__*,TYPE_6__*,int *) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (int ,int *,int*,int ,int ,int ,int *,TYPE_5__**) ;
 scalar_t__ FUNC_21 (int ,int ,char**) ;
 scalar_t__ FUNC_22 (int ,int*,TYPE_6__*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (char*) ;

__attribute__((used)) static int
FUNC_25 (int VAR_2, const char *VAR_3, const char *VAR_4)
{
    struct sockaddr_in VAR_5, VAR_6;
    socklen_t VAR_7;
    krb5_address VAR_8, VAR_9;
    krb5_context VAR_10;
    krb5_ccache VAR_11;
    krb5_auth_context VAR_12;
    krb5_error_code VAR_13;
    krb5_principal VAR_14;
    krb5_data VAR_15;
    krb5_data VAR_16;
    krb5_creds VAR_17, VAR_18;
    krb5_ticket *VAR_19;

    VAR_7 = sizeof(VAR_6);
    if (FUNC_4 (VAR_2, (struct sockaddr *)&VAR_6, &VAR_7) < 0
 || VAR_7 != sizeof(VAR_6))
 FUNC_0 (1, "getsockname(%s)", VAR_3);

    VAR_7 = sizeof(VAR_5);
    if (FUNC_3 (VAR_2, (struct sockaddr *)&VAR_5, &VAR_7) < 0
 || VAR_7 != sizeof(VAR_5))
 FUNC_0 (1, "getpeername(%s)", VAR_3);

    VAR_13 = FUNC_15(&VAR_10);
    if (VAR_13)
 FUNC_1(1, "krb5_init_context failed: %d", VAR_13);

    VAR_13 = FUNC_9 (VAR_10, &VAR_11);
    if (VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_cc_default");

    VAR_13 = FUNC_5 (VAR_10, &VAR_12);
    if (VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_auth_con_init");

    VAR_9.addr_type = VAR_0;
    VAR_9.address.length = sizeof(VAR_6.sin_addr);
    VAR_9.address.data = &VAR_6.sin_addr;

    VAR_8.addr_type = VAR_0;
    VAR_8.address.length = sizeof(VAR_5.sin_addr);
    VAR_8.address.data = &VAR_5.sin_addr;

    VAR_13 = FUNC_6 (VAR_10,
         VAR_12,
         &VAR_9,
         &VAR_8);
    if (VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_auth_con_setaddr");

    FUNC_8(&VAR_17);

    VAR_13 = FUNC_10(VAR_10, VAR_11, &VAR_14);
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_cc_get_principal");
    VAR_13 = FUNC_16(VAR_10, &VAR_17.server,
     FUNC_19(VAR_10, VAR_14),
     "krbtgt",
     FUNC_19(VAR_10, VAR_14),
     ((void*)0));
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_make_principal");
    VAR_17.client = VAR_14;

    VAR_13 = FUNC_11(VAR_10, VAR_11, 0, &VAR_17, &VAR_18);
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_cc_retrieve_cred");

    {
 char *VAR_20;
 krb5_data VAR_21;
 VAR_13 = FUNC_21(VAR_10, VAR_18.client, &VAR_20);
 if(VAR_13)
     FUNC_14(VAR_10, 1, VAR_13, "krb5_unparse_name");
 VAR_21.data = VAR_20;
 VAR_21.length = FUNC_24(VAR_20) + 1;
 VAR_13 = FUNC_22(VAR_10, &VAR_2, &VAR_21);
 if(VAR_13)
     FUNC_14(VAR_10, 1, VAR_13, "krb5_write_message");
 FUNC_2(VAR_20);
    }

    VAR_13 = FUNC_22(VAR_10, &VAR_2, &VAR_18.ticket);
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_write_message");

    VAR_13 = FUNC_7(VAR_10, VAR_12, &VAR_18.session);
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_auth_con_setuserkey");

    VAR_13 = FUNC_20(VAR_10, &VAR_12, &VAR_2,
      VAR_1, VAR_14, 0, ((void*)0), &VAR_19);

    if (VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_recvauth");

    if (VAR_19->ticket.authorization_data) {
 AuthorizationData *VAR_22;
 int VAR_23;

 FUNC_23("Authorization data:\n");

 VAR_22 = VAR_19->ticket.authorization_data;
 for (VAR_23 = 0; VAR_23 < VAR_22->len; VAR_23++) {
     FUNC_23("\ttype %d, length %lu\n",
     VAR_22->val[VAR_23].ad_type,
     (unsigned long)VAR_22->val[VAR_23].ad_data.length);
 }
    }

    VAR_15.data = "hej";
    VAR_15.length = 3;

    FUNC_13 (&VAR_16);

    VAR_13 = FUNC_18 (VAR_10,
      VAR_12,
      &VAR_15,
      &VAR_16,
      ((void*)0));
    if (VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_mk_safe");

    VAR_13 = FUNC_22(VAR_10, &VAR_2, &VAR_16);
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_write_message");

    VAR_15.data = "hemligt";
    VAR_15.length = 7;

    FUNC_12 (&VAR_16);

    VAR_13 = FUNC_17 (VAR_10,
      VAR_12,
      &VAR_15,
      &VAR_16,
      ((void*)0));
    if (VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_mk_priv");

    VAR_13 = FUNC_22(VAR_10, &VAR_2, &VAR_16);
    if(VAR_13)
 FUNC_14(VAR_10, 1, VAR_13, "krb5_write_message");
    return 0;
}
