
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nbr_statements; TYPE_2__** prepared_stmts; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ needs_reset; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_sqlite__db_t *VAR_1,
                     svn_error_t *VAR_2)
{
  int VAR_3;
  svn_error_t *VAR_4;




  VAR_4 = FUNC_0(VAR_2,
                   FUNC_1(VAR_0,
                                    ((void*)0), ((void*)0)));

  for (VAR_3 = 0; VAR_3 < VAR_1->nbr_statements; VAR_3++)
    if (VAR_1->prepared_stmts[VAR_3] && VAR_1->prepared_stmts[VAR_3]->needs_reset)
      VAR_4 = FUNC_0(VAR_4,
                                FUNC_2(VAR_1->prepared_stmts[VAR_3]));

  return VAR_4;
}
