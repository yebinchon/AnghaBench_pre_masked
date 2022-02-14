
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

svn_error_t *
FUNC_6(svn_sqlite__db_t *VAR_3,
                             svn_error_t *VAR_4)
{
  svn_sqlite__stmt_t *VAR_5;

  if (VAR_4)
    {
      svn_error_t *VAR_6;

      VAR_6 = FUNC_1(&VAR_5, VAR_3,
                                    VAR_1);

      if (!VAR_6)
        {
          VAR_6 = FUNC_4(FUNC_5(VAR_5));

          if (VAR_6 && VAR_6->apr_err == VAR_2)
            {






              VAR_6 = FUNC_4(FUNC_2(VAR_3, VAR_6));
              VAR_6 = FUNC_3(
                          FUNC_4(FUNC_5(VAR_5)),
                          VAR_6);
            }
        }

      VAR_4 = FUNC_3(VAR_4, VAR_6);
      VAR_6 = FUNC_1(&VAR_5, VAR_3,
                                    VAR_0);

      if (!VAR_6)
        VAR_6 = FUNC_4(FUNC_5(VAR_5));

      return FUNC_3(VAR_4, VAR_6);
    }

  FUNC_0(FUNC_1(&VAR_5, VAR_3,
                                 VAR_0));



  return FUNC_4(FUNC_5(VAR_5));
}
