
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_node {struct llist_node* next; } ;
struct llist_head {struct llist_node* first; } ;


 struct llist_node* FUNC_0 (struct llist_node**,struct llist_node*,struct llist_node*) ;

bool FUNC_1(struct llist_node *VAR_0, struct llist_node *VAR_1,
       struct llist_head *VAR_2)
{
 struct llist_node *VAR_3, *VAR_4;

 VAR_3 = VAR_2->first;
 for (;;) {
  VAR_4 = VAR_3;
  VAR_1->next = VAR_3;
  VAR_3 = FUNC_0(&VAR_2->first, VAR_4, VAR_0);
  if (VAR_3 == VAR_4)
   break;
 }

 return VAR_4 == ((void*)0);
}
