
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nbr_statements; int * statement_strings; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int * FUNC_2 (int ) ;

svn_error_t *
FUNC_3(svn_sqlite__db_t *VAR_0, int VAR_1)
{
  FUNC_0(VAR_1 < VAR_0->nbr_statements);

  return FUNC_2(FUNC_1(VAR_0, VAR_0->statement_strings[VAR_1]));
}
