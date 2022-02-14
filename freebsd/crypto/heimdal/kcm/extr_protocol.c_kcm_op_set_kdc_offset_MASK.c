
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
typedef int int32_t ;
struct TYPE_4__ {int mutex; int kdc_offset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,char*,TYPE_1__**) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_0,
        kcm_client *VAR_1,
        kcm_operation VAR_2,
        krb5_storage *VAR_3,
        krb5_storage *VAR_4)
{
    krb5_error_code VAR_5;
    kcm_ccache VAR_6;
    int32_t VAR_7;
    char *VAR_8;

    VAR_5 = FUNC_7(VAR_3, &VAR_8);
    if (VAR_5)
 return VAR_5;

    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_8);

    VAR_5 = FUNC_6(VAR_3, &VAR_7);
    if (VAR_5) {
 FUNC_3(VAR_8);
 return VAR_5;
    }

    VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_8, &VAR_6);
    FUNC_3(VAR_8);
    if (VAR_5)
 return VAR_5;

    FUNC_0(&VAR_6->mutex);
    VAR_6->kdc_offset = VAR_7;
    FUNC_1(&VAR_6->mutex);

    FUNC_5(VAR_0, VAR_6);

    return VAR_5;
}
