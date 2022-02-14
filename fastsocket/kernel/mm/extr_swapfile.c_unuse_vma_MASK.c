
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_mm; } ;
struct page {int dummy; } ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct page*,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,struct page*) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_2,
    swp_entry_t VAR_3, struct page *VAR_4)
{
 pgd_t *VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_0(VAR_4, VAR_2);
  if (VAR_6 == -VAR_0)
   return 0;
  else
   VAR_7 = VAR_6 + VAR_1;
 } else {
  VAR_6 = VAR_2->vm_start;
  VAR_7 = VAR_2->vm_end;
 }

 VAR_5 = FUNC_4(VAR_2->vm_mm, VAR_6);
 do {
  VAR_8 = FUNC_2(VAR_6, VAR_7);
  if (FUNC_3(VAR_5))
   continue;
  VAR_9 = FUNC_5(VAR_2, VAR_5, VAR_6, VAR_8, VAR_3, VAR_4);
  if (VAR_9)
   return VAR_9;
 } while (VAR_5++, VAR_6 = VAR_8, VAR_6 != VAR_7);
 return 0;
}
