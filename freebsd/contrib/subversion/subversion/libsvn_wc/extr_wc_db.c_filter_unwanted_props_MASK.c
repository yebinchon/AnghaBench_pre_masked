
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static void
FUNC_5(apr_hash_t *VAR_0,
                      const char * VAR_1,
                      apr_pool_t *VAR_2)
{
  apr_hash_index_t *VAR_3;

  for (VAR_3 = FUNC_0(VAR_2, VAR_0);
       VAR_3;
       VAR_3 = FUNC_1(VAR_3))
    {
      const char *VAR_4 = FUNC_2(VAR_3);

      if (FUNC_3(VAR_4, VAR_1) != 0)
        FUNC_4(VAR_0, VAR_4, ((void*)0));
    }
  return;
}
