
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ftrace_graph_ret {int depth; int overrun; int calltime; scalar_t__ func; } ;
struct TYPE_4__ {int curr_ret_stack; int trace_overrun; TYPE_1__* ret_stack; } ;
struct TYPE_3__ {unsigned long fp; unsigned long ret; int calltime; scalar_t__ func; } ;


 int FUNC_0 (int,char*,unsigned long,unsigned long,void*,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ftrace_graph_ret *VAR_2, unsigned long *VAR_3,
   unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_0->curr_ret_stack;

 if (FUNC_4(VAR_5 < 0)) {
  FUNC_3();
  FUNC_1(1);

  *VAR_3 = (unsigned long)VAR_1;
  return;
 }
 *VAR_3 = VAR_0->ret_stack[VAR_5].ret;
 VAR_2->func = VAR_0->ret_stack[VAR_5].func;
 VAR_2->calltime = VAR_0->ret_stack[VAR_5].calltime;
 VAR_2->overrun = FUNC_2(&VAR_0->trace_overrun);
 VAR_2->depth = VAR_5;
}
