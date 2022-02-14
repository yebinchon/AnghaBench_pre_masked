
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int dummy; } ;


 int FUNC_0 (struct ftrace_ops*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ftrace_ops*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct ftrace_ops *VAR_2)
{
 int VAR_3 = -1;

 FUNC_2(&VAR_1);

 if (FUNC_4(VAR_0))
  goto out_unlock;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_2, 0);


 out_unlock:
 FUNC_3(&VAR_1);
 return VAR_3;
}
