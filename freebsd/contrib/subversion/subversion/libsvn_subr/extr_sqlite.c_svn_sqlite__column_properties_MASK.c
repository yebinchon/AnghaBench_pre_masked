
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (void const*,int ,int *) ;
 int FUNC_2 (int **,int ,int *) ;
 void* FUNC_3 (int *,int,int *,int *) ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_1,
                              svn_sqlite__stmt_t *VAR_2,
                              int VAR_3,
                              apr_pool_t *VAR_4,
                              apr_pool_t *VAR_5)
{
  apr_size_t VAR_6;
  const void *VAR_7;


  VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_6, ((void*)0));
  if (VAR_7 == ((void*)0))
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }

  FUNC_0(FUNC_2(VAR_1,
                                   FUNC_1(VAR_7, VAR_6, VAR_5),
                                   VAR_4));

  return VAR_0;
}
