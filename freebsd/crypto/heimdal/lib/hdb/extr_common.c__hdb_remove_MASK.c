
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
struct TYPE_5__ {int (* hdb__del ) (int ,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ HDB ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

krb5_error_code
FUNC_4(krb5_context VAR_0, HDB *VAR_1, krb5_const_principal VAR_2)
{
    krb5_data VAR_3;
    int VAR_4;

    FUNC_0(VAR_0, VAR_2, &VAR_3);

    VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    if (VAR_4) {
 FUNC_2(&VAR_3);
 return VAR_4;
    }
    VAR_4 = VAR_1->hdb__del(VAR_0, VAR_1, VAR_3);
    FUNC_2(&VAR_3);
    return VAR_4;
}
