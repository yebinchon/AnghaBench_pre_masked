
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ (* avl_compar ) (void*,void*) ;} ;
typedef TYPE_1__ avl_tree_t ;


 void* FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (void*,void*) ;

boolean_t
FUNC_5(avl_tree_t *VAR_2, void *VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if ((VAR_4 != ((void*)0)) && (VAR_2->avl_compar(VAR_3, VAR_4) < 0)) {
  FUNC_2(VAR_2, VAR_3);
  return (VAR_1);
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if ((VAR_4 != ((void*)0)) && (VAR_2->avl_compar(VAR_3, VAR_4) > 0)) {
  FUNC_2(VAR_2, VAR_3);
  return (VAR_1);
 }

 return (VAR_0);
}
