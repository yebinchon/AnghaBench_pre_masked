
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {int pde_unload_lock; TYPE_3__* proc_fops; int pde_users; } ;
struct poll_table_struct {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {unsigned int (* poll ) (struct file*,struct poll_table_struct*) ;} ;
struct TYPE_4__ {int d_inode; } ;


 unsigned int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_1, struct poll_table_struct *VAR_2)
{
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_1->f_path.dentry->d_inode);
 unsigned int VAR_4 = VAR_0;
 unsigned int (*VAR_5)(struct file *, struct poll_table_struct *);

 FUNC_2(&VAR_3->pde_unload_lock);
 if (!VAR_3->proc_fops) {
  FUNC_3(&VAR_3->pde_unload_lock);
  return VAR_4;
 }
 VAR_3->pde_users++;
 VAR_5 = VAR_3->proc_fops->poll;
 FUNC_3(&VAR_3->pde_unload_lock);

 if (VAR_5)
  VAR_4 = VAR_5(VAR_1, VAR_2);

 FUNC_1(VAR_3);
 return VAR_4;
}
