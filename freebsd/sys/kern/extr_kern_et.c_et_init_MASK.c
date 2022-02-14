
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {int et_active; void* et_arg; int * et_deregister_cb; int * et_event_cb; } ;
typedef int et_event_cb_t ;
typedef int et_deregister_cb_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct eventtimer *VAR_2, et_event_cb_t *VAR_3,
    et_deregister_cb_t *VAR_4, void *VAR_5)
{

 if (VAR_3 == ((void*)0))
  return (VAR_1);
 if (VAR_2->et_active)
  return (VAR_0);

 VAR_2->et_active = 1;
 VAR_2->et_event_cb = VAR_3;
 VAR_2->et_deregister_cb = VAR_4;
 VAR_2->et_arg = VAR_5;
 return (0);
}
