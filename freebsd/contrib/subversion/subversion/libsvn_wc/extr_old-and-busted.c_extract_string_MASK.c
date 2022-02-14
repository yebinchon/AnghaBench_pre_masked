
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_hash_t ;


 char const* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,char const*) ;

__attribute__((used)) static const char *
FUNC_2(apr_hash_t *VAR_0,
               const char *VAR_1,
               apr_pool_t *VAR_2)
{
  const char *VAR_3 = FUNC_1(VAR_0, VAR_1);

  if (VAR_3 == ((void*)0))
    return ((void*)0);

  return FUNC_0(VAR_2, VAR_3);
}
