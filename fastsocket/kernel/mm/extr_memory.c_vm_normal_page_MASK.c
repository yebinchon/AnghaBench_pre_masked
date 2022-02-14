
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_pgoff; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,int ,int *) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

struct page *FUNC_9(struct vm_area_struct *VAR_5, unsigned long VAR_6,
    pte_t VAR_7)
{
 unsigned long VAR_8 = FUNC_6(VAR_7);

 if (VAR_0) {
  if (FUNC_2(!FUNC_7(VAR_7)))
   goto check_pfn;
  if (VAR_5->vm_flags & (VAR_3 | VAR_2))
   return ((void*)0);
  if (!FUNC_1(VAR_8))
   FUNC_5(VAR_5, VAR_6, VAR_7, ((void*)0));
  return ((void*)0);
 }



 if (FUNC_8(VAR_5->vm_flags & (VAR_3|VAR_2))) {
  if (VAR_5->vm_flags & VAR_2) {
   if (!FUNC_4(VAR_8))
    return ((void*)0);
   goto out;
  } else {
   unsigned long VAR_9;
   VAR_9 = (VAR_6 - VAR_5->vm_start) >> VAR_1;
   if (VAR_8 == VAR_5->vm_pgoff + VAR_9)
    return ((void*)0);
   if (!FUNC_0(VAR_5->vm_flags))
    return ((void*)0);
  }
 }

 if (FUNC_1(VAR_8))
  return ((void*)0);
check_pfn:
 if (FUNC_8(VAR_8 > VAR_4)) {
  FUNC_5(VAR_5, VAR_6, VAR_7, ((void*)0));
  return ((void*)0);
 }





out:
 return FUNC_3(VAR_8);
}
