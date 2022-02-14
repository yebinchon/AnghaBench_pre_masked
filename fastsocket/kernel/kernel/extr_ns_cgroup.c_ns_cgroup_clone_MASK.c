
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int *,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct pid*) ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct task_struct *VAR_2, struct pid *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_2(VAR_4, VAR_0, "%d", FUNC_1(VAR_3));
 return FUNC_0(VAR_2, &VAR_1, VAR_4);
}
