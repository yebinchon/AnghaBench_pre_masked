
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; struct vm_area_struct* vm_next; } ;
struct mmu_gather {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mmu_gather*,unsigned long,scalar_t__,unsigned long,unsigned long) ;
 int FUNC_1 (struct mmu_gather*,unsigned long,scalar_t__,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct vm_area_struct*) ;

void FUNC_5(struct mmu_gather *VAR_1, struct vm_area_struct *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 while (VAR_2) {
  struct vm_area_struct *VAR_5 = VAR_2->vm_next;
  unsigned long VAR_6 = VAR_2->vm_start;





  FUNC_3(VAR_2);
  FUNC_4(VAR_2);

  if (FUNC_2(VAR_2)) {
   FUNC_1(VAR_1, VAR_6, VAR_2->vm_end,
    VAR_3, VAR_5? VAR_5->vm_start: VAR_4);
  } else {



   while (VAR_5 && VAR_5->vm_start <= VAR_2->vm_end + VAR_0
          && !FUNC_2(VAR_5)) {
    VAR_2 = VAR_5;
    VAR_5 = VAR_2->vm_next;
    FUNC_3(VAR_2);
    FUNC_4(VAR_2);
   }
   FUNC_0(VAR_1, VAR_6, VAR_2->vm_end,
    VAR_3, VAR_5? VAR_5->vm_start: VAR_4);
  }
  VAR_2 = VAR_5;
 }
}
