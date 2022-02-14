
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; int anon_vma; } ;
struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mm_struct*,struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*,int *,int *,struct vm_area_struct*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_6 (struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 int FUNC_10 (struct vm_area_struct*) ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(struct mm_struct *VAR_5, struct mm_struct *VAR_6,
  struct vm_area_struct *VAR_7)
{
 pgd_t *VAR_8, *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = VAR_7->vm_start;
 unsigned long VAR_12 = VAR_7->vm_end;
 int VAR_13;







 if (!(VAR_7->vm_flags & (VAR_1|VAR_3|VAR_4|VAR_2))) {
  if (!VAR_7->anon_vma)
   return 0;
 }

 if (FUNC_4(VAR_7))
  return FUNC_0(VAR_5, VAR_6, VAR_7);

 if (FUNC_11(FUNC_3(VAR_7))) {




  VAR_13 = FUNC_10(VAR_7);
  if (VAR_13)
   return VAR_13;
 }







 if (FUNC_2(VAR_7->vm_flags))
  FUNC_6(VAR_6, VAR_11, VAR_12);

 VAR_13 = 0;
 VAR_9 = FUNC_9(VAR_5, VAR_11);
 VAR_8 = FUNC_9(VAR_6, VAR_11);
 do {
  VAR_10 = FUNC_7(VAR_11, VAR_12);
  if (FUNC_8(VAR_8))
   continue;
  if (FUNC_11(FUNC_1(VAR_5, VAR_6, VAR_9, VAR_8,
         VAR_7, VAR_11, VAR_10))) {
   VAR_13 = -VAR_0;
   break;
  }
 } while (VAR_9++, VAR_8++, VAR_11 = VAR_10, VAR_11 != VAR_12);

 if (FUNC_2(VAR_7->vm_flags))
  FUNC_5(VAR_6,
        VAR_7->vm_start, VAR_12);
 return VAR_13;
}
