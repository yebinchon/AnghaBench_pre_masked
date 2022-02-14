
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree {struct archive_rb_node* rbt_root; } ;
struct archive_rb_node {struct archive_rb_node** rb_nodes; } ;


 unsigned int const VAR_0 ;
 struct archive_rb_node* FUNC_0 (struct archive_rb_node*) ;
 scalar_t__ FUNC_1 (struct archive_rb_node*) ;
 int FUNC_2 (struct archive_rb_tree*,struct archive_rb_node*) ;
 scalar_t__ FUNC_3 (struct archive_rb_node*) ;

struct archive_rb_node *
FUNC_4(struct archive_rb_tree *VAR_1,
    struct archive_rb_node *VAR_2, const unsigned int VAR_3)
{
 const unsigned int VAR_4 = VAR_3 ^ VAR_0;

 if (VAR_2 == ((void*)0)) {
  VAR_2 = VAR_1->rbt_root;
  if (FUNC_3(VAR_2))
   return ((void*)0);
  while (!FUNC_3(VAR_2->rb_nodes[VAR_3]))
   VAR_2 = VAR_2->rb_nodes[VAR_3];
  return VAR_2;
 }




 if (FUNC_3(VAR_2->rb_nodes[VAR_3])) {
  while (!FUNC_2(VAR_1, VAR_2)) {
   if (VAR_4 == (unsigned int)FUNC_1(VAR_2))
    return FUNC_0(VAR_2);
   VAR_2 = FUNC_0(VAR_2);
  }
  return ((void*)0);
 }





 VAR_2 = VAR_2->rb_nodes[VAR_3];
 while (!FUNC_3(VAR_2->rb_nodes[VAR_4]))
  VAR_2 = VAR_2->rb_nodes[VAR_4];
 return VAR_2;
}
