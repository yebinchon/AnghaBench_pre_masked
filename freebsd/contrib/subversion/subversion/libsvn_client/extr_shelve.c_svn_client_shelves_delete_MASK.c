
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_2 (char const*,char const*,int *,int *) ;
 TYPE_1__* FUNC_3 (char const**,char const*,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,char*,char const*) ;

svn_error_t *
FUNC_5(const char *VAR_1,
                          const char *VAR_2,
                          svn_boolean_t VAR_3,
                          svn_client_ctx_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  const char *VAR_6;

  FUNC_1(FUNC_3(&VAR_6,
                                 VAR_2, VAR_4, VAR_5, VAR_5));


  if (! VAR_3)
    {
      svn_error_t *VAR_7;

      VAR_7 = FUNC_2(VAR_1, VAR_6,
                               VAR_4, VAR_5);
      if (VAR_7 && FUNC_0(VAR_7->apr_err))
        {
          return FUNC_4(VAR_7,
                                       "Shelved change '%s' not found",
                                       VAR_1);
        }
      else
        FUNC_1(VAR_7);
    }

  return VAR_0;
}
