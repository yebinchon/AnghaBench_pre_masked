
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct compress_tree_node {int labs; struct compress_tree_node* parent; } ;


 scalar_t__ FUNC_0 (struct compress_tree_node**,int *,int,struct compress_tree_node**,int*,struct compress_tree_node***) ;

__attribute__((used)) static struct compress_tree_node*
FUNC_1(struct compress_tree_node** VAR_0, uint8_t* VAR_1,
 int VAR_2, struct compress_tree_node*** VAR_3)
{
 struct compress_tree_node* VAR_4;
 int VAR_5;
 if(VAR_2 <= 1)
  return 0;
 if(FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_5, VAR_3)) {

  return VAR_4;
 }

 if(VAR_5>1) {


  while(VAR_4 && VAR_4->labs > VAR_5)
   VAR_4 = VAR_4->parent;
  return VAR_4;
 }
 return 0;
}
