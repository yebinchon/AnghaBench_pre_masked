
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_walker_t {int state; int (* func ) (struct fib6_walker_t*) ;struct fib6_node* node; int leaf; struct fib6_node* root; scalar_t__ prune; } ;
struct fib6_node {int fn_flags; int leaf; struct fib6_node* right; struct fib6_node* left; struct fib6_node* parent; } ;


 struct fib6_node* FUNC_0 (struct fib6_node*) ;

 void* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fib6_walker_t*) ;

__attribute__((used)) static int FUNC_3(struct fib6_walker_t *VAR_3)
{
 struct fib6_node *VAR_4, *VAR_5;

 for (;;) {
  VAR_4 = VAR_3->node;
  if (VAR_4 == ((void*)0))
   return 0;

  if (VAR_3->prune && VAR_4 != VAR_3->root &&
      VAR_4->fn_flags&VAR_2 && VAR_3->state < 132) {
   VAR_3->state = 132;
   VAR_3->leaf = VAR_4->leaf;
  }
  switch (VAR_3->state) {
  case 131:
   if (VAR_4->left) {
    VAR_3->node = VAR_4->left;
    VAR_3->state = VAR_0;
    continue;
   }
   VAR_3->state = 130;
  case 130:
   if (VAR_4->right) {
    VAR_3->node = VAR_4->right;
    VAR_3->state = VAR_0;
    continue;
   }
   VAR_3->state = 132;
   VAR_3->leaf = VAR_4->leaf;
  case 132:
   if (VAR_3->leaf && VAR_4->fn_flags&VAR_2) {
    int VAR_6 = VAR_3->func(VAR_3);
    if (VAR_6)
     return VAR_6;
    continue;
   }
   VAR_3->state = 128;
  case 128:
   if (VAR_4 == VAR_3->root)
    return 0;
   VAR_5 = VAR_4->parent;
   VAR_3->node = VAR_5;







   if (VAR_5->left == VAR_4) {
    VAR_3->state = 130;
    continue;
   }
   if (VAR_5->right == VAR_4) {
    VAR_3->state = 132;
    VAR_3->leaf = VAR_3->node->leaf;
    continue;
   }



  }
 }
}
