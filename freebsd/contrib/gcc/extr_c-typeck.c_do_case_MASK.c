
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ blocked_vm; scalar_t__ blocked_stmt_expr; int orig_type; int switch_expr; int cases; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;

tree
FUNC_3 (tree VAR_3, tree VAR_4)
{
  tree VAR_5 = VAR_0;

  if (VAR_1 && !VAR_1->blocked_stmt_expr
      && !VAR_1->blocked_vm)
    {
      VAR_5 = FUNC_1 (VAR_1->cases,
    FUNC_0 (VAR_1->switch_expr),
    VAR_1->orig_type,
    VAR_3, VAR_4);
      if (VAR_5 == VAR_2)
 VAR_5 = VAR_0;
    }
  else if (VAR_1 && VAR_1->blocked_stmt_expr)
    {
      if (VAR_3)
 FUNC_2 ("case label in statement expression not containing "
        "enclosing switch statement");
      else
 FUNC_2 ("%<default%> label in statement expression not containing "
        "enclosing switch statement");
    }
  else if (VAR_1 && VAR_1->blocked_vm)
    {
      if (VAR_3)
 FUNC_2 ("case label in scope of identifier with variably modified "
        "type not containing enclosing switch statement");
      else
 FUNC_2 ("%<default%> label in scope of identifier with variably "
        "modified type not containing enclosing switch statement");
    }
  else if (VAR_3)
    FUNC_2 ("case label not within a switch statement");
  else
    FUNC_2 ("%<default%> label not within a switch statement");

  return VAR_5;
}
