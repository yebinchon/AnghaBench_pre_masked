
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {int pde_unload_lock; TYPE_1__* proc_fops; int pde_users; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;
struct TYPE_4__ {long (* unlocked_ioctl ) (struct file*,unsigned int,unsigned long) ;int (* ioctl ) (struct inode*,struct file*,unsigned int,unsigned long) ;} ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static long FUNC_6(struct file *VAR_3, unsigned int VAR_4, unsigned long VAR_5)
{
 struct proc_dir_entry *VAR_6 = FUNC_0(VAR_3->f_path.dentry->d_inode);
 long VAR_7 = -VAR_2;
 long (*VAR_8)(struct file *, unsigned int, unsigned long);
 int (*VAR_9)(struct inode *, struct file *, unsigned int, unsigned long);

 FUNC_3(&VAR_6->pde_unload_lock);
 if (!VAR_6->proc_fops) {
  FUNC_4(&VAR_6->pde_unload_lock);
  return VAR_7;
 }
 VAR_6->pde_users++;
 VAR_8 = VAR_6->proc_fops->unlocked_ioctl;
 VAR_9 = VAR_6->proc_fops->ioctl;
 FUNC_4(&VAR_6->pde_unload_lock);

 if (VAR_8) {
  VAR_7 = VAR_8(VAR_3, VAR_4, VAR_5);
  if (VAR_7 == -VAR_1)
   VAR_7 = -VAR_0;
 } else if (VAR_9) {
  FUNC_1();
  VAR_7 = VAR_9(VAR_3->f_path.dentry->d_inode, VAR_3, VAR_4, VAR_5);
  FUNC_5();
 }

 FUNC_2(VAR_6);
 return VAR_7;
}
