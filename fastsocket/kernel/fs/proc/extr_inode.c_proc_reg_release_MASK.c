
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int pde_unload_lock; TYPE_1__* proc_fops; int pde_users; } ;
struct pde_opener {int (* release ) (struct inode*,struct file*) ;int lh; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct inode*,struct file*) ;} ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 struct pde_opener* FUNC_1 (struct proc_dir_entry*,struct inode*,struct file*) ;
 int FUNC_2 (struct pde_opener*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct proc_dir_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_dir_entry *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;
 int (*VAR_4)(struct inode *, struct file *);
 struct pde_opener *VAR_5;

 FUNC_5(&VAR_2->pde_unload_lock);
 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_1);
 if (!VAR_2->proc_fops) {
  if (VAR_5) {
   FUNC_3(&VAR_5->lh);
   FUNC_6(&VAR_2->pde_unload_lock);
   VAR_3 = VAR_5->release(VAR_0, VAR_1);
   FUNC_2(VAR_5);
  } else
   FUNC_6(&VAR_2->pde_unload_lock);
  return VAR_3;
 }
 VAR_2->pde_users++;
 VAR_4 = VAR_2->proc_fops->release;
 if (VAR_5) {
  FUNC_3(&VAR_5->lh);
  FUNC_2(VAR_5);
 }
 FUNC_6(&VAR_2->pde_unload_lock);

 if (VAR_4)
  VAR_3 = VAR_4(VAR_0, VAR_1);

 FUNC_4(VAR_2);
 return VAR_3;
}
