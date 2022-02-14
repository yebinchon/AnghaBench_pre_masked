
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree {int dummy; } ;
struct archive_rb_node {struct archive_rb_node** rb_nodes; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_rb_node*) ;
 int FUNC_1 (struct archive_rb_node*,struct archive_rb_node*) ;
 unsigned int const VAR_1 ;
 struct archive_rb_node* FUNC_2 (struct archive_rb_node*) ;
 int FUNC_3 (struct archive_rb_node*) ;
 size_t FUNC_4 (struct archive_rb_node*) ;
 scalar_t__ FUNC_5 (struct archive_rb_node*) ;
 int FUNC_6 (struct archive_rb_node*,struct archive_rb_node*) ;
 int FUNC_7 (struct archive_rb_node*,unsigned int const) ;
 int FUNC_8 (struct archive_rb_tree*,struct archive_rb_node*,unsigned int const) ;

__attribute__((used)) static void
FUNC_9(struct archive_rb_tree *VAR_2,
    struct archive_rb_node *VAR_3, struct archive_rb_node *VAR_4)
{
 const unsigned int VAR_5 = FUNC_4(VAR_4);
 unsigned int VAR_6 = VAR_5 ^ VAR_1;
 struct archive_rb_node *VAR_7;
 struct archive_rb_node *VAR_8 = FUNC_2(VAR_4);
 int VAR_9 = FUNC_0(VAR_4);

 if (VAR_8 == VAR_3) {




  VAR_7 = VAR_4->rb_nodes[VAR_5];
 } else {




  VAR_7 = VAR_4->rb_nodes[VAR_6];
 }

 if (FUNC_5(VAR_7)) {




  FUNC_3(VAR_7);
  VAR_9 = VAR_0;

  if (VAR_8 != VAR_3) {



   FUNC_6(VAR_7, VAR_8);
   FUNC_7(VAR_7, VAR_5);
  }
 }

 if (VAR_8 == VAR_3) {
  VAR_8 = VAR_4;
 } else {







  VAR_8->rb_nodes[VAR_5] = VAR_7;



  VAR_4->rb_nodes[VAR_6] = VAR_3->rb_nodes[VAR_6];
  FUNC_6(VAR_4->rb_nodes[VAR_6], VAR_4);




  VAR_6 = VAR_5;
 }





 VAR_4->rb_nodes[VAR_6] = VAR_3->rb_nodes[VAR_6];
 FUNC_6(VAR_4->rb_nodes[VAR_6], VAR_4);





 FUNC_1(VAR_4, VAR_3);
 FUNC_6(VAR_4, FUNC_2(VAR_3));
 FUNC_2(VAR_4)->rb_nodes[FUNC_4(VAR_4)] = VAR_4;

 if (VAR_9)
  FUNC_8(VAR_2, VAR_8, VAR_5);
}
