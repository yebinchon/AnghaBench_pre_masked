
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,struct page*) ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*,int *,unsigned long) ;
 struct page* FUNC_2 (int ,struct vm_area_struct*,unsigned long,int ,int ) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,unsigned int) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (struct page*,struct mm_struct*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct vm_area_struct*) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct mm_struct *VAR_6, struct vm_area_struct *VAR_7,
          unsigned long VAR_8, pmd_t *VAR_9,
          unsigned int VAR_10)
{
 struct page *VAR_11;
 unsigned long VAR_12 = VAR_8 & VAR_1;
 pte_t *VAR_13;

 if (VAR_12 >= VAR_7->vm_start && VAR_12 + VAR_2 <= VAR_7->vm_end) {
  if (FUNC_14(FUNC_3(VAR_7)))
   return VAR_5;
  if (FUNC_14(FUNC_6(VAR_7)))
   return VAR_5;
  VAR_11 = FUNC_2(FUNC_13(VAR_7),
       VAR_7, VAR_12, FUNC_8(), 0);
  if (FUNC_14(!VAR_11)) {
   FUNC_4(VAR_4);
   goto out;
  }
  FUNC_4(VAR_3);
  if (FUNC_14(FUNC_7(VAR_11, VAR_6, VAR_0))) {
   FUNC_12(VAR_11);
   goto out;
  }

  return FUNC_0(VAR_6, VAR_7, VAR_12, VAR_9, VAR_11);
 }
out:





 if (FUNC_14(FUNC_9(*VAR_9)) &&
     FUNC_14(FUNC_1(VAR_6, VAR_7, VAR_9, VAR_8)))
  return VAR_5;

 if (FUNC_14(FUNC_10(*VAR_9)))
  return 0;






 VAR_13 = FUNC_11(VAR_9, VAR_8);
 return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_13, VAR_9, VAR_10);
}
