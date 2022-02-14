
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zl_bp_tree; } ;
typedef TYPE_1__ zilog_t ;
struct TYPE_7__ {int zn_dva; } ;
typedef TYPE_2__ zil_bp_node_t ;
typedef int dva_t ;
typedef int blkptr_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int * FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (int,int ) ;

int
FUNC_6(zilog_t *VAR_2, const blkptr_t *VAR_3)
{
 avl_tree_t *VAR_4 = &VAR_2->zl_bp_tree;
 const dva_t *VAR_5;
 zil_bp_node_t *VAR_6;
 avl_index_t VAR_7;

 if (FUNC_1(VAR_3))
  return (0);

 VAR_5 = FUNC_0(VAR_3);

 if (FUNC_3(VAR_4, VAR_5, &VAR_7) != ((void*)0))
  return (FUNC_2(VAR_0));

 VAR_6 = FUNC_5(sizeof (zil_bp_node_t), VAR_1);
 VAR_6->zn_dva = *VAR_5;
 FUNC_4(VAR_4, VAR_6, VAR_7);

 return (0);
}
