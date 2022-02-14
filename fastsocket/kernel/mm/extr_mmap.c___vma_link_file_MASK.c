
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct file* vm_file; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; struct address_space* f_mapping; } ;
struct address_space {int i_mmap; int i_mmap_nonlinear; int i_mmap_writable; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_writecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct address_space*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vm_area_struct*,int *) ;
 int FUNC_5 (struct vm_area_struct*,int *) ;

__attribute__((used)) static void FUNC_6(struct vm_area_struct *VAR_3)
{
 struct file *VAR_4;

 VAR_4 = VAR_3->vm_file;
 if (VAR_4) {
  struct address_space *VAR_5 = VAR_4->f_mapping;

  if (VAR_3->vm_flags & VAR_0)
   FUNC_0(&VAR_4->f_path.dentry->d_inode->i_writecount);
  if (VAR_3->vm_flags & VAR_2)
   VAR_5->i_mmap_writable++;

  FUNC_1(VAR_5);
  if (FUNC_3(VAR_3->vm_flags & VAR_1))
   FUNC_4(VAR_3, &VAR_5->i_mmap_nonlinear);
  else
   FUNC_5(VAR_3, &VAR_5->i_mmap);
  FUNC_2(VAR_5);
 }
}
