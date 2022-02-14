
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {struct ftrace_ops* next; } ;


 int FUNC_0 (struct ftrace_ops*,struct ftrace_ops*) ;

__attribute__((used)) static void FUNC_1(struct ftrace_ops **VAR_0, struct ftrace_ops *VAR_1)
{
 VAR_1->next = *VAR_0;






 FUNC_0(*VAR_0, VAR_1);
}
