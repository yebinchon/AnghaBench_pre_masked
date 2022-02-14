
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct files_struct* files; } ;
struct files_struct {int dummy; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct files_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

void FUNC_3(struct files_struct *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0;
 struct files_struct *VAR_3;

 VAR_3 = VAR_2->files;
 FUNC_1(VAR_2);
 VAR_2->files = VAR_1;
 FUNC_2(VAR_2);
 FUNC_0(VAR_3);
}
