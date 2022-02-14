
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct file {TYPE_1__* f_dentry; int f_vfsmnt; } ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_2->f_dentry->d_inode,
        VAR_2->f_vfsmnt, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0(VAR_4);
  goto out;
 }
 FUNC_2(VAR_2->f_dentry->d_inode, VAR_5);
out:
 VAR_3->vm_ops = &VAR_1;
 VAR_3->vm_flags |= VAR_0;
 return 0;
}
