
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kp; } ;
struct trace_probe {int flags; TYPE_1__ rp; } ;
struct ftrace_event_call {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct trace_probe*) ;

__attribute__((used)) static void FUNC_3(struct ftrace_event_call *VAR_2)
{
 struct trace_probe *VAR_3 = (struct trace_probe *)VAR_2->data;

 VAR_3->flags &= ~VAR_1;
 if (!(VAR_3->flags & (VAR_1 | VAR_0))) {
  if (FUNC_2(VAR_3))
   FUNC_1(&VAR_3->rp);
  else
   FUNC_0(&VAR_3->rp.kp);
 }
}
