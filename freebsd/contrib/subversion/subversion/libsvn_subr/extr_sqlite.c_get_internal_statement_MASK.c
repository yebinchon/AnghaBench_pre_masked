
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
struct TYPE_4__ {int nbr_statements; int ** prepared_stmts; int state_pool; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int **,TYPE_1__*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_sqlite__stmt_t **VAR_3, svn_sqlite__db_t *VAR_4,
                       int VAR_5)
{

  int VAR_6 = VAR_4->nbr_statements + VAR_5;
  FUNC_1(VAR_5 < VAR_0);

  if (VAR_4->prepared_stmts[VAR_6] == ((void*)0))
    FUNC_0(FUNC_2(&VAR_4->prepared_stmts[VAR_6], VAR_4,
                              VAR_2[VAR_5],
                              VAR_4->state_pool));

  *VAR_3 = VAR_4->prepared_stmts[VAR_6];

  return VAR_1;
}
