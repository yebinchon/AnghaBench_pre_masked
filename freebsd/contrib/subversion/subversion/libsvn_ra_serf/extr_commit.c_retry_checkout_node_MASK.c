
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int commit_context_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (char const**,int const*,char const*,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char **VAR_2,
                    const commit_context_t *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7 = VAR_1;
  int VAR_8 = 5;

  do
    {
      FUNC_1(VAR_7);

      VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4,
                          VAR_5, VAR_6);
      if (VAR_7 && (VAR_7->apr_err != VAR_0))
        return FUNC_2(VAR_7);
    }
  while (VAR_7 && VAR_8--);

  return FUNC_2(VAR_7);
}
