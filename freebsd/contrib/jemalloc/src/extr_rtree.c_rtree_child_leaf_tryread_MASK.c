
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int child; } ;
typedef TYPE_1__ rtree_node_elm_t ;
typedef int rtree_leaf_elm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static rtree_leaf_elm_t *
FUNC_2(rtree_node_elm_t *VAR_2, bool VAR_3) {
 rtree_leaf_elm_t *VAR_4;

 if (VAR_3) {
  VAR_4 = (rtree_leaf_elm_t *)FUNC_1(&VAR_2->child,
      VAR_1);
 } else {
  VAR_4 = (rtree_leaf_elm_t *)FUNC_1(&VAR_2->child,
      VAR_0);
 }

 FUNC_0(!VAR_3 || VAR_4 != ((void*)0));
 return VAR_4;
}
