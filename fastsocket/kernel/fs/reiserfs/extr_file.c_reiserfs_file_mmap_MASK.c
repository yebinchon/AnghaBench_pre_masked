
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {int i_mmap; int i_flags; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = VAR_1->f_path.dentry->d_inode;
 FUNC_2(&(FUNC_0(VAR_3)->i_mmap));
 FUNC_0(VAR_3)->i_flags |= VAR_0;
 FUNC_3(&(FUNC_0(VAR_3)->i_mmap));

 return FUNC_1(VAR_1, VAR_2);
}
