
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_branch_data {int incorrect; int correct; } ;


 int FUNC_0 (struct ftrace_branch_data*,int,int) ;

void FUNC_1(struct ftrace_branch_data *VAR_0, int VAR_1, int VAR_2)
{






 FUNC_0(VAR_0, VAR_1, VAR_2);


 if (VAR_1 == VAR_2)
  VAR_0->correct++;
 else
  VAR_0->incorrect++;
}
