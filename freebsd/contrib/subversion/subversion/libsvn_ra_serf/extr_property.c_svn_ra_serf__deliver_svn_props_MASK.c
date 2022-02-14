
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
 int FUNC_1 (int *,char const*,int ) ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (int const*,int *) ;

svn_error_t *
FUNC_4(void *VAR_1,
                               const char *VAR_2,
                               const char *VAR_3,
                               const char *VAR_4,
                               const svn_string_t *VAR_5,
                               apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7 = VAR_1;
  apr_pool_t *VAR_8 = FUNC_0(VAR_7);
  const char *VAR_9;

  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_8);
  if (VAR_9 == ((void*)0))
    return VAR_0;

  FUNC_1(VAR_7, VAR_9, FUNC_3(VAR_5, VAR_8));

  return VAR_0;
}
