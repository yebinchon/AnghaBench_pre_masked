
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lzma_vli ;
struct TYPE_6__ {scalar_t__ uncompressed_base; struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_2__ index_tree_node ;
struct TYPE_7__ {TYPE_1__* leftmost; TYPE_2__* root; } ;
typedef TYPE_3__ index_tree ;
struct TYPE_5__ {scalar_t__ uncompressed_base; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void *
FUNC_1(const index_tree *VAR_0, lzma_vli VAR_1)
{
 const index_tree_node *VAR_2 = ((void*)0);
 const index_tree_node *VAR_3 = VAR_0->root;

 FUNC_0(VAR_0->leftmost == ((void*)0)
   || VAR_0->leftmost->uncompressed_base == 0);



 while (VAR_3 != ((void*)0)) {
  if (VAR_3->uncompressed_base > VAR_1) {
   VAR_3 = VAR_3->left;
  } else {
   VAR_2 = VAR_3;
   VAR_3 = VAR_3->right;
  }
 }

 return (void *)(VAR_2);
}
