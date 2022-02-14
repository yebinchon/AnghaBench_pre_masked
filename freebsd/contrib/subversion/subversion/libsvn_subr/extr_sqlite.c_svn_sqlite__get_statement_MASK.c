
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ needs_reset; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
struct TYPE_9__ {int nbr_statements; TYPE_1__** prepared_stmts; int state_pool; int * statement_strings; } ;
typedef TYPE_2__ svn_sqlite__db_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__**,TYPE_2__*,int ,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

svn_error_t *
FUNC_5(svn_sqlite__stmt_t **VAR_1, svn_sqlite__db_t *VAR_2,
                          int VAR_3)
{
  FUNC_1(VAR_3 < VAR_2->nbr_statements);

  if (VAR_2->prepared_stmts[VAR_3] == ((void*)0))
    FUNC_0(FUNC_2(&VAR_2->prepared_stmts[VAR_3], VAR_2,
                              VAR_2->statement_strings[VAR_3],
                              VAR_2->state_pool));

  *VAR_1 = VAR_2->prepared_stmts[VAR_3];

  if ((*VAR_1)->needs_reset)
    return FUNC_3(FUNC_4(*VAR_1));

  return VAR_0;
}
