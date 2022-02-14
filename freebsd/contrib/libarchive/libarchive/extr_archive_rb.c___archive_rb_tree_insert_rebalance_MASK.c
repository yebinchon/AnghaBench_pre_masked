
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree {struct archive_rb_node* rbt_root; } ;
struct archive_rb_node {struct archive_rb_node** rb_nodes; struct archive_rb_node* rb_right; } ;


 scalar_t__ FUNC_0 (struct archive_rb_node*) ;
 unsigned int VAR_0 ;
 struct archive_rb_node* FUNC_1 (struct archive_rb_node*) ;
 int FUNC_2 (struct archive_rb_node*) ;
 int FUNC_3 (struct archive_rb_node*) ;
 scalar_t__ FUNC_4 (struct archive_rb_tree*,struct archive_rb_node*) ;
 int FUNC_5 (struct archive_rb_node*,unsigned int) ;

__attribute__((used)) static void
FUNC_6(struct archive_rb_tree *VAR_1,
    struct archive_rb_node *VAR_2)
{
 struct archive_rb_node * VAR_3 = FUNC_1(VAR_2);
 struct archive_rb_node * VAR_4;
 struct archive_rb_node * VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 for (;;) {




  VAR_4 = FUNC_1(VAR_3);
  VAR_6 = (VAR_3 == VAR_4->rb_right);
  VAR_7 = VAR_6 ^ VAR_0;
  VAR_5 = VAR_4->rb_nodes[VAR_7];

  if (FUNC_0(VAR_5))
   break;







  FUNC_2(VAR_5);
  FUNC_2(VAR_3);
  if (FUNC_4(VAR_1, VAR_4)) {




   return;
  }
  FUNC_3(VAR_4);
  VAR_2 = VAR_4;
  VAR_3 = FUNC_1(VAR_2);
  if (FUNC_0(VAR_3)) {



   return;
  }
 }




 if (VAR_2 == VAR_3->rb_nodes[VAR_7]) {






  FUNC_5(VAR_3, VAR_7);
 }






 FUNC_5(VAR_4, VAR_6);




 FUNC_2(VAR_1->rbt_root);
}
