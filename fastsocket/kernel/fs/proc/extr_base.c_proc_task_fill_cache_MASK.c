
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int name ;
typedef int filldir_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,int ,char*,int,int ,struct task_struct*,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, filldir_t VAR_4,
 struct task_struct *VAR_5, int VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8 = FUNC_1(VAR_7, sizeof(VAR_7), "%d", VAR_6);
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8,
    VAR_1, VAR_5, ((void*)0));
}
