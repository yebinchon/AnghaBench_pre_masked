
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {struct ftrace_ops* next; } ;


 struct ftrace_ops VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ftrace_ops **VAR_1, struct ftrace_ops *VAR_2)
{
 struct ftrace_ops **VAR_3;





 if (*VAR_1 == VAR_2 && VAR_2->next == &VAR_0) {
  *VAR_1 = &VAR_0;
  return 0;
 }

 for (VAR_3 = VAR_1; *VAR_3 != &VAR_0; VAR_3 = &(*VAR_3)->next)
  if (*VAR_3 == VAR_2)
   break;

 if (*VAR_3 != VAR_2)
  return -1;

 *VAR_3 = (*VAR_3)->next;
 return 0;
}
