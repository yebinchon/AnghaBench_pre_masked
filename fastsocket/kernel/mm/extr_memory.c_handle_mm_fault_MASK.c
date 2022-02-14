
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_ops; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,int *,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,unsigned int) ;
 int FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int ) ;
 int FUNC_6 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,unsigned int) ;
 int FUNC_7 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned int) ;
 int FUNC_8 (struct vm_area_struct*) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 int * FUNC_10 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int *,unsigned long) ;
 int * FUNC_16 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_17 (struct vm_area_struct*) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct mm_struct *VAR_4, struct vm_area_struct *VAR_5,
  unsigned long VAR_6, unsigned int VAR_7)
{
 pgd_t *VAR_8;
 pud_t *VAR_9;
 pmd_t *VAR_10;
 pte_t *VAR_11;

 FUNC_1(VAR_2);

 FUNC_3(VAR_1);

 if (FUNC_18(FUNC_8(VAR_5)))
  return FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);

retry:
 VAR_8 = FUNC_9(VAR_4, VAR_6);
 VAR_9 = FUNC_16(VAR_4, VAR_8, VAR_6);
 if (!VAR_9)
  return VAR_3;
 VAR_10 = FUNC_10(VAR_4, VAR_9, VAR_6);
 if (!VAR_10)
  return VAR_3;
 if (FUNC_11(*VAR_10) && FUNC_17(VAR_5)) {
  if (!VAR_5->vm_ops)
   return FUNC_4(VAR_4, VAR_5, VAR_6,
         VAR_10, VAR_7);
 } else {
  pmd_t VAR_12 = *VAR_10;
  int VAR_13;

  FUNC_2();
  if (FUNC_12(VAR_12)) {
   if (VAR_7 & VAR_0 &&
       !FUNC_14(VAR_12) &&
       !FUNC_13(VAR_12)) {
    VAR_13 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_10,
         VAR_12);





    if (FUNC_18(VAR_13 & VAR_3))
     goto retry;
    return VAR_13;
   }
   return 0;
  }
 }






 if (FUNC_18(FUNC_11(*VAR_10)) &&
     FUNC_18(FUNC_0(VAR_4, VAR_5, VAR_10, VAR_6)))
  return VAR_3;

 if (FUNC_18(FUNC_12(*VAR_10)))
  return 0;






 VAR_11 = FUNC_15(VAR_10, VAR_6);

 return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_11, VAR_10, VAR_7);
}
