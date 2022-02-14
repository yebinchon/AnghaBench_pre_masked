
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,int) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct vm_area_struct *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2, pgprot_t VAR_3,
  int VAR_4)
{
 struct mm_struct *VAR_5 = VAR_0->vm_mm;
 pgd_t *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8 = VAR_1;

 FUNC_0(VAR_1 >= VAR_2);
 VAR_6 = FUNC_6(VAR_5, VAR_1);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 do {
  VAR_7 = FUNC_4(VAR_1, VAR_2);
  if (FUNC_5(VAR_6))
   continue;
  FUNC_1(VAR_0, VAR_6, VAR_1, VAR_7, VAR_3,
     VAR_4);
 } while (VAR_6++, VAR_1 = VAR_7, VAR_1 != VAR_2);
 FUNC_3(VAR_0, VAR_8, VAR_2);
}
