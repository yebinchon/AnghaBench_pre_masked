
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {struct roff_node* next; struct roff_node* child; } ;


 int VAR_0 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (struct roff_node*) ;
 int FUNC_2 (struct roff_node*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct roff_node *VAR_2)
{
 FUNC_2(VAR_2);

 if ((VAR_2 = VAR_2->child) == ((void*)0))
  return 0;

 FUNC_3("**");
 VAR_1 &= ~VAR_0;
 FUNC_0(VAR_2);
 VAR_1 &= ~VAR_0;
 FUNC_3("**");
 VAR_1 &= ~VAR_0;
 FUNC_4("(");

 if ((VAR_2 = VAR_2->next) != ((void*)0))
  FUNC_1(VAR_2);
 return 0;
}
