
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zap_details {int dummy; } ;
struct vm_area_struct {int vm_mm; } ;
struct mmu_gather {TYPE_1__* mm; } ;
typedef int pud_t ;
typedef int pmd_t ;
struct TYPE_2__ {int mmap_sem; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (struct mmu_gather*,struct vm_area_struct*,int *) ;
 unsigned long FUNC_8 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,long*,struct zap_details*) ;

__attribute__((used)) static inline unsigned long FUNC_9(struct mmu_gather *VAR_1,
    struct vm_area_struct *VAR_2, pud_t *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    long *VAR_6, struct zap_details *VAR_7)
{
 pmd_t *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_3(VAR_3, VAR_4);
 do {
  VAR_9 = FUNC_1(VAR_4, VAR_5);
  if (FUNC_4(*VAR_8)) {
   if (VAR_9-VAR_4 != VAR_0) {
    FUNC_0(!FUNC_5(&VAR_1->mm->mmap_sem));
    FUNC_6(VAR_2->vm_mm, VAR_8);
   } else if (FUNC_7(VAR_1, VAR_2, VAR_8)) {
    (*VAR_6)--;
    continue;
   }

  }







  if (FUNC_2(VAR_8)) {
   (*VAR_6)--;
   continue;
  }
  VAR_9 = FUNC_8(VAR_1, VAR_2, VAR_8, VAR_4, VAR_9,
      VAR_6, VAR_7);
 } while (VAR_8++, VAR_4 = VAR_9, (VAR_4 != VAR_5 && *VAR_6 > 0));

 return VAR_4;
}
