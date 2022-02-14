
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {scalar_t__ action; } ;
typedef TYPE_1__ kcm_event ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;

krb5_error_code
FUNC_3(krb5_context VAR_2,
    kcm_event *VAR_3)
{
    krb5_error_code VAR_4;

    if (VAR_3->action == VAR_0) {
 return 0;
    }

    FUNC_0(&VAR_1);
    VAR_4 = FUNC_2(VAR_2, VAR_3);
    FUNC_1(&VAR_1);

    return VAR_4;
}
