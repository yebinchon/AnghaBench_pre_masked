
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (struct page*) ;
 TYPE_1__* VAR_1 ;
 struct vm_area_struct* FUNC_3 (int ,unsigned long) ;
 unsigned int FUNC_4 (void const*) ;
 int FUNC_5 (void const*) ;
 struct page* FUNC_6 (void const*) ;

unsigned int FUNC_7(const void *VAR_2)
{
 struct page *VAR_3;





 if (!VAR_2 || !FUNC_5(VAR_2))
  return 0;

 VAR_3 = FUNC_6(VAR_2);





 if (FUNC_1(VAR_3))
  return FUNC_4(VAR_2);







 if (!FUNC_0(VAR_3)) {
  struct vm_area_struct *VAR_4;

  VAR_4 = FUNC_3(VAR_1->mm, (unsigned long)VAR_2);
  if (VAR_4)
   return VAR_4->vm_end - VAR_4->vm_start;
 }





 return VAR_0 << FUNC_2(VAR_3);
}
