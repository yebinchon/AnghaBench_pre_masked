
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int * krb5_principal ;
struct TYPE_16__ {int i; } ;
typedef TYPE_3__ krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_15__ {scalar_t__ endtime; } ;
struct TYPE_14__ {int keytype; } ;
struct TYPE_17__ {TYPE_2__ times; int * server; int client; TYPE_1__ session; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache_data ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_5__* kcm_ccache ;
typedef int in ;
struct TYPE_18__ {int mutex; int client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,char*,TYPE_5__**) ;
 int FUNC_5 (int ,TYPE_5__*,int *) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_3__,int *,TYPE_4__*,TYPE_4__**) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int **) ;
 scalar_t__ FUNC_12 (int *,char**) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_4__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_15(krb5_context VAR_0,
    kcm_client *VAR_1,
    kcm_operation VAR_2,
    krb5_storage *VAR_3,
    krb5_storage *VAR_4)
{
    krb5_error_code VAR_5;
    kcm_ccache VAR_6;
    char *VAR_7;
    krb5_principal VAR_8 = ((void*)0);
    krb5_ccache_data VAR_9;
    krb5_creds VAR_10, *VAR_11;
    krb5_kdc_flags VAR_12;

    FUNC_14(&VAR_10, 0, sizeof(VAR_10));

    VAR_5 = FUNC_12(VAR_3, &VAR_7);
    if (VAR_5)
 return VAR_5;

    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_7);

    VAR_5 = FUNC_13(VAR_3, &VAR_12.i);
    if (VAR_5) {
 FUNC_3(VAR_7);
 return VAR_5;
    }

    VAR_5 = FUNC_10(VAR_3, &VAR_10.session.keytype);
    if (VAR_5) {
 FUNC_3(VAR_7);
 return VAR_5;
    }

    VAR_5 = FUNC_11(VAR_3, &VAR_8);
    if (VAR_5) {
 FUNC_3(VAR_7);
 return VAR_5;
    }

    VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2,
        VAR_7, &VAR_6);
    if (VAR_5) {
 FUNC_8(VAR_0, VAR_8);
 FUNC_3(VAR_7);
 return VAR_5;
    }

    FUNC_0(&VAR_6->mutex);


    FUNC_5(VAR_0, VAR_6, &VAR_9);

    VAR_10.client = VAR_6->client;
    VAR_10.server = VAR_8;
    VAR_10.times.endtime = 0;


    VAR_5 = FUNC_9(VAR_0, 0, VAR_12,
       &VAR_9, &VAR_10, &VAR_11);

    FUNC_1(&VAR_6->mutex);

    FUNC_8(VAR_0, VAR_8);

    if (VAR_5 == 0)
 FUNC_7(VAR_0, VAR_11);

    FUNC_6(VAR_0, VAR_6);
    FUNC_3(VAR_7);

    return VAR_5;
}
