
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {unsigned long free_area_cache; unsigned long cached_hole_size; int total_vm; int reserved_vm; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;

void FUNC_1(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = VAR_1;
 if (FUNC_0(!VAR_4)) {



  if (VAR_3 >= VAR_0 && VAR_3 < VAR_2->free_area_cache) {
   VAR_2->free_area_cache = VAR_3;
   VAR_2->cached_hole_size = ~0UL;
  }
 } else {




  if (VAR_2->cached_hole_size >
      (VAR_2->total_vm - VAR_2->reserved_vm) / VAR_4) {
   VAR_2->free_area_cache = VAR_0;
   VAR_2->cached_hole_size = 0UL;
  }
 }
}
