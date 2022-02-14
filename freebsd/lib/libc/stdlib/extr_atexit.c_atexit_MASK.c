
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* std_func ) () ;} ;
struct atexit_fn {int * fn_dso; int * fn_arg; TYPE_1__ fn_ptr; int fn_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct atexit_fn*) ;

int
FUNC_1(void (*VAR_1)(void))
{
 struct atexit_fn VAR_2;
 int VAR_3;

 VAR_2.fn_type = VAR_0;
 VAR_2.fn_ptr.std_func = VAR_1;
 VAR_2.fn_arg = ((void*)0);
 VAR_2.fn_dso = ((void*)0);

 VAR_3 = FUNC_0(&VAR_2);
 return (VAR_3);
}
