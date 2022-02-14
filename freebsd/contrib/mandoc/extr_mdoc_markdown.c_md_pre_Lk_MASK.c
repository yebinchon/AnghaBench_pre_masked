
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int flags; struct roff_node* next; int string; struct roff_node* prev; struct roff_node* last; struct roff_node* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct roff_node *VAR_3)
{
 const struct roff_node *VAR_4, *VAR_5, *VAR_6;

 if ((VAR_4 = VAR_3->child) == ((void*)0))
  return 0;


 VAR_6 = VAR_3->last;
 while (VAR_6 != VAR_4 && VAR_6->flags & VAR_1)
  VAR_6 = VAR_6->prev;
 VAR_6 = VAR_6->next;


 VAR_5 = VAR_4->next;
 if (VAR_5 == VAR_6)
  VAR_5 = VAR_4;
 FUNC_0("[");
 VAR_2 &= ~VAR_0;
 do {
  FUNC_2(VAR_5->string);
  VAR_5 = VAR_5->next;
 } while (VAR_5 != VAR_6);
 VAR_2 &= ~VAR_0;


 FUNC_0("](");
 FUNC_1(VAR_4->string);
 VAR_2 &= ~VAR_0;
 FUNC_0(")");


 while (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_6->string);
  VAR_6 = VAR_6->next;
 }
 return 0;
}
