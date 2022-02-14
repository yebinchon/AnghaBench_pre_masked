
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma; struct mm_struct* vm_mm; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_7 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct vm_area_struct *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    pmd_t *VAR_6, pmd_t *VAR_7)
{
 int VAR_8 = 0;
 pmd_t VAR_9;

 struct mm_struct *VAR_10 = VAR_2->vm_mm;

 if ((VAR_3 & ~VAR_0) ||
     (VAR_4 & ~VAR_0) ||
     (VAR_3 + VAR_1) > VAR_5)
  goto out;





 if (!FUNC_3(*VAR_7)) {
  FUNC_1(1);
  FUNC_0(FUNC_4(*VAR_7));
  goto out;
 }

 FUNC_8(&VAR_10->page_table_lock);
 if (FUNC_2(FUNC_4(*VAR_6))) {
  if (FUNC_5(*VAR_6)) {
   FUNC_9(&VAR_10->page_table_lock);
   FUNC_10(VAR_2->anon_vma, VAR_6);
   VAR_8 = -1;
  } else {
   VAR_9 = FUNC_6(VAR_10, VAR_3, VAR_6);
   FUNC_0(!FUNC_3(*VAR_7));
   FUNC_7(VAR_10, VAR_4, VAR_7, VAR_9);
   FUNC_9(&VAR_10->page_table_lock);
   VAR_8 = 1;
  }
 } else
  FUNC_9(&VAR_10->page_table_lock);

out:
 return VAR_8;
}
