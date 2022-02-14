
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_mem_node {scalar_t__ color; struct ibv_mem_node* parent; struct ibv_mem_node* left; struct ibv_mem_node* right; } ;
struct TYPE_2__ {void* color; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ibv_mem_node*) ;
 int FUNC_1 (struct ibv_mem_node*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ibv_mem_node *VAR_3)
{
 struct ibv_mem_node *VAR_4, *VAR_5, *VAR_6;

 while (VAR_3->parent && VAR_3->parent->color == VAR_1) {
  VAR_4 = VAR_3->parent;
  VAR_5 = VAR_3->parent->parent;

  if (VAR_4 == VAR_5->left) {
   VAR_6 = VAR_5->right;

   if (VAR_6 && VAR_6->color == VAR_1) {
    VAR_4->color = VAR_0;
    VAR_6->color = VAR_0;
    VAR_5->color = VAR_1;

    VAR_3 = VAR_5;
   } else {
    if (VAR_3 == VAR_4->right) {
     FUNC_0(VAR_4);
     VAR_3 = VAR_4;
     VAR_4 = VAR_3->parent;
    }

    VAR_4->color = VAR_0;
    VAR_5->color = VAR_1;

    FUNC_1(VAR_5);
   }
  } else {
   VAR_6 = VAR_5->left;

   if (VAR_6 && VAR_6->color == VAR_1) {
    VAR_4->color = VAR_0;
    VAR_6->color = VAR_0;
    VAR_5->color = VAR_1;

    VAR_3 = VAR_5;
   } else {
    if (VAR_3 == VAR_4->left) {
     FUNC_1(VAR_4);
     VAR_3 = VAR_4;
     VAR_4 = VAR_3->parent;
    }

    VAR_4->color = VAR_0;
    VAR_5->color = VAR_1;

    FUNC_0(VAR_5);
   }
  }
 }

 VAR_2->color = VAR_0;
}
