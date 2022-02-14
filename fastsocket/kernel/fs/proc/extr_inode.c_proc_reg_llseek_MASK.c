
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
typedef int loff_t ;
struct TYPE_5__ {int d_inode; } ;
struct TYPE_4__ {int (* llseek ) (struct file*,int ,int) ;} ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int ,int) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static loff_t FUNC_5(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct proc_dir_entry *VAR_4 = FUNC_0(VAR_1->f_path.dentry->d_inode);
 loff_t VAR_5 = -VAR_0;
 loff_t (*VAR_6)(struct file *, loff_t, int);

 FUNC_3(&VAR_4->pde_unload_lock);




 if (!VAR_4->proc_fops) {
  FUNC_4(&VAR_4->pde_unload_lock);
  return VAR_5;
 }




 VAR_4->pde_users++;




 VAR_6 = VAR_4->proc_fops->llseek;
 FUNC_4(&VAR_4->pde_unload_lock);

 if (!VAR_6)
  VAR_6 = FUNC_1;
 VAR_5 = VAR_6(VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_4);
 return VAR_5;
}
