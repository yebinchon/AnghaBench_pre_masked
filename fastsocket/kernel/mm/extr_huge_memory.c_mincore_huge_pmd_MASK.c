
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; int anon_vma; } ;
typedef int pmd_t ;
struct TYPE_2__ {int page_table_lock; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct vm_area_struct *VAR_1, pmd_t *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  unsigned char *VAR_5)
{
 int VAR_6 = 0;

 FUNC_4(&VAR_1->vm_mm->page_table_lock);
 if (FUNC_0(FUNC_2(*VAR_2))) {
  VAR_6 = !FUNC_3(*VAR_2);
  FUNC_5(&VAR_1->vm_mm->page_table_lock);
  if (FUNC_6(!VAR_6))
   FUNC_7(VAR_1->anon_vma, VAR_2);
  else {




   FUNC_1(VAR_5, 1, (VAR_4 - VAR_3) >> VAR_0);
  }
 } else
  FUNC_5(&VAR_1->vm_mm->page_table_lock);

 return VAR_6;
}
