
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {unsigned long free_area_cache; unsigned long mmap_base; unsigned int cached_hole_size; unsigned int total_vm; unsigned int reserved_vm; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_0 ;

void FUNC_1(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3 = VAR_0;
 if (FUNC_0(!VAR_3)) {



  if (VAR_2 > VAR_1->free_area_cache)
   VAR_1->free_area_cache = VAR_2;


  if (VAR_1->free_area_cache > VAR_1->mmap_base)
   VAR_1->free_area_cache = VAR_1->mmap_base;
 } else {




  if (VAR_1->cached_hole_size >
      (VAR_1->total_vm - VAR_1->reserved_vm) / VAR_3) {
   VAR_1->free_area_cache = VAR_1->mmap_base;
   VAR_1->cached_hole_size = 0UL;
  }
 }
}
