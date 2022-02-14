
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ctime; int i_atime; int i_mtime; } ;
struct TYPE_2__ {int * proc_get_link; } ;
struct proc_inode {struct inode vfs_inode; int * ns_ops; int * ns; int * sysctl_entry; int * sysctl; int * pde; TYPE_1__ op; scalar_t__ fd; int * pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_3)
{
 struct proc_inode *VAR_4;
 struct inode *VAR_5;

 VAR_4 = (struct proc_inode *)FUNC_0(VAR_2, VAR_1);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->pid = ((void*)0);
 VAR_4->fd = 0;
 VAR_4->op.proc_get_link = ((void*)0);
 VAR_4->pde = ((void*)0);
 VAR_4->sysctl = ((void*)0);
 VAR_4->sysctl_entry = ((void*)0);
 VAR_4->ns = ((void*)0);
 VAR_4->ns_ops = ((void*)0);
 VAR_5 = &VAR_4->vfs_inode;
 VAR_5->i_mtime = VAR_5->i_atime = VAR_5->i_ctime = VAR_0;
 return VAR_5;
}
