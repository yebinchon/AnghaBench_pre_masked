
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int *,unsigned long,unsigned long,unsigned char*) ;
 int FUNC_1 (struct vm_area_struct*,int *,unsigned long,unsigned long,unsigned char*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,unsigned char*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct vm_area_struct *VAR_1, pud_t *VAR_2,
   unsigned long VAR_3, unsigned long VAR_4,
   unsigned char *VAR_5)
{
 unsigned long VAR_6;
 pmd_t *VAR_7;

 VAR_7 = FUNC_5(VAR_2, VAR_3);
 do {
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  if (FUNC_6(*VAR_7)) {
   if (FUNC_0(VAR_1, VAR_7, VAR_3, VAR_6, VAR_5)) {
    VAR_5 += (VAR_6 - VAR_3) >> VAR_0;
    continue;
   }

  }
  if (FUNC_4(VAR_7))
   FUNC_2(VAR_1, VAR_3, VAR_6, VAR_5);
  else
   FUNC_1(VAR_1, VAR_7, VAR_3, VAR_6, VAR_5);
  VAR_5 += (VAR_6 - VAR_3) >> VAR_0;
 } while (VAR_7++, VAR_3 = VAR_6, VAR_3 != VAR_4);
}
