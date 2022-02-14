
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int FUNC_5 (int **,int *,char const*,int *,int *) ;
 int FUNC_6 (int **,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(apr_array_header_t **VAR_1,
                          apr_hash_t **VAR_2,
                          svn_wc__db_t *VAR_3,
                          const char *VAR_4,
                          apr_pool_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7;

  FUNC_1(FUNC_3(VAR_4));



  FUNC_0(FUNC_5(&VAR_7, VAR_3, VAR_4,
                                         VAR_5, VAR_6));

  if (VAR_2 != ((void*)0))
    *VAR_2 = VAR_7;

  if (VAR_1 != ((void*)0))
    {
      apr_hash_t *VAR_8;



      if (VAR_7 == ((void*)0))
        VAR_7 = FUNC_2(VAR_6);

      FUNC_0(FUNC_6(&VAR_8, VAR_3, VAR_4,
                                    VAR_5, VAR_6));




      FUNC_0(FUNC_4(VAR_1, VAR_8, VAR_7,
                             VAR_5));
    }

  return VAR_0;
}
