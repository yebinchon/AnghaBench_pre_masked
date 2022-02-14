
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int flags; scalar_t__ type; struct roff_node* child; int pos; int string; int line; struct roff_node* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int*,int*,int) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(const struct roff_node *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{

 for ( ; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_0 & VAR_2->flags)
   FUNC_0(VAR_2->line, VAR_3, VAR_4, VAR_5);
  if (VAR_1 == VAR_2->type)
   FUNC_1(VAR_2->string, VAR_2->pos, VAR_4, VAR_5);
  if (VAR_2->child)
   FUNC_2(VAR_2->child, VAR_3, VAR_4, VAR_5);
 }
}
