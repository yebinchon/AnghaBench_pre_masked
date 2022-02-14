
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree_ops {int dummy; } ;
struct archive_rb_tree {int rbt_root; struct archive_rb_tree_ops const* rbt_ops; } ;
struct archive_rb_node {int dummy; } ;


 struct archive_rb_node* VAR_0 ;

void
FUNC_0(struct archive_rb_tree *VAR_1,
    const struct archive_rb_tree_ops *VAR_2)
{
 VAR_1->rbt_ops = VAR_2;
 *((struct archive_rb_node **)&VAR_1->rbt_root) = VAR_0;
}
