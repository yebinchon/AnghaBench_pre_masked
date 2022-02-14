
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_5__ {unsigned long long rs_end; unsigned long long rs_start; } ;
typedef TYPE_1__ range_seg_t ;
struct TYPE_6__ {int ms_allocatable_by_size; } ;
typedef TYPE_2__ metaslab_t ;
typedef int avl_tree_t ;


 TYPE_1__* FUNC_0 (int *) ;

uint64_t
FUNC_1(metaslab_t *VAR_0)
{
 avl_tree_t *VAR_1 = &VAR_0->ms_allocatable_by_size;
 range_seg_t *VAR_2;

 if (VAR_1 == ((void*)0) || (VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
  return (0ULL);

 return (VAR_2->rs_end - VAR_2->rs_start);
}
