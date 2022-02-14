
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct file*,void*,int ) ;

int FUNC_2(struct file *VAR_0, void *VAR_1, filldir_t VAR_2)
{
 struct inode *VAR_3 = VAR_0->f_path.dentry->d_inode;

 return FUNC_1(FUNC_0(VAR_3), VAR_0, VAR_1, VAR_2);
}
