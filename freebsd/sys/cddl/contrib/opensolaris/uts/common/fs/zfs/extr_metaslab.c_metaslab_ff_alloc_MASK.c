
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int* ms_lbas; TYPE_1__* ms_allocatable; } ;
typedef TYPE_2__ metaslab_t ;
typedef int avl_tree_t ;
struct TYPE_4__ {int rt_root; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int,int) ;

__attribute__((used)) static uint64_t
FUNC_2(metaslab_t *VAR_0, uint64_t VAR_1)
{







 uint64_t VAR_2 = VAR_1 & -VAR_1;
 uint64_t *VAR_3 = &VAR_0->ms_lbas[FUNC_0(VAR_2) - 1];
 avl_tree_t *VAR_4 = &VAR_0->ms_allocatable->rt_root;

 return (FUNC_1(VAR_4, VAR_3, VAR_1, VAR_2));
}
