
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_6__ {int refcnt; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

krb5_error_code
FUNC_5(krb5_context VAR_0, kcm_ccache VAR_1)
{
    krb5_error_code VAR_2 = 0;

    FUNC_2(VAR_1);

    FUNC_0(&VAR_1->mutex);
    if (VAR_1->refcnt == 1) {
 FUNC_4(VAR_0, VAR_1);
 FUNC_3(VAR_1);
    } else {
 VAR_1->refcnt--;
 FUNC_1(&VAR_1->mutex);
    }

    return VAR_2;
}
