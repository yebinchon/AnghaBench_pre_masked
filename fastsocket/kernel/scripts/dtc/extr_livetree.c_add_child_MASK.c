
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {struct node* next_sibling; struct node* children; struct node* parent; } ;



void FUNC_0(struct node *VAR_0, struct node *VAR_1)
{
 struct node **VAR_2;

 VAR_1->next_sibling = ((void*)0);
 VAR_1->parent = VAR_0;

 VAR_2 = &VAR_0->children;
 while (*VAR_2)
  VAR_2 = &((*VAR_2)->next_sibling);

 *VAR_2 = VAR_1;
}
