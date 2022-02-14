
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,char const*) ;
 char* FUNC_6 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_hash_t **VAR_1,
                    apr_hash_t *VAR_2,
                    const char *VAR_3,
                    apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;

  *VAR_1 = FUNC_1(VAR_4);

  for (VAR_5 = FUNC_0(VAR_4, VAR_2); VAR_5; VAR_5 = FUNC_2(VAR_5))
    {
      const char *VAR_6 = FUNC_3(VAR_5);
      const char *VAR_7 = FUNC_4(VAR_5);
      const char *VAR_8 = FUNC_6(VAR_3, VAR_6, VAR_4);

      if (VAR_8)
        {
          FUNC_5(*VAR_1, VAR_8, VAR_7);
        }
    }

  return VAR_0;
}
