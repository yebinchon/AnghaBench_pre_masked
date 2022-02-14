
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
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(apr_hash_t *VAR_0, apr_pool_t *VAR_1)
{
  apr_hash_index_t *VAR_2;

  for (VAR_2 = FUNC_0(VAR_1, VAR_0);
       VAR_2 != ((void*)0);
       VAR_2 = FUNC_1(VAR_2))
    {
      const char *VAR_3 = FUNC_2(VAR_2);

      if (!FUNC_4(VAR_3))
        FUNC_3(VAR_0, VAR_3, ((void*)0));
    }
}
