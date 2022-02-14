
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int **,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 int FUNC_3 (int **,char const*,scalar_t__,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_config_t **VAR_3,
         const char *VAR_4,
         const char *VAR_5,
         const char *VAR_6,
         const char *VAR_7,
         apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9 = VAR_0;
  if (VAR_6)
    {
      if (VAR_9)
        FUNC_0(FUNC_2(*VAR_3, VAR_6, VAR_0));
      else
        {
          FUNC_0(FUNC_3(VAR_3, VAR_6,
                                   VAR_0, VAR_0, VAR_0, VAR_8));
          VAR_9 = VAR_2;
        }
    }
  if (VAR_7)
    {
      if (VAR_9)
        FUNC_0(FUNC_2(*VAR_3, VAR_7, VAR_0));
      else
        {
          FUNC_0(FUNC_3(VAR_3, VAR_7,
                                   VAR_0, VAR_0, VAR_0, VAR_8));
          VAR_9 = VAR_2;
        }
    }

  if (! VAR_9)
    FUNC_0(FUNC_1(VAR_3, VAR_0, VAR_0, VAR_8));

  return VAR_1;
}
