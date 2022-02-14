
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uaw_dir; void* uaw_next_result; } ;
typedef TYPE_1__ uu_avl_walk_t ;
struct TYPE_6__ {int ua_tree; } ;
typedef TYPE_2__ uu_avl_t ;
typedef int avl_tree_t ;


 void* FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,void*) ;

__attribute__((used)) static void *
FUNC_2(uu_avl_walk_t *VAR_0, uu_avl_t *VAR_1)
{
 void *VAR_2 = VAR_0->uaw_next_result;

 avl_tree_t *VAR_3 = &VAR_1->ua_tree;

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_0->uaw_next_result = (VAR_0->uaw_dir > 0)? FUNC_0(VAR_3, VAR_2) :
     FUNC_1(VAR_3, VAR_2);

 return (VAR_2);
}
