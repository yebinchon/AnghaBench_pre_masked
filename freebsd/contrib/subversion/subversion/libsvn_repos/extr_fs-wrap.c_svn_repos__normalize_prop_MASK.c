
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 int * FUNC_2 (int const*,int *) ;
 int FUNC_3 (int **,int *,int *,int const*,char*,int ,int *,int *) ;

svn_error_t *
FUNC_4(const svn_string_t **VAR_3,
                          svn_boolean_t *VAR_4,
                          const char *VAR_5,
                          const svn_string_t *VAR_6,
                          apr_pool_t *VAR_7,
                          apr_pool_t *VAR_8)
{
  if (FUNC_1(VAR_5) && VAR_6)
    {
      svn_string_t *VAR_9;

      FUNC_0(FUNC_3(&VAR_9, ((void*)0), VAR_4,
                                          VAR_6, "UTF-8", VAR_2,
                                          VAR_7, VAR_8));
      *VAR_3 = VAR_9;
    }
  else
    {
      *VAR_3 = FUNC_2(VAR_6, VAR_7);
      if (VAR_4)
        *VAR_4 = VAR_0;
    }

  return VAR_1;
}
