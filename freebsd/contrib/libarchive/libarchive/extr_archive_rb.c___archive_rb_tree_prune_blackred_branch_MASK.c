
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_rb_node {struct archive_rb_node** rb_nodes; } ;


 int FUNC_0 (struct archive_rb_node*,struct archive_rb_node*) ;
 struct archive_rb_node* FUNC_1 (struct archive_rb_node*) ;
 size_t FUNC_2 (struct archive_rb_node*) ;
 int FUNC_3 (struct archive_rb_node*,struct archive_rb_node*) ;

__attribute__((used)) static void
FUNC_4(
    struct archive_rb_node *VAR_0, unsigned int VAR_1)
{
 struct archive_rb_node *VAR_2 = FUNC_1(VAR_0);
 struct archive_rb_node *VAR_3 = VAR_0->rb_nodes[VAR_1];





 FUNC_0(VAR_3, VAR_0);
 VAR_2->rb_nodes[FUNC_2(VAR_3)] = VAR_3;
 FUNC_3(VAR_3, VAR_2);
}
