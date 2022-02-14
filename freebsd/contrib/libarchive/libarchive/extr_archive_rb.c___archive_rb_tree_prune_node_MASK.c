
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree {int dummy; } ;
struct archive_rb_node {int rb_left; int * rb_nodes; } ;


 struct archive_rb_node* FUNC_0 (struct archive_rb_node*) ;
 unsigned int FUNC_1 (struct archive_rb_node*) ;
 int FUNC_2 (struct archive_rb_tree*,struct archive_rb_node*,unsigned int const) ;

__attribute__((used)) static void
FUNC_3(struct archive_rb_tree *VAR_0,
    struct archive_rb_node *VAR_1, int VAR_2)
{
 const unsigned int VAR_3 = FUNC_1(VAR_1);
 struct archive_rb_node *VAR_4 = FUNC_0(VAR_1);





 VAR_4->rb_nodes[VAR_3] = VAR_1->rb_left;




 if (VAR_2)
  FUNC_2(VAR_0, VAR_4, VAR_3);
}
