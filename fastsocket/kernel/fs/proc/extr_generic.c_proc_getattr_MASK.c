
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct proc_dir_entry {scalar_t__ nlink; } ;
struct kstat {int dummy; } ;
struct inode {scalar_t__ i_nlink; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {struct proc_dir_entry* pde; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct kstat*) ;

__attribute__((used)) static int FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1,
   struct kstat *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct proc_dir_entry *VAR_4 = FUNC_0(VAR_3)->pde;
 if (VAR_4 && VAR_4->nlink)
  VAR_3->i_nlink = VAR_4->nlink;

 FUNC_1(VAR_3, VAR_2);
 return 0;
}
