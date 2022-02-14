
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_rb_tree {struct archive_rb_node* rbt_root; TYPE_1__* rbt_ops; } ;
struct archive_rb_node {struct archive_rb_node** rb_nodes; struct archive_rb_node* rb_right; struct archive_rb_node* rb_left; } ;
typedef int (* archive_rbto_compare_nodes_fn ) (struct archive_rb_node*,struct archive_rb_node*) ;
struct TYPE_2__ {int (* rbto_compare_nodes ) (struct archive_rb_node*,struct archive_rb_node*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct archive_rb_node*) ;
 int FUNC_1 (struct archive_rb_node*) ;
 int FUNC_2 (struct archive_rb_node*) ;
 int FUNC_3 (struct archive_rb_node*) ;
 int FUNC_4 (struct archive_rb_node*,struct archive_rb_node*) ;
 int FUNC_5 (struct archive_rb_node*,unsigned int) ;
 int VAR_2 ;
 int FUNC_6 (struct archive_rb_tree*,struct archive_rb_node*) ;
 int FUNC_7 (struct archive_rb_node*,struct archive_rb_node*) ;

int
FUNC_8(struct archive_rb_tree *VAR_3,
    struct archive_rb_node *VAR_4)
{
 archive_rbto_compare_nodes_fn VAR_5 = VAR_3->rbt_ops->rbto_compare_nodes;
 struct archive_rb_node *VAR_6, *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_7 = VAR_3->rbt_root;
 VAR_6 = (struct archive_rb_node *)(void *)&VAR_3->rbt_root;
 VAR_8 = VAR_1;




 while (!FUNC_3(VAR_7)) {
  const signed int VAR_10 = (*VAR_5)(VAR_7, VAR_4);
  if (VAR_10 == 0) {



   return VAR_0;
  }
  VAR_6 = VAR_7;
  VAR_8 = (VAR_10 > 0);
  VAR_7 = VAR_6->rb_nodes[VAR_8];
 }




 FUNC_4(VAR_4, VAR_6);
 FUNC_5(VAR_4, VAR_8);
 if (VAR_6 == (struct archive_rb_node *)(void *)&VAR_3->rbt_root) {
  FUNC_0(VAR_4);
  VAR_9 = VAR_0;
 } else {




  FUNC_1(VAR_4);
  VAR_9 = FUNC_2(VAR_6);
 }
 VAR_4->rb_left = VAR_6->rb_nodes[VAR_8];
 VAR_4->rb_right = VAR_6->rb_nodes[VAR_8];
 VAR_6->rb_nodes[VAR_8] = VAR_4;




 if (VAR_9)
  FUNC_6(VAR_3, VAR_4);

 return VAR_2;
}
