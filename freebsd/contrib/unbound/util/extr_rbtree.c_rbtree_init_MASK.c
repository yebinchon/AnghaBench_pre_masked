
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cmp ) (void const*,void const*) ;scalar_t__ count; int root; } ;
typedef TYPE_1__ rbtree_type ;


 int VAR_0 ;

void
FUNC_0(rbtree_type *VAR_1, int (*VAR_2)(const void *, const void *))
{

 VAR_1->root = VAR_0;
 VAR_1->count = 0;
 VAR_1->cmp = VAR_2;
}
