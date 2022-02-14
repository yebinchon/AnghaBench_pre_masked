
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int curr_ret_stack; TYPE_1__* ret_stack; int trace_overrun; } ;
struct TYPE_3__ {unsigned long ret; unsigned long func; unsigned long long calltime; unsigned long fp; scalar_t__ subtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;
 unsigned long long FUNC_3 () ;

int
FUNC_4(unsigned long VAR_3, unsigned long VAR_4, int *VAR_5,
    unsigned long VAR_6)
{
 unsigned long long VAR_7;
 int VAR_8;

 if (!VAR_2->ret_stack)
  return -VAR_0;





 FUNC_2();


 if (VAR_2->curr_ret_stack == VAR_1 - 1) {
  FUNC_0(&VAR_2->trace_overrun);
  return -VAR_0;
 }

 VAR_7 = FUNC_3();

 VAR_8 = ++VAR_2->curr_ret_stack;
 FUNC_1();
 VAR_2->ret_stack[VAR_8].ret = VAR_3;
 VAR_2->ret_stack[VAR_8].func = VAR_4;
 VAR_2->ret_stack[VAR_8].calltime = VAR_7;
 VAR_2->ret_stack[VAR_8].subtime = 0;
 VAR_2->ret_stack[VAR_8].fp = VAR_6;
 *VAR_5 = VAR_8;

 return 0;
}
