
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int nonlinear_vma; int check_mapping; } ;
struct vm_area_struct {int vm_mm; } ;
struct mmu_gather {int dummy; } ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct mmu_gather*,struct vm_area_struct*) ;
 int FUNC_7 (struct mmu_gather*,struct vm_area_struct*) ;
 unsigned long FUNC_8 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,long*,struct zap_details*) ;

__attribute__((used)) static unsigned long FUNC_9(struct mmu_gather *VAR_0,
    struct vm_area_struct *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3,
    long *VAR_4, struct zap_details *VAR_5)
{
 pgd_t *VAR_6;
 unsigned long VAR_7;

 if (VAR_5 && !VAR_5->check_mapping && !VAR_5->nonlinear_vma)
  VAR_5 = ((void*)0);

 FUNC_0(VAR_2 >= VAR_3);
 FUNC_2();
 FUNC_7(VAR_0, VAR_1);
 VAR_6 = FUNC_5(VAR_1->vm_mm, VAR_2);
 do {
  VAR_7 = FUNC_3(VAR_2, VAR_3);
  if (FUNC_4(VAR_6)) {
   (*VAR_4)--;
   continue;
  }
  VAR_7 = FUNC_8(VAR_0, VAR_1, VAR_6, VAR_2, VAR_7,
      VAR_4, VAR_5);
 } while (VAR_6++, VAR_2 = VAR_7, (VAR_2 != VAR_3 && *VAR_4 > 0));
 FUNC_6(VAR_0, VAR_1);
 FUNC_1();

 return VAR_2;
}
