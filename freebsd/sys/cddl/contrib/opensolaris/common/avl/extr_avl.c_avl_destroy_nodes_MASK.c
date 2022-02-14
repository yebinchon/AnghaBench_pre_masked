
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t avl_offset; int avl_numnodes; TYPE_2__* avl_root; } ;
typedef TYPE_1__ avl_tree_t ;
struct TYPE_12__ {struct TYPE_12__** avl_child; } ;
typedef TYPE_2__ avl_node_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (void*,size_t) ;
 void* FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*) ;
 uintptr_t FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 uintptr_t VAR_0 ;
 void* FUNC_6 (TYPE_1__*) ;

void *
FUNC_7(avl_tree_t *VAR_1, void **VAR_2)
{
 avl_node_t *VAR_3;
 avl_node_t *VAR_4;
 int VAR_5;
 void *VAR_6;
 size_t VAR_7 = VAR_1->avl_offset;




 if (*VAR_2 == ((void*)0)) {
  VAR_6 = FUNC_6(VAR_1);




  if (VAR_6 == ((void*)0)) {
   *VAR_2 = (void *)VAR_0;
   return (((void*)0));
  }

  VAR_3 = FUNC_1(VAR_6, VAR_7);
  VAR_4 = FUNC_5(VAR_3);
  goto check_right_side;
 }




 VAR_4 = (avl_node_t *)((uintptr_t)(*VAR_2) & ~VAR_0);
 if (VAR_4 == ((void*)0)) {
  if (VAR_1->avl_root != ((void*)0)) {
   FUNC_0(VAR_1->avl_numnodes == 1);
   VAR_1->avl_root = ((void*)0);
   VAR_1->avl_numnodes = 0;
  }
  return (((void*)0));
 }




 VAR_5 = (uintptr_t)(*VAR_2) & VAR_0;
 VAR_4->avl_child[VAR_5] = ((void*)0);
 FUNC_0(VAR_1->avl_numnodes > 1);
 --VAR_1->avl_numnodes;




 if (VAR_5 == 1 || VAR_4->avl_child[1] == ((void*)0)) {
  VAR_3 = VAR_4;
  VAR_4 = FUNC_5(VAR_4);
  goto done;
 }




 VAR_3 = VAR_4->avl_child[1];
 while (VAR_3->avl_child[0] != ((void*)0)) {
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->avl_child[0];
 }





check_right_side:
 if (VAR_3->avl_child[1] != ((void*)0)) {
  FUNC_0(FUNC_3(VAR_3) == 1);
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->avl_child[1];
  FUNC_0(VAR_3->avl_child[0] == ((void*)0) &&
      VAR_3->avl_child[1] == ((void*)0));
 } else {
  FUNC_0(FUNC_3(VAR_3) <= 0);
 }

done:
 if (VAR_4 == ((void*)0)) {
  *VAR_2 = (void *)VAR_0;
  FUNC_0(VAR_3 == VAR_1->avl_root);
 } else {
  *VAR_2 = (void *)((uintptr_t)VAR_4 | FUNC_4(VAR_3));
 }

 return (FUNC_2(VAR_3, VAR_7));
}
