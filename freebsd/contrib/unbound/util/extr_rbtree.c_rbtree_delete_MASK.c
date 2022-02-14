
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int count; } ;
typedef TYPE_1__ rbtree_type ;
struct TYPE_21__ {scalar_t__ color; struct TYPE_21__* right; struct TYPE_21__* left; struct TYPE_21__* parent; } ;
typedef TYPE_2__ rbnode_type ;


 void* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,void const*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (TYPE_2__**,TYPE_2__**) ;

rbnode_type*
FUNC_7(rbtree_type *VAR_3, const void *VAR_4)
{
 rbnode_type *VAR_5;
 rbnode_type *VAR_6;
 if((VAR_5 = FUNC_4(VAR_3, VAR_4)) == 0) return 0;
 VAR_3->count--;


 if(VAR_5->left != VAR_1 && VAR_5->right != VAR_1)
 {

  rbnode_type *VAR_7 = VAR_5->right;
  while(VAR_7->left != VAR_1)
   VAR_7 = VAR_7->left;






  FUNC_5(&VAR_5->color, &VAR_7->color);


  FUNC_1(VAR_3, VAR_5->parent, VAR_5, VAR_7);
  if(VAR_5->right != VAR_7)
   FUNC_1(VAR_3, VAR_7->parent, VAR_7, VAR_5);


  FUNC_0(VAR_7->left, VAR_7, VAR_5);
  FUNC_0(VAR_7->left, VAR_7, VAR_5);
  FUNC_0(VAR_7->right, VAR_7, VAR_5);
  FUNC_0(VAR_7->right, VAR_7, VAR_5);
  FUNC_0(VAR_5->left, VAR_5, VAR_7);
  if(VAR_5->right != VAR_7)
   FUNC_0(VAR_5->right, VAR_5, VAR_7);
  if(VAR_5->right == VAR_7)
  {

   VAR_5->right = VAR_5;
   VAR_7->parent = VAR_7;
  }


  FUNC_6(&VAR_5->parent, &VAR_7->parent);
  FUNC_6(&VAR_5->left, &VAR_7->left);
  FUNC_6(&VAR_5->right, &VAR_7->right);


 }
 FUNC_2(VAR_5->left == VAR_1 || VAR_5->right == VAR_1);

 if(VAR_5->left != VAR_1) VAR_6 = VAR_5->left;
 else VAR_6 = VAR_5->right;


 FUNC_1(VAR_3, VAR_5->parent, VAR_5, VAR_6);
 FUNC_0(VAR_6, VAR_5, VAR_5->parent);

 if(VAR_5->color == VAR_2)
 {

 }
 else if(VAR_6->color == VAR_2)
 {

  if(VAR_6!=VAR_1) VAR_6->color = VAR_0;
 }
 else FUNC_3(VAR_3, VAR_6, VAR_5->parent);


 VAR_5->parent = VAR_1;
 VAR_5->left = VAR_1;
 VAR_5->right = VAR_1;
 VAR_5->color = VAR_0;
 return VAR_5;
}
