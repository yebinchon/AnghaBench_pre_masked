
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


struct TYPE_18__ {int renewable; int renew; int validate; int forwardable; int proxiable; scalar_t__ request_anonymous; } ;
struct TYPE_20__ {TYPE_3__ b; scalar_t__ i; } ;
typedef TYPE_5__ krb5_kdc_flags ;
typedef int krb5_error_code ;
typedef scalar_t__ krb5_deltat ;
struct TYPE_19__ {scalar_t__ endtime; } ;
struct TYPE_16__ {int forwardable; int proxiable; } ;
struct TYPE_17__ {TYPE_1__ b; } ;
struct TYPE_21__ {int client; TYPE_4__ times; TYPE_2__ flags; int server; } ;
typedef TYPE_6__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int in ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char const*,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_6__*) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int FUNC_7 (int ,TYPE_6__*) ;
 int FUNC_8 (int ,int ,int ,TYPE_6__*,TYPE_6__**) ;
 int FUNC_9 (int ,int ,TYPE_5__,int *,int *,TYPE_6__*,TYPE_6__**) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(krb5_context VAR_5,
        int VAR_6,
        int VAR_7,
        krb5_ccache VAR_8,
        const char *VAR_9,
        krb5_deltat VAR_10)
{
    krb5_error_code VAR_11;
    krb5_creds VAR_12, *VAR_13 = ((void*)0);
    krb5_kdc_flags VAR_14;

    FUNC_11(&VAR_12, 0, sizeof(VAR_12));

    VAR_11 = FUNC_3(VAR_5, VAR_8, &VAR_12.client);
    if(VAR_11) {
 FUNC_10(VAR_5, VAR_11, "krb5_cc_get_principal");
 return VAR_11;
    }
    VAR_11 = FUNC_0(VAR_5, VAR_12.client, VAR_9, &VAR_12.server);
    if(VAR_11) {
 FUNC_10(VAR_5, VAR_11, "get_server");
 goto out;
    }

    if (VAR_6) {




 FUNC_8(VAR_5, VAR_0, VAR_8, &VAR_12, &VAR_13);
    }

    VAR_14.i = 0;
    VAR_14.b.renewable = VAR_14.b.renew = VAR_6;
    VAR_14.b.validate = VAR_7;

    if (VAR_3 != -1)
 VAR_14.b.forwardable = VAR_3;
    else if (VAR_13)
 VAR_14.b.forwardable = VAR_13->flags.b.forwardable;

    if (VAR_4 != -1)
 VAR_14.b.proxiable = VAR_4;
    else if (VAR_13)
 VAR_14.b.proxiable = VAR_13->flags.b.proxiable;

    if (VAR_1)
 VAR_14.b.request_anonymous = VAR_1;
    if(VAR_10)
 VAR_12.times.endtime = FUNC_12(((void*)0)) + VAR_10;

    if (VAR_13) {
 FUNC_7 (VAR_5, VAR_13);
 VAR_13 = ((void*)0);
    }


    VAR_11 = FUNC_9(VAR_5,
       VAR_8,
       VAR_14,
       ((void*)0),
       ((void*)0),
       &VAR_12,
       &VAR_13);
    if(VAR_11) {
 FUNC_10(VAR_5, VAR_11, "krb5_get_kdc_cred");
 goto out;
    }
    VAR_11 = FUNC_4(VAR_5, VAR_8, VAR_12.client);
    if(VAR_11) {
 FUNC_7 (VAR_5, VAR_13);
 FUNC_10(VAR_5, VAR_11, "krb5_cc_initialize");
 goto out;
    }
    VAR_11 = FUNC_5(VAR_5, VAR_8, VAR_13);

    if(VAR_11 == 0 && VAR_9 == ((void*)0)) {


 if(VAR_2 && FUNC_1())
     FUNC_2(VAR_5, VAR_8, ((void*)0), ((void*)0));

    }

    FUNC_7 (VAR_5, VAR_13);
    if(VAR_11) {
 FUNC_10(VAR_5, VAR_11, "krb5_cc_store_cred");
 goto out;
    }
out:
    FUNC_6(VAR_5, &VAR_12);
    return VAR_11;
}
