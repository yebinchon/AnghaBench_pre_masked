
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int dummy; } ;
struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mmu_gather*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct mmu_gather**,struct vm_area_struct*,unsigned long,unsigned long,unsigned long*,struct zap_details*,int ) ;
 int FUNC_3 (struct mm_struct*) ;

unsigned long FUNC_4(struct vm_area_struct *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, struct zap_details *VAR_3)
{
 struct mm_struct *VAR_4 = VAR_0->vm_mm;
 struct mmu_gather *VAR_5;
 unsigned long VAR_6 = VAR_1 + VAR_2;
 unsigned long VAR_7 = 0;

 FUNC_0();
 FUNC_3(VAR_4);
 VAR_6 = FUNC_2(&VAR_5, VAR_0, VAR_1, VAR_6, &VAR_7, VAR_3, 0);
 if (VAR_5)
  FUNC_1(VAR_5, VAR_1, VAR_6);
 return VAR_6;
}
