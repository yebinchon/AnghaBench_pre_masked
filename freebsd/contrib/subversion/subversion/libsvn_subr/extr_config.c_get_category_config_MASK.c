
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *,int ,char const*,int ) ;
 TYPE_1__* FUNC_2 (int **,char const*,char const*,char const*,char const*,int *) ;
 TYPE_1__* FUNC_3 (char const**,char const*,int *) ;
 int FUNC_4 (char const**,char const*,char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_config_t **VAR_4,
                    const char *VAR_5,
                    const char *VAR_6,
                    apr_pool_t *VAR_7)
{
  const char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
  const char *VAR_10, *VAR_11;
  svn_error_t *VAR_12 = ((void*)0);

  *VAR_4 = ((void*)0);

  if (! VAR_5)
    {







      VAR_12 = FUNC_3(&VAR_11, VAR_6, VAR_7);
      if ((VAR_12) && (VAR_12->apr_err == VAR_0))
        {
          VAR_11 = ((void*)0);
          FUNC_5(VAR_12);
        }
      else if (VAR_12)
        return VAR_12;
    }
  else
    VAR_11 = ((void*)0);

  FUNC_0(FUNC_4(&VAR_10, VAR_5, VAR_6,
                                          VAR_7));
  return FUNC_2(VAR_4, VAR_9, VAR_8,
                  VAR_11, VAR_10, VAR_7);
}
