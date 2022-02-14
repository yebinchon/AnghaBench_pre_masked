
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int list; } ;
struct TYPE_7__ {TYPE_1__ vm_set; } ;
struct vm_area_struct {int vm_flags; TYPE_2__ shared; } ;
struct TYPE_10__ {TYPE_4__* dentry; } ;
struct file {TYPE_5__ f_path; } ;
struct address_space {int i_mmap; int i_mmap_writable; } ;
struct TYPE_9__ {TYPE_3__* d_inode; } ;
struct TYPE_8__ {int i_writecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct vm_area_struct*,int *) ;

__attribute__((used)) static void FUNC_6(struct vm_area_struct *VAR_3,
  struct file *VAR_4, struct address_space *VAR_5)
{
 if (VAR_3->vm_flags & VAR_0)
  FUNC_0(&VAR_4->f_path.dentry->d_inode->i_writecount);
 if (VAR_3->vm_flags & VAR_2)
  VAR_5->i_mmap_writable--;

 FUNC_1(VAR_5);
 if (FUNC_4(VAR_3->vm_flags & VAR_1))
  FUNC_3(&VAR_3->shared.vm_set.list);
 else
  FUNC_5(VAR_3, &VAR_5->i_mmap);
 FUNC_2(VAR_5);
}
