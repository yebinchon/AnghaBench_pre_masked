
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int dummy; } ;


 int FUNC_0 (struct ftrace_ops*) ;
 int VAR_0 ;
 int FUNC_1 (struct ftrace_ops*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ftrace_ops *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  FUNC_1(VAR_1, 0);
 FUNC_3(&VAR_0);

 return VAR_2;
}
