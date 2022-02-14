
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int space_ref_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,void**) ;
 int FUNC_2 (int *,int) ;

void
FUNC_3(avl_tree_t *VAR_0)
{
 space_ref_t *VAR_1;
 void *VAR_2 = ((void*)0);

 while ((VAR_1 = FUNC_1(VAR_0, &VAR_2)) != ((void*)0))
  FUNC_2(VAR_1, sizeof (*VAR_1));

 FUNC_0(VAR_0);
}
