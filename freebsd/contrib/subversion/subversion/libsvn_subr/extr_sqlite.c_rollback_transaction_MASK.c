
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int **,int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_sqlite__db_t *VAR_3,
                     svn_error_t *VAR_4)
{
  svn_sqlite__stmt_t *VAR_5;
  svn_error_t *VAR_6;

  VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_0);
  if (!VAR_6)
    {
      VAR_6 = FUNC_4(FUNC_5(VAR_5));

      if (VAR_6 && VAR_6->apr_err == VAR_1)
        {
          VAR_6 = FUNC_4(FUNC_1(VAR_3, VAR_6));
          VAR_6 = FUNC_2(
                      FUNC_4(FUNC_5(VAR_5)),
                      VAR_6);
        }
    }

  if (VAR_6)
    {

      VAR_6 = FUNC_3(VAR_2, VAR_6, ((void*)0));
    }

  return FUNC_2(VAR_4, VAR_6);
}
