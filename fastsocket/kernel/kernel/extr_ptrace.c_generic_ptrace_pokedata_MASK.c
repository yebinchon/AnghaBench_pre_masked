
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,long,long*,int,int) ;

int FUNC_1(struct task_struct *VAR_1, long VAR_2, long VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3, sizeof(VAR_3), 1);
 return (VAR_4 == sizeof(VAR_3)) ? 0 : -VAR_0;
}
