
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* filter_func_t ) (char const*) ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,void*) ;

__attribute__((used)) static apr_hash_t *
FUNC_6(int *VAR_0, apr_hash_t *VAR_1,
             filter_func_t VAR_2,
             apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;
  apr_hash_t *VAR_5 = FUNC_1(VAR_3);
  *VAR_0 = 0;

  for (VAR_4 = FUNC_0(VAR_3, VAR_1); VAR_4 ; VAR_4 = FUNC_2(VAR_4))
    {
      const char *VAR_6 = FUNC_3(VAR_4);
      void *VAR_7 = FUNC_4(VAR_4);




      if (!VAR_2 || !VAR_2(VAR_6))
        {
          FUNC_5(VAR_5, VAR_6, VAR_7);
        }
      else
        {
          *VAR_0 += 1;
        }
    }

  return VAR_5;
}
