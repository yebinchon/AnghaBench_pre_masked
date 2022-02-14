
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_tree {int dummy; } ;
struct archive_rb_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct archive_rb_node*) ;
 scalar_t__ FUNC_1 (struct archive_rb_node*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (struct archive_rb_node*) ;
 unsigned int FUNC_3 (struct archive_rb_node*) ;
 int FUNC_4 (struct archive_rb_tree*,struct archive_rb_node*) ;
 int FUNC_5 (struct archive_rb_node*) ;
 struct archive_rb_node* FUNC_6 (struct archive_rb_tree*,struct archive_rb_node*,unsigned int) ;
 int FUNC_7 (struct archive_rb_node*,unsigned int) ;
 int FUNC_8 (struct archive_rb_tree*,struct archive_rb_node*,int const) ;
 int FUNC_9 (struct archive_rb_tree*,struct archive_rb_node*,struct archive_rb_node*) ;

void
FUNC_10(struct archive_rb_tree *VAR_3,
    struct archive_rb_node *VAR_4)
{
 struct archive_rb_node *VAR_5;
 unsigned int VAR_6;
 if (FUNC_1(VAR_4)) {
  const int VAR_7 = FUNC_0(VAR_4) && !FUNC_4(VAR_3, VAR_4);
  FUNC_8(VAR_3, VAR_4, VAR_7);
  return;
 }
 if (!FUNC_5(VAR_4)) {
  VAR_6 = FUNC_2(VAR_4) ? VAR_2 : VAR_0;
  FUNC_7(VAR_4, VAR_6);
  return;
 }





 VAR_6 = FUNC_3(VAR_4) ^ VAR_1;





 VAR_5 = FUNC_6(VAR_3, VAR_4, VAR_6);
 FUNC_9(VAR_3, VAR_4, VAR_5);
}
