
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* cmp ) (void const*,int ) ;TYPE_2__* root; } ;
typedef TYPE_1__ rbtree_type ;
struct TYPE_8__ {struct TYPE_8__* right; struct TYPE_8__* left; int key; } ;
typedef TYPE_2__ rbnode_type ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (void const*,int )) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (void const*,int ) ;

int
FUNC_4(rbtree_type *VAR_1, const void *VAR_2,
 rbnode_type **VAR_3)
{
 int VAR_4;
 rbnode_type *VAR_5;

 FUNC_2(VAR_3);


 VAR_5 = VAR_1->root;

 *VAR_3 = ((void*)0);
 FUNC_0(FUNC_1(VAR_1->cmp));


 while (VAR_5 != VAR_0) {
  VAR_4 = VAR_1->cmp(VAR_2, VAR_5->key);
  if (VAR_4 == 0) {

   *VAR_3 = VAR_5;
   return 1;
  }
  if (VAR_4 < 0) {
   VAR_5 = VAR_5->left;
  } else {

   *VAR_3 = VAR_5;
   VAR_5 = VAR_5->right;
  }
 }
 return 0;
}
