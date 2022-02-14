
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_mounts {int ns; int root; } ;
struct inode {int dummy; } ;
struct file {struct proc_mounts* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_mounts *VAR_2 = VAR_1->private_data;
 FUNC_0(&VAR_2->root);
 FUNC_1(VAR_2->ns);
 return FUNC_2(VAR_0, VAR_1);
}
