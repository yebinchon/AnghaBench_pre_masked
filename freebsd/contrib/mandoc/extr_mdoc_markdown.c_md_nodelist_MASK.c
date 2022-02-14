
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {struct roff_node* next; } ;


 int FUNC_0 (struct roff_node*) ;

__attribute__((used)) static void
FUNC_1(struct roff_node *VAR_0)
{
 while (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_0);
  VAR_0 = VAR_0->next;
 }
}
