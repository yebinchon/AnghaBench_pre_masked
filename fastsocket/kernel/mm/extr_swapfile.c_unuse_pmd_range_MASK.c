
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,struct page*) ;

__attribute__((used)) static inline int FUNC_4(struct vm_area_struct *VAR_0, pud_t *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3,
    swp_entry_t VAR_4, struct page *VAR_5)
{
 pmd_t *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 do {
  VAR_7 = FUNC_0(VAR_2, VAR_3);
  if (FUNC_1(VAR_6))
   continue;
  VAR_8 = FUNC_3(VAR_0, VAR_6, VAR_2, VAR_7, VAR_4, VAR_5);
  if (VAR_8)
   return VAR_8;
 } while (VAR_6++, VAR_2 = VAR_7, VAR_2 != VAR_3);
 return 0;
}
