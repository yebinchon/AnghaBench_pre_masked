
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {int color; struct ibv_mem_node* left; struct ibv_mem_node* right; struct ibv_mem_node* parent; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_mem_node*) ;
 int FUNC_1 (struct ibv_mem_node*) ;
 int FUNC_2 (struct ibv_mem_node*) ;
 struct ibv_mem_node* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ibv_mem_node *VAR_3)
{
 struct ibv_mem_node *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_3->left && VAR_3->right) {
  VAR_7 = VAR_3->left;
  while (VAR_7->right)
   VAR_7 = VAR_7->right;

  VAR_8 = VAR_7->color;
  VAR_4 = VAR_7->left;
  VAR_7->color = VAR_3->color;

  if (VAR_7->parent != VAR_3) {
   VAR_5 = VAR_7->parent;
   VAR_5->right = VAR_7->left;
   if (VAR_7->left)
    VAR_7->left->parent = VAR_5;

   VAR_7->left = VAR_3->left;
   VAR_3->left->parent = VAR_7;
  } else
   VAR_5 = VAR_7;

  VAR_7->right = VAR_3->right;
  VAR_3->right->parent = VAR_7;

  VAR_7->parent = VAR_3->parent;
  if (VAR_3->parent) {
   if (VAR_3->parent->left == VAR_3)
    VAR_3->parent->left = VAR_7;
   else
    VAR_3->parent->right = VAR_7;
  } else
   VAR_2 = VAR_7;
 } else {
  VAR_8 = VAR_3->color;

  VAR_4 = VAR_3->left ? VAR_3->left : VAR_3->right;
  VAR_5 = VAR_3->parent;

  if (VAR_4)
   VAR_4->parent = VAR_5;
  if (VAR_5) {
   if (VAR_5->left == VAR_3)
    VAR_5->left = VAR_4;
   else
    VAR_5->right = VAR_4;
  } else
   VAR_2 = VAR_4;
 }

 FUNC_2(VAR_3);

 if (VAR_8 == VAR_1)
  return;

 while ((!VAR_4 || VAR_4->color == VAR_0) && VAR_4 != VAR_2) {
  if (VAR_5->left == VAR_4) {
   VAR_6 = VAR_5->right;

   if (VAR_6->color == VAR_1) {
    VAR_5->color = VAR_1;
    VAR_6->color = VAR_0;
    FUNC_0(VAR_5);
    VAR_6 = VAR_5->right;
   }

   if ((!VAR_6->left || VAR_6->left->color == VAR_0) &&
       (!VAR_6->right || VAR_6->right->color == VAR_0)) {
    VAR_6->color = VAR_1;
    VAR_4 = VAR_5;
    VAR_5 = VAR_4->parent;
   } else {
    if (!VAR_6->right || VAR_6->right->color == VAR_0) {
     if (VAR_6->left)
      VAR_6->left->color = VAR_0;
     VAR_6->color = VAR_1;
     FUNC_1(VAR_6);
     VAR_6 = VAR_5->right;
    }

    VAR_6->color = VAR_5->color;
    VAR_5->color = VAR_0;
    if (VAR_6->right)
     VAR_6->right->color = VAR_0;
    FUNC_0(VAR_5);
    VAR_4 = VAR_2;
    break;
   }
  } else {
   VAR_6 = VAR_5->left;

   if (VAR_6->color == VAR_1) {
    VAR_5->color = VAR_1;
    VAR_6->color = VAR_0;
    FUNC_1(VAR_5);
    VAR_6 = VAR_5->left;
   }

   if ((!VAR_6->left || VAR_6->left->color == VAR_0) &&
       (!VAR_6->right || VAR_6->right->color == VAR_0)) {
    VAR_6->color = VAR_1;
    VAR_4 = VAR_5;
    VAR_5 = VAR_4->parent;
   } else {
    if (!VAR_6->left || VAR_6->left->color == VAR_0) {
     if (VAR_6->right)
      VAR_6->right->color = VAR_0;
     VAR_6->color = VAR_1;
     FUNC_0(VAR_6);
     VAR_6 = VAR_5->left;
    }

    VAR_6->color = VAR_5->color;
    VAR_5->color = VAR_0;
    if (VAR_6->left)
     VAR_6->left->color = VAR_0;
    FUNC_1(VAR_5);
    VAR_4 = VAR_2;
    break;
   }
  }
 }

 if (VAR_4)
  VAR_4->color = VAR_0;
}
