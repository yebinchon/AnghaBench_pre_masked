
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_field {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ftrace_event_field*) ;

__attribute__((used)) static int FUNC_1(struct ftrace_event_field *VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_3) &&
     (VAR_4 != VAR_0 && VAR_4 != VAR_2 && VAR_4 != VAR_1))
  return 0;
 if (!FUNC_0(VAR_3) && VAR_4 == VAR_1)
  return 0;

 return 1;
}
