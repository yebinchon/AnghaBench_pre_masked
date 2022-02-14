
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_file; } ;
struct hugepage_subpool {int dummy; } ;
struct TYPE_4__ {TYPE_1__* f_dentry; } ;
struct TYPE_3__ {int d_inode; } ;


 struct hugepage_subpool* FUNC_0 (int ) ;

__attribute__((used)) static inline struct hugepage_subpool *FUNC_1(struct vm_area_struct *VAR_0)
{
 return FUNC_0(VAR_0->vm_file->f_dentry->d_inode);
}
