
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid_entry {int len; int name; } ;
struct file {int dummy; } ;
typedef int filldir_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,int ,int ,int ,int ,struct task_struct*,struct pid_entry const*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
 filldir_t VAR_3, struct task_struct *VAR_4, const struct pid_entry *VAR_5)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5->name, VAR_5->len,
    VAR_0, VAR_4, VAR_5);
}
