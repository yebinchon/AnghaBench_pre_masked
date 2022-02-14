
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ldns_rbtree_t ;
struct TYPE_7__ {scalar_t__ color; struct TYPE_7__* right; struct TYPE_7__* left; struct TYPE_7__* parent; } ;
typedef TYPE_1__ ldns_rbnode_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(ldns_rbtree_t* VAR_3, ldns_rbnode_t* VAR_4, ldns_rbnode_t* VAR_5)
{
 ldns_rbnode_t* VAR_6;
 int VAR_7 = 1;


 if(VAR_5->right == VAR_4) VAR_6 = VAR_5->left;
 else VAR_6 = VAR_5->right;

 while(VAR_7)
 {
  if(VAR_5 == VAR_1)
  {

   return;
  }

  if(VAR_6->color == VAR_2)
  {
   VAR_5->color = VAR_2;
   VAR_6->color = VAR_0;
   if(VAR_5->right == VAR_4)
    FUNC_1(VAR_3, VAR_5);
   else FUNC_0(VAR_3, VAR_5);

   if(VAR_5->right == VAR_4) VAR_6 = VAR_5->left;
   else VAR_6 = VAR_5->right;
  }

  if(VAR_5->color == VAR_0
   && VAR_6->color == VAR_0
   && VAR_6->left->color == VAR_0
   && VAR_6->right->color == VAR_0)
  {
   if(VAR_6 != VAR_1)
    VAR_6->color = VAR_2;

   VAR_4 = VAR_5;
   VAR_5 = VAR_5->parent;

   if(VAR_5->right == VAR_4) VAR_6 = VAR_5->left;
   else VAR_6 = VAR_5->right;
  }
  else VAR_7 = 0;
 }

 if(VAR_5->color == VAR_2
  && VAR_6->color == VAR_0
  && VAR_6->left->color == VAR_0
  && VAR_6->right->color == VAR_0)
 {

  if(VAR_6 != VAR_1)
   VAR_6->color = VAR_2;
  VAR_5->color = VAR_0;
  return;
 }



 if(VAR_5->right == VAR_4
  && VAR_6->color == VAR_0
  && VAR_6->right->color == VAR_2
  && VAR_6->left->color == VAR_0)
 {
  VAR_6->color = VAR_2;
  VAR_6->right->color = VAR_0;
  FUNC_0(VAR_3, VAR_6);

  if(VAR_5->right == VAR_4) VAR_6 = VAR_5->left;
  else VAR_6 = VAR_5->right;
 }
 else if(VAR_5->left == VAR_4
  && VAR_6->color == VAR_0
  && VAR_6->left->color == VAR_2
  && VAR_6->right->color == VAR_0)
 {
  VAR_6->color = VAR_2;
  VAR_6->left->color = VAR_0;
  FUNC_1(VAR_3, VAR_6);

  if(VAR_5->right == VAR_4) VAR_6 = VAR_5->left;
  else VAR_6 = VAR_5->right;
 }


 VAR_6->color = VAR_5->color;
 VAR_5->color = VAR_0;
 if(VAR_5->right == VAR_4)
 {
  VAR_6->left->color = VAR_0;
  FUNC_1(VAR_3, VAR_5);
 }
 else
 {
  VAR_6->right->color = VAR_0;
  FUNC_0(VAR_3, VAR_5);
 }
}
