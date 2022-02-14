
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree {int dummy; } ;
struct archive_rb_node {struct archive_rb_node** rb_nodes; struct archive_rb_node* rb_right; struct archive_rb_node* rb_left; } ;


 scalar_t__ FUNC_0 (struct archive_rb_node*) ;
 unsigned int VAR_0 ;
 struct archive_rb_node* FUNC_1 (struct archive_rb_node*) ;
 int FUNC_2 (struct archive_rb_node*) ;
 int FUNC_3 (struct archive_rb_node*) ;
 unsigned int FUNC_4 (struct archive_rb_node*) ;
 scalar_t__ FUNC_5 (struct archive_rb_node*) ;
 scalar_t__ FUNC_6 (struct archive_rb_tree*,struct archive_rb_node*) ;
 int FUNC_7 (struct archive_rb_node*,unsigned int) ;

__attribute__((used)) static void
FUNC_8(struct archive_rb_tree *VAR_1,
    struct archive_rb_node *VAR_2, unsigned int VAR_3)
{

 while (FUNC_0(VAR_2->rb_nodes[VAR_3])) {
  unsigned int VAR_4 = VAR_3 ^ VAR_0;
  struct archive_rb_node *VAR_5 = VAR_2->rb_nodes[VAR_4];

  if (VAR_5 == ((void*)0))
   return;




  if (FUNC_0(VAR_2)
      && FUNC_0(VAR_5->rb_left)
      && FUNC_0(VAR_5->rb_right)) {
   if (FUNC_5(VAR_5)) {
    FUNC_7(VAR_2, VAR_4);
    VAR_5 = VAR_2->rb_nodes[VAR_4];
    if (VAR_5 == ((void*)0))
     return;
   } else {
    FUNC_3(VAR_5);
    if (FUNC_6(VAR_1, VAR_2))
     return;
    VAR_3 = FUNC_4(VAR_2);
    VAR_2 = FUNC_1(VAR_2);
    continue;
   }
  }




  if (FUNC_5(VAR_2)
      && FUNC_0(VAR_5)
      && FUNC_0(VAR_5->rb_left)
      && FUNC_0(VAR_5->rb_right)) {
   FUNC_2(VAR_2);
   FUNC_3(VAR_5);
   break;
  } else {




   if (FUNC_0(VAR_5->rb_nodes[VAR_4])) {
    FUNC_7(VAR_5, VAR_3);
    VAR_5 = VAR_2->rb_nodes[VAR_4];
   }
   if (VAR_5->rb_nodes[VAR_4] == ((void*)0))
    return;
   FUNC_2(VAR_5->rb_nodes[VAR_4]);
   FUNC_7(VAR_2, VAR_4);
   break;
  }
 }
}
