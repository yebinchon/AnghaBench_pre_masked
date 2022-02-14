
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {unsigned long cached_hole_size; unsigned long free_area_cache; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;

unsigned long
FUNC_3(struct file *VAR_7, unsigned long VAR_8,
  unsigned long VAR_9, unsigned long VAR_10, unsigned long VAR_11)
{
 struct mm_struct *VAR_12 = VAR_4->mm;
 struct vm_area_struct *VAR_13;
 unsigned long VAR_14;
 unsigned int VAR_15 = VAR_6;

 if (VAR_9 > VAR_2)
  return -VAR_0;

 if (VAR_11 & VAR_1)
  return VAR_8;

 if (VAR_8) {
  VAR_8 = FUNC_0(VAR_8);
  VAR_13 = FUNC_1(VAR_12, VAR_8);
  if (VAR_2 - VAR_9 >= VAR_8 &&
      (!VAR_13 || VAR_8 + VAR_9 <= VAR_13->vm_start) &&
      (VAR_8 >= VAR_5))
   return VAR_8;
 }

 if (VAR_9 > VAR_12->cached_hole_size || VAR_15) {
         VAR_14 = VAR_8 = VAR_12->free_area_cache;
 } else {
         VAR_14 = VAR_8 = VAR_3;
         VAR_12->cached_hole_size = 0;
 }

full_search:
 for (VAR_13 = FUNC_1(VAR_12, VAR_8); ; VAR_13 = VAR_13->vm_next) {

  if (VAR_2 - VAR_9 < VAR_8) {




   if (VAR_14 != VAR_3) {
    VAR_8 = VAR_3;
           VAR_14 = VAR_8;
    if (FUNC_2(!VAR_15))
     VAR_12->cached_hole_size = 0;
    goto full_search;
   }
   return -VAR_0;
  }
  if ((!VAR_13 || VAR_8 + VAR_9 <= VAR_13->vm_start) &&
      (VAR_8 >= VAR_5)) {



   VAR_12->free_area_cache = VAR_8 + VAR_9;
   return VAR_8;
  }
  if (!VAR_15 &&
    VAR_8 + VAR_12->cached_hole_size < VAR_13->vm_start)
          VAR_12->cached_hole_size = VAR_13->vm_start - VAR_8;

  VAR_8 = VAR_13->vm_end;
 }
}
