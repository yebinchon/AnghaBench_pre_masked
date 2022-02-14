
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {struct roff_node* next; struct roff_node* child; } ;


 int VAR_0 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct roff_node *VAR_2)
{
 VAR_2 = VAR_2->child;
 if (VAR_2 == ((void*)0))
  return 0;
 FUNC_0(VAR_2);
 VAR_2 = VAR_2->next;
 if (VAR_2 == ((void*)0))
  return 0;
 VAR_1 &= ~VAR_0;
 FUNC_1("(");
 FUNC_0(VAR_2);
 FUNC_1(")");
 return 0;
}
