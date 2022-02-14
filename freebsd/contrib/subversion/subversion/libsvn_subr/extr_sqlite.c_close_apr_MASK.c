
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int nbr_statements; char** statement_strings; int * db3; TYPE_4__** prepared_stmts; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ apr_status_t ;
struct TYPE_14__ {scalar_t__ needs_reset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;
 TYPE_2__* FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static apr_status_t
FUNC_8(void *VAR_4)
{
  svn_sqlite__db_t *VAR_5 = VAR_4;
  svn_error_t *VAR_6 = VAR_3;
  apr_status_t VAR_7;
  int VAR_8;


  if (VAR_5->db3 == ((void*)0))
    return VAR_0;


  if (VAR_5->prepared_stmts)
    {
      for (VAR_8 = 0; VAR_8 < VAR_5->nbr_statements + VAR_2; VAR_8++)
        {
          if (VAR_5->prepared_stmts[VAR_8])
            {
              if (VAR_8 < VAR_5->nbr_statements
                  && VAR_5->prepared_stmts[VAR_8]->needs_reset)
                {






                  VAR_6 = FUNC_5(VAR_6,
                            FUNC_7(VAR_5->prepared_stmts[VAR_8]));

                }
              VAR_6 = FUNC_5(
                        FUNC_6(VAR_5->prepared_stmts[VAR_8]), VAR_6);
            }
        }
    }

  VAR_7 = FUNC_3(VAR_5->db3);


  if (VAR_6)
    {
      VAR_7 = VAR_6->apr_err;
      FUNC_4(VAR_6);
      return VAR_7;
    }

  if (VAR_7 != VAR_1)
    return FUNC_0(VAR_7);

  VAR_5->db3 = ((void*)0);

  return VAR_0;
}
