
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* cxa_func ) (void*) ;} ;
struct atexit_fn {void* fn_dso; void* fn_arg; TYPE_1__ fn_ptr; int fn_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct atexit_fn*) ;

int
FUNC_1(void (*VAR_1)(void *), void *VAR_2, void *VAR_3)
{
 struct atexit_fn VAR_4;
 int VAR_5;

 VAR_4.fn_type = VAR_0;
 VAR_4.fn_ptr.cxa_func = VAR_1;
 VAR_4.fn_arg = VAR_2;
 VAR_4.fn_dso = VAR_3;

 VAR_5 = FUNC_0(&VAR_4);
 return (VAR_5);
}
