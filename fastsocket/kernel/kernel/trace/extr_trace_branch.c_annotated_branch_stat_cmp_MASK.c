
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_branch_data {int dummy; } ;


 long FUNC_0 (struct ftrace_branch_data*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct ftrace_branch_data *VAR_2 = VAR_0;
 struct ftrace_branch_data *VAR_3 = VAR_1;

 long VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 < VAR_5)
  return -1;
 if (VAR_4 > VAR_5)
  return 1;
 else
  return 0;
}
