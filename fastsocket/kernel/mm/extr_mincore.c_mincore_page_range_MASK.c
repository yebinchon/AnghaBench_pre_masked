
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,int *,unsigned long,unsigned long,unsigned char*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned char*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct vm_area_struct *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3,
   unsigned char *VAR_4)
{
 unsigned long VAR_5;
 pgd_t *VAR_6;

 VAR_6 = FUNC_4(VAR_1->vm_mm, VAR_2);
 do {
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (FUNC_3(VAR_6))
   FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4);
  else
   FUNC_0(VAR_1, VAR_6, VAR_2, VAR_5, VAR_4);
  VAR_4 += (VAR_5 - VAR_2) >> VAR_0;
 } while (VAR_6++, VAR_2 = VAR_5, VAR_2 != VAR_3);
}
