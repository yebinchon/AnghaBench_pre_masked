
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_placement {scalar_t__ lpfn; scalar_t__ fpfn; int num_placement; int* placement; } ;
struct ttm_mem_reg {scalar_t__ start; scalar_t__ num_pages; int placement; scalar_t__ mm_node; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ttm_placement *VAR_2,
        struct ttm_mem_reg *VAR_3)
{
 int VAR_4;

 if (VAR_3->mm_node && VAR_2->lpfn != 0 &&
     (VAR_3->start < VAR_2->fpfn ||
      VAR_3->start + VAR_3->num_pages > VAR_2->lpfn))
  return -1;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_placement; VAR_4++) {
  if ((VAR_2->placement[VAR_4] & VAR_3->placement &
   VAR_0) &&
   (VAR_2->placement[VAR_4] & VAR_3->placement &
   VAR_1))
   return VAR_4;
 }
 return -1;
}
