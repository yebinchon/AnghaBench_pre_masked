
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {int flags; int * filter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct ftrace_event_call *VAR_1)
{
 FUNC_0(VAR_1->filter);
 VAR_1->filter = ((void*)0);
 VAR_1->flags &= ~VAR_0;
}
