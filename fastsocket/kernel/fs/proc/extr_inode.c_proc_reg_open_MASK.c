
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int pde_unload_lock; int pde_openers; TYPE_1__* proc_fops; int pde_users; } ;
struct pde_opener {int (* release ) (struct inode*,struct file*) ;int lh; struct file* file; struct inode* inode; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* open ) (struct inode*,struct file*) ;int (* release ) (struct inode*,struct file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 int FUNC_2 (struct pde_opener*) ;
 struct pde_opener* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct proc_dir_entry *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = 0;
 int (*VAR_7)(struct inode *, struct file *);
 int (*VAR_8)(struct inode *, struct file *);
 struct pde_opener *VAR_9;
 VAR_9 = FUNC_3(sizeof(struct pde_opener), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_5(&VAR_5->pde_unload_lock);
 if (!VAR_5->proc_fops) {
  FUNC_6(&VAR_5->pde_unload_lock);
  FUNC_2(VAR_9);
  return -VAR_0;
 }
 VAR_5->pde_users++;
 VAR_7 = VAR_5->proc_fops->open;
 VAR_8 = VAR_5->proc_fops->release;
 FUNC_6(&VAR_5->pde_unload_lock);

 if (VAR_7)
  VAR_6 = VAR_7(VAR_3, VAR_4);

 FUNC_5(&VAR_5->pde_unload_lock);
 if (VAR_6 == 0 && VAR_8) {

  VAR_9->inode = VAR_3;
  VAR_9->file = VAR_4;

  VAR_9->release = VAR_8;
  FUNC_4(&VAR_9->lh, &VAR_5->pde_openers);
 } else
  FUNC_2(VAR_9);
 FUNC_1(VAR_5);
 FUNC_6(&VAR_5->pde_unload_lock);
 return VAR_6;
}
