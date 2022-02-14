
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct goto_queue_node {int repl_stmt; int stmt; int cont_stmt; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (struct goto_queue_node *VAR_2, tree VAR_3, tree VAR_4)
{
  tree VAR_5;

  VAR_2->cont_stmt = VAR_2->stmt;
  if (VAR_4)
    FUNC_0 (VAR_4, &VAR_2->repl_stmt);

  VAR_5 = FUNC_1 (VAR_0, VAR_1, VAR_3);
  FUNC_0 (VAR_5, &VAR_2->repl_stmt);
}
