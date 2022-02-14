
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long FUNC_0 (struct task_struct*,int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_3, char *VAR_4)
{
 unsigned long VAR_5 = 0;

 FUNC_2(&VAR_0);
 if (FUNC_1(VAR_3))
  VAR_5 = FUNC_0(VAR_3, ((void*)0), ((void*)0),
     VAR_2 + VAR_1);
 FUNC_3(&VAR_0);
 return FUNC_4(VAR_4, "%lu\n", VAR_5);
}
