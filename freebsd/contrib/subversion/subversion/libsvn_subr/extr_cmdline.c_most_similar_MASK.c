
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_membuf_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 size_t FUNC_1 (int *,int *,int *,int *) ;
 int * FUNC_2 (char const*,int *) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_1,
             const char **VAR_2,
             apr_size_t VAR_3,
             apr_pool_t *VAR_4)
{
  const char *VAR_5 = ((void*)0);
  apr_size_t VAR_6 = 0;
  apr_size_t VAR_7;
  svn_membuf_t VAR_8;
  svn_string_t *VAR_9 = FUNC_2(VAR_1, VAR_4);

  FUNC_0(&VAR_8, 64, VAR_4);

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
      apr_size_t VAR_10;
      svn_string_t *VAR_11 = FUNC_2(VAR_2[VAR_7], VAR_4);

      VAR_10 = FUNC_1(VAR_9, VAR_11, &VAR_8, ((void*)0));



      if (VAR_10 >= (2 * VAR_0 + 1) / 3
          && VAR_10 > VAR_6)
        {
          VAR_6 = VAR_10;
          VAR_5 = VAR_2[VAR_7];
        }
    }

  return VAR_5;
}
