
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int *,unsigned long,int ) ;
 int FUNC_1 (int ,int *,unsigned long,unsigned long,int ,int) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static inline void FUNC_7(struct vm_area_struct *VAR_1, pud_t *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4, pgprot_t VAR_5,
  int VAR_6)
{
 pmd_t *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 do {
  VAR_8 = FUNC_2(VAR_3, VAR_4);
  if (FUNC_5(*VAR_7)) {
   if (VAR_8 - VAR_3 != VAR_0)
    FUNC_6(VAR_1->vm_mm, VAR_7);
   else if (FUNC_0(VAR_1, VAR_7, VAR_3, VAR_5))
    continue;

  }
  if (FUNC_3(VAR_7))
   continue;
  FUNC_1(VAR_1->vm_mm, VAR_7, VAR_3, VAR_8, VAR_5,
     VAR_6);
 } while (VAR_7++, VAR_3 = VAR_8, VAR_3 != VAR_4);
}
