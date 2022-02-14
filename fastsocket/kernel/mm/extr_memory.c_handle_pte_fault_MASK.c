
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_ops; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_2__ {int fault; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,unsigned int) ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,unsigned int,int ) ;
 int FUNC_2 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,unsigned int,int ) ;
 int FUNC_3 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,unsigned int,int ) ;
 int FUNC_4 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int *,int *,int ) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (struct mm_struct*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct vm_area_struct*,unsigned long,int *,int ,unsigned int) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct vm_area_struct*,unsigned long,int ) ;

int FUNC_20(struct mm_struct *VAR_1,
       struct vm_area_struct *VAR_2, unsigned long VAR_3,
       pte_t *VAR_4, pmd_t *VAR_5, unsigned int VAR_6)
{
 pte_t VAR_7;
 spinlock_t *VAR_8;

 VAR_7 = *VAR_4;
 if (!FUNC_12(VAR_7)) {
  if (FUNC_11(VAR_7)) {
   if (VAR_2->vm_ops) {
    if (FUNC_6(VAR_2->vm_ops->fault))
     return FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7);
   }
   return FUNC_0(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, VAR_6);
  }
  if (FUNC_7(VAR_7))
   return FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7);
  return FUNC_3(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7);
 }

 VAR_8 = FUNC_8(VAR_1, VAR_5);
 FUNC_17(VAR_8);
 if (FUNC_18(!FUNC_13(*VAR_4, VAR_7)))
  goto unlock;
 if (VAR_6 & VAR_0) {
  if (!FUNC_15(VAR_7))
   return FUNC_4(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_8, VAR_7);
  VAR_7 = FUNC_9(VAR_7);
 }
 VAR_7 = FUNC_10(VAR_7);
 if (FUNC_16(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6 & VAR_0)) {
  FUNC_19(VAR_2, VAR_3, VAR_7);
 } else {






  if (VAR_6 & VAR_0)
   FUNC_5(VAR_2, VAR_3);
 }
unlock:
 FUNC_14(VAR_4, VAR_8);
 return 0;
}
