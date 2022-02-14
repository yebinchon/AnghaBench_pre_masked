
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rbtree_type ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int (*) (void const*,void const*)) ;

rbtree_type *
FUNC_2 (int (*VAR_0)(const void *, const void *))
{
 rbtree_type *VAR_1;


 VAR_1 = (rbtree_type *) FUNC_0(sizeof(rbtree_type));
 if (!VAR_1) {
  return ((void*)0);
 }


 FUNC_1(VAR_1, VAR_0);

 return VAR_1;
}
