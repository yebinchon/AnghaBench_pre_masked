
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ tok; struct roff_node* next; struct roff_node* child; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct roff_node *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3->tok == VAR_0;

 if (VAR_4)
  VAR_3 = VAR_3->child;

 while (VAR_3 != ((void*)0)) {
  FUNC_1("*");
  VAR_2 &= ~VAR_1;
  FUNC_0(VAR_3);
  VAR_2 &= ~VAR_1;
  FUNC_1("*");
  if ((VAR_3 = VAR_3->next) != ((void*)0))
   FUNC_2(",");
 }
 return 0;
}
