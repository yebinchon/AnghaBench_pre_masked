
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_rb_tree {struct archive_rb_node* rbt_root; TYPE_1__* rbt_ops; } ;
struct archive_rb_node {struct archive_rb_node** rb_nodes; } ;
typedef int (* archive_rbto_compare_key_fn ) (struct archive_rb_node*,void const*) ;
struct TYPE_2__ {int (* rbto_compare_key ) (struct archive_rb_node*,void const*) ;} ;


 int FUNC_0 (struct archive_rb_node*) ;
 int FUNC_1 (struct archive_rb_node*,void const*) ;

struct archive_rb_node *
FUNC_2(struct archive_rb_tree *VAR_0, const void *VAR_1)
{
 archive_rbto_compare_key_fn VAR_2 = VAR_0->rbt_ops->rbto_compare_key;
 struct archive_rb_node *VAR_3 = VAR_0->rbt_root;
 struct archive_rb_node *VAR_4 = ((void*)0);

 while (!FUNC_0(VAR_3)) {
  const signed int VAR_5 = (*VAR_2)(VAR_3, VAR_1);
  if (VAR_5 == 0)
   return VAR_3;
  if (VAR_5 < 0)
   VAR_4 = VAR_3;
  VAR_3 = VAR_3->rb_nodes[VAR_5 > 0];
 }

 return VAR_4;
}
