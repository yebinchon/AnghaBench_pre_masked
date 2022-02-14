
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int dummy; } ;
struct vm_area_struct {int dummy; } ;
struct mmu_gather {int dummy; } ;
typedef int pud_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,long*,struct zap_details*) ;

__attribute__((used)) static inline unsigned long FUNC_4(struct mmu_gather *VAR_0,
    struct vm_area_struct *VAR_1, pgd_t *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4,
    long *VAR_5, struct zap_details *VAR_6)
{
 pud_t *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3);
 do {
  VAR_8 = FUNC_0(VAR_3, VAR_4);
  if (FUNC_1(VAR_7)) {
   (*VAR_5)--;
   continue;
  }
  VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_7, VAR_3, VAR_8,
      VAR_5, VAR_6);
 } while (VAR_7++, VAR_3 = VAR_8, (VAR_3 != VAR_4 && *VAR_5 > 0));

 return VAR_3;
}
