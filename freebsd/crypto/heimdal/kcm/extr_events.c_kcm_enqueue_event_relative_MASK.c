
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int fire_time; int backoff_time; } ;
typedef TYPE_1__ kcm_event ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

krb5_error_code
FUNC_2(krb5_context VAR_0,
      kcm_event *VAR_1)
{
    krb5_error_code VAR_2;
    kcm_event VAR_3;

    VAR_3 = *VAR_1;
    VAR_3.backoff_time = VAR_3.fire_time;
    VAR_3.fire_time += FUNC_1(((void*)0));

    VAR_2 = FUNC_0(VAR_0, &VAR_3);

    return VAR_2;
}
