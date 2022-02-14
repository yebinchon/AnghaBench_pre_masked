
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ uncompressed_base; scalar_t__ compressed_base; struct TYPE_5__* parent; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_1__ index_tree_node ;
struct TYPE_6__ {scalar_t__ count; TYPE_1__* root; TYPE_1__* rightmost; TYPE_1__* leftmost; } ;
typedef TYPE_2__ index_tree ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(index_tree *VAR_0, index_tree_node *VAR_1)
{
 VAR_1->parent = VAR_0->rightmost;
 VAR_1->left = ((void*)0);
 VAR_1->right = ((void*)0);

 ++VAR_0->count;


 if (VAR_0->root == ((void*)0)) {
  VAR_0->root = VAR_1;
  VAR_0->leftmost = VAR_1;
  VAR_0->rightmost = VAR_1;
  return;
 }


 FUNC_1(VAR_0->rightmost->uncompressed_base <= VAR_1->uncompressed_base);
 FUNC_1(VAR_0->rightmost->compressed_base < VAR_1->compressed_base);



 VAR_0->rightmost->right = VAR_1;
 VAR_0->rightmost = VAR_1;






 uint32_t VAR_2 = VAR_0->count ^ (FUNC_0(1) << FUNC_2(VAR_0->count));
 if (VAR_2 != 0) {

  VAR_2 = FUNC_3(VAR_0->count) + 2;
  do {
   VAR_1 = VAR_1->parent;
  } while (--VAR_2 > 0);


  index_tree_node *VAR_3 = VAR_1->right;

  if (VAR_1->parent == ((void*)0)) {
   VAR_0->root = VAR_3;
  } else {
   FUNC_1(VAR_1->parent->right == VAR_1);
   VAR_1->parent->right = VAR_3;
  }

  VAR_3->parent = VAR_1->parent;

  VAR_1->right = VAR_3->left;
  if (VAR_1->right != ((void*)0))
   VAR_1->right->parent = VAR_1;

  VAR_3->left = VAR_1;
  VAR_1->parent = VAR_3;
 }

 return;
}
