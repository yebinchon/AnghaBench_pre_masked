
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct compress_tree_node {int labs; size_t offset; int * dname; scalar_t__ parent; scalar_t__ right; scalar_t__ left; } ;


 scalar_t__ FUNC_0 (struct regional*,int) ;

__attribute__((used)) static struct compress_tree_node*
FUNC_1(uint8_t* VAR_0, int VAR_1, size_t VAR_2,
 struct regional* VAR_3)
{
 struct compress_tree_node* VAR_4 = (struct compress_tree_node*)
  FUNC_0(VAR_3, sizeof(struct compress_tree_node));
 if(!VAR_4) return 0;
 VAR_4->left = 0;
 VAR_4->right = 0;
 VAR_4->parent = 0;
 VAR_4->dname = VAR_0;
 VAR_4->labs = VAR_1;
 VAR_4->offset = VAR_2;
 return VAR_4;
}
