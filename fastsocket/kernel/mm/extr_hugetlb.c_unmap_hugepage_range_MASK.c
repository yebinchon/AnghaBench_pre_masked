
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_file; int vm_flags; } ;
struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {int i_mmap_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vm_area_struct *VAR_1, unsigned long VAR_2,
     unsigned long VAR_3, struct page *VAR_4)
{
 FUNC_1(&VAR_1->vm_file->f_mapping->i_mmap_lock);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_1->vm_flags &= ~VAR_0;
 FUNC_2(&VAR_1->vm_file->f_mapping->i_mmap_lock);
}
