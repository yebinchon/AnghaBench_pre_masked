
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const*,int *) ;
 int * FUNC_5 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1,
                  const char *VAR_2,
                  const char *VAR_3,
                  const char *VAR_4,
                  const svn_string_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7 = VAR_1;
  apr_hash_t *VAR_8;
  apr_pool_t *VAR_9 = FUNC_1(VAR_7);

  VAR_8 = FUNC_3(VAR_7, VAR_3);

  if (!VAR_8)
    {
      VAR_8 = FUNC_0(VAR_9);

      VAR_3 = FUNC_2(VAR_9, VAR_3);
      FUNC_4(VAR_7, VAR_3, VAR_8);
    }

  VAR_4 = FUNC_2(VAR_9, VAR_4);
  FUNC_4(VAR_8, VAR_4, FUNC_5(VAR_5, VAR_9));

  return VAR_0;
}
