
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_flags ;
typedef int krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_5__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int const*) ;

krb5_error_code
FUNC_4(krb5_context VAR_0,
         kcm_ccache VAR_1,
         krb5_flags VAR_2,
         const krb5_creds *VAR_3)
{
    krb5_error_code VAR_4;

    FUNC_2(VAR_1);

    FUNC_0(&VAR_1->mutex);
    VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_1(&VAR_1->mutex);

    return VAR_4;
}
