
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pud_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct vm_area_struct *VAR_0, pgd_t *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, pgprot_t VAR_4,
  int VAR_5)
{
 pud_t *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 do {
  VAR_7 = FUNC_1(VAR_2, VAR_3);
  if (FUNC_2(VAR_6))
   continue;
  FUNC_0(VAR_0, VAR_6, VAR_2, VAR_7, VAR_4,
     VAR_5);
 } while (VAR_6++, VAR_2 = VAR_7, VAR_2 != VAR_3);
}
