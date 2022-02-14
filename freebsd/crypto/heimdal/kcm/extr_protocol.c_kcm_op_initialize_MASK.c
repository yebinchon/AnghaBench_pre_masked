
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
struct TYPE_6__ {int fire_time; TYPE_2__* ccache; int action; scalar_t__ backoff_time; scalar_t__ expire_time; } ;
typedef TYPE_1__ kcm_event ;
typedef int kcm_client ;
typedef TYPE_2__* kcm_ccache ;
struct TYPE_7__ {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,char*,TYPE_2__**) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_1,
    kcm_client *VAR_2,
    kcm_operation VAR_3,
    krb5_storage *VAR_4,
    krb5_storage *VAR_5)
{
    kcm_ccache VAR_6;
    krb5_principal VAR_7;
    krb5_error_code VAR_8;
    char *VAR_9;




    FUNC_0(VAR_1, VAR_2, VAR_3);

    VAR_8 = FUNC_7(VAR_4, &VAR_9);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_6(VAR_4, &VAR_7);
    if (VAR_8) {
 FUNC_1(VAR_9);
 return VAR_8;
    }

    VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_9, &VAR_6);
    if (VAR_8) {
 FUNC_1(VAR_9);
 FUNC_5(VAR_1, VAR_7);
 return VAR_8;
    }

    VAR_6->client = VAR_7;

    FUNC_1(VAR_9);
    FUNC_4(VAR_1, VAR_6);

    return VAR_8;
}
