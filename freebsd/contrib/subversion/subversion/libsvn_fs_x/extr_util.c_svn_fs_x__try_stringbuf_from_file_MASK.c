
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int **,char const*,int *) ;

svn_error_t *
FUNC_5(svn_stringbuf_t **VAR_5,
                                  svn_boolean_t *VAR_6,
                                  const char *VAR_7,
                                  svn_boolean_t VAR_8,
                                  apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10 = FUNC_4(VAR_5, VAR_7, VAR_9);
  if (VAR_6)
    *VAR_6 = VAR_2;

  if (VAR_10)
    {
      *VAR_5 = ((void*)0);

      if (FUNC_0(VAR_10->apr_err))
        {
          if (!VAR_8)
            {
              FUNC_2(VAR_10);
              if (VAR_6)
                *VAR_6 = VAR_4;
              return VAR_3;
            }
        }
    }

  return FUNC_3(VAR_10);
}
