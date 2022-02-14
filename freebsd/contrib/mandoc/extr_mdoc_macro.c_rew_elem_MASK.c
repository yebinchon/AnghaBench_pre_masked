
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; int tok; struct roff_node* parent; } ;
struct roff_man {struct roff_node* last; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;

__attribute__((used)) static void
FUNC_2(struct roff_man *VAR_1, enum roff_tok VAR_2)
{
 struct roff_node *VAR_3;

 VAR_3 = VAR_1->last;
 if (VAR_3->type != VAR_0)
  VAR_3 = VAR_3->parent;
 FUNC_0(VAR_3->type == VAR_0);
 FUNC_0(VAR_2 == VAR_3->tok);
 FUNC_1(VAR_1, VAR_3);
}
