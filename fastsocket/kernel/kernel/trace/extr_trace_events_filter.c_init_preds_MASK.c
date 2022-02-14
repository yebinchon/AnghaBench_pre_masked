
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {scalar_t__ filter; int flags; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct ftrace_event_call *VAR_1)
{
 if (VAR_1->filter)
  return 0;

 VAR_1->flags &= ~VAR_0;
 VAR_1->filter = FUNC_2();
 if (FUNC_0(VAR_1->filter))
  return FUNC_1(VAR_1->filter);

 return 0;
}
