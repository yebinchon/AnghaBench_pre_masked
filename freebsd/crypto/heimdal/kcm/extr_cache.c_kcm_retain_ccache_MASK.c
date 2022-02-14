
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int mutex; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

krb5_error_code
FUNC_3(krb5_context VAR_0,
    kcm_ccache VAR_1)
{
    FUNC_2(VAR_1);

    FUNC_0(&VAR_1->mutex);
    VAR_1->refcnt++;
    FUNC_1(&VAR_1->mutex);

    return 0;
}
