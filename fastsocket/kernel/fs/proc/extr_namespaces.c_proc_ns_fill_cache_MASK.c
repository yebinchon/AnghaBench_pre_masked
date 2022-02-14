
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_ns_operations {int name; } ;
struct file {int dummy; } ;
typedef int filldir_t ;


 int FUNC_0 (struct file*,void*,int ,int ,int ,int ,struct task_struct*,struct proc_ns_operations const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
 filldir_t VAR_3, struct task_struct *VAR_4,
 const struct proc_ns_operations *VAR_5)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_5->name, FUNC_1(VAR_5->name),
    VAR_0, VAR_4, VAR_5);
}
