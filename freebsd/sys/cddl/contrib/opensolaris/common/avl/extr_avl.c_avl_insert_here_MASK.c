
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* avl_compar ) (void*,void*) ;int avl_offset; } ;
typedef TYPE_1__ avl_tree_t ;
struct TYPE_9__ {struct TYPE_9__** avl_child; } ;
typedef TYPE_2__ avl_node_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (void*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 void* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,void*,int ) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (void*,void*) ;
 int FUNC_7 (void*,void*) ;

void
FUNC_8(
 avl_tree_t *VAR_2,
 void *VAR_3,
 void *VAR_4,
 int VAR_5)
{
 avl_node_t *VAR_6;
 int VAR_7 = VAR_5;




 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 == VAR_1 || VAR_5 == VAR_0);





 VAR_6 = FUNC_1(VAR_4, VAR_2->avl_offset);
 if (VAR_6->avl_child[VAR_7] != ((void*)0)) {
  VAR_6 = VAR_6->avl_child[VAR_7];
  VAR_7 = 1 - VAR_7;
  while (VAR_6->avl_child[VAR_7] != ((void*)0)) {







   VAR_6 = VAR_6->avl_child[VAR_7];
  }







 }
 FUNC_0(VAR_6->avl_child[VAR_7] == ((void*)0));

 FUNC_4(VAR_2, VAR_3, FUNC_2(VAR_6, VAR_7));
}
