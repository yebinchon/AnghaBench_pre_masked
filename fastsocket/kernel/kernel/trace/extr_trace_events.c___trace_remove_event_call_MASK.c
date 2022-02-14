
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {int system; int list; int dir; scalar_t__ event; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ftrace_event_call*) ;
 int FUNC_3 (struct ftrace_event_call*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ftrace_event_call*) ;

__attribute__((used)) static void FUNC_7(struct ftrace_event_call *VAR_0)
{
 FUNC_3(VAR_0, 0);
 if (VAR_0->event)
  FUNC_0(VAR_0->event);
 FUNC_1(VAR_0->dir);
 FUNC_4(&VAR_0->list);
 FUNC_6(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0->system);
}
