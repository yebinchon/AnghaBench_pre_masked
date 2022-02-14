
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_hash_t **VAR_1,
                           svn_mergeinfo_t VAR_2,
                           const char *VAR_3,
                           apr_pool_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  *VAR_1 = ((void*)0);
  if (VAR_2)
    {
      apr_hash_index_t *VAR_6;
      apr_hash_t *VAR_7 = FUNC_1(VAR_4);

      for (VAR_6 = FUNC_0(VAR_5, VAR_2);
           VAR_6; VAR_6 = FUNC_2(VAR_6))
        {
          const char *VAR_8 = FUNC_3(VAR_6);
          void *VAR_9 = FUNC_4(VAR_6);

          FUNC_5(VAR_7,
                        FUNC_6(VAR_3, VAR_8 + 1,
                                                    VAR_4),
                        VAR_9);
        }
      *VAR_1 = VAR_7;
    }

  return VAR_0;
}
