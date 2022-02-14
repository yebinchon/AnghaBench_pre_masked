
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char** FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,char*,char const*,char const*) ;

__attribute__((used)) static const char **
FUNC_7(apr_hash_t *VAR_0,
                  apr_pool_t *VAR_1,
                  apr_pool_t *VAR_2)
{
  apr_hash_index_t *VAR_3;
  const char **VAR_4;
  const char **VAR_5;

  if (!VAR_0)
    return ((void*)0);

  VAR_4 = FUNC_5(VAR_1,
                   sizeof(const char *) * (FUNC_0(VAR_0) + 1));
  VAR_5 = VAR_4;
  for (VAR_3 = FUNC_1(VAR_2, VAR_0); VAR_3; VAR_3 = FUNC_2(VAR_3))
    {
      *VAR_5 = FUNC_6(VAR_1, "%s=%s",
                           (const char *)FUNC_3(VAR_3),
                           (const char *)FUNC_4(VAR_3));
      VAR_5++;
    }
  *VAR_5 = ((void*)0);

  return VAR_4;
}
