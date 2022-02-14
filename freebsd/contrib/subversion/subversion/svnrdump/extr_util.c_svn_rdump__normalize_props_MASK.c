
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const**,int *,char const*,int const*,int *,int *) ;

svn_error_t *
FUNC_11(apr_hash_t **VAR_1,
                           apr_hash_t *VAR_2,
                           apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;
  apr_pool_t *VAR_5;

  *VAR_1 = FUNC_2(VAR_3);

  VAR_5 = FUNC_8(VAR_3);
  for (VAR_4 = FUNC_1(VAR_3, VAR_2); VAR_4;
        VAR_4 = FUNC_3(VAR_4))
    {
      const char *VAR_6 = FUNC_4(VAR_4);
      const svn_string_t *VAR_7 = FUNC_5(VAR_4);

      FUNC_7(VAR_5);

      FUNC_0(FUNC_10(&VAR_7, ((void*)0), VAR_6, VAR_7,
                                        VAR_3, VAR_5));
      FUNC_6(*VAR_1, VAR_6, VAR_7);
    }
  FUNC_9(VAR_5);

  return VAR_0;
}
