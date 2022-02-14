
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timeout_t ;
struct callout_handle {TYPE_1__* callout; } ;
struct callout_cpu {int dummy; } ;
struct TYPE_3__ {void* c_arg; int * c_func; } ;


 int FUNC_0 (struct callout_cpu*) ;
 struct callout_cpu* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(timeout_t *VAR_0, void *VAR_1, struct callout_handle VAR_2)
{
 struct callout_cpu *VAR_3;






 if (VAR_2.callout == ((void*)0))
  return;

 VAR_3 = FUNC_1(VAR_2.callout);
 if (VAR_2.callout->c_func == VAR_0 && VAR_2.callout->c_arg == VAR_1)
  FUNC_2(VAR_2.callout);
 FUNC_0(VAR_3);
}
