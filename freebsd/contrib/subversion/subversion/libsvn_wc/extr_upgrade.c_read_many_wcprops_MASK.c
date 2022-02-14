
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int **,char const*,int *,int *) ;
 char* FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int **,char const*,int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(apr_hash_t **VAR_5,
                  const char *VAR_6,
                  apr_pool_t *VAR_7,
                  apr_pool_t *VAR_8)
{
  const char *VAR_9;
  apr_hash_t *VAR_10;
  apr_hash_t *VAR_11;
  const char *VAR_12;
  apr_pool_t *VAR_13 = FUNC_12(VAR_8);
  apr_hash_index_t *VAR_14;

  *VAR_5 = FUNC_3(VAR_7);


  VAR_9 = FUNC_14(VAR_6, VAR_3,
                                       VAR_8);
  FUNC_0(FUNC_7(&VAR_10, VAR_9, VAR_7, VAR_13));
  if (VAR_10 != ((void*)0))
    FUNC_9(*VAR_5, VAR_1, VAR_10);

  VAR_12 = FUNC_14(VAR_6, VAR_4,
                                        VAR_8);


  FUNC_0(FUNC_10(&VAR_11, VAR_12, VAR_2,
                              VAR_8, VAR_8));

  for (VAR_14 = FUNC_2(VAR_8, VAR_11);
       VAR_14;
       VAR_14 = FUNC_4(VAR_14))
    {
      const char *VAR_15 = FUNC_5(VAR_14);

      FUNC_11(VAR_13);

      VAR_9 = FUNC_8(VAR_12, VAR_15, VAR_13);

      FUNC_0(FUNC_7(&VAR_10, VAR_9,
                            VAR_7, VAR_13));
      FUNC_1(VAR_10 != ((void*)0));
      FUNC_9(*VAR_5, FUNC_6(VAR_7, VAR_15), VAR_10);
    }

  FUNC_13(VAR_13);
  return VAR_0;
}
