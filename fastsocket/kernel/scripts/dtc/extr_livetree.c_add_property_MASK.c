
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;
struct node {struct property* proplist; } ;



void FUNC_0(struct node *VAR_0, struct property *VAR_1)
{
 struct property **VAR_2;

 VAR_1->next = ((void*)0);

 VAR_2 = &VAR_0->proplist;
 while (*VAR_2)
  VAR_2 = &((*VAR_2)->next);

 *VAR_2 = VAR_1;
}
