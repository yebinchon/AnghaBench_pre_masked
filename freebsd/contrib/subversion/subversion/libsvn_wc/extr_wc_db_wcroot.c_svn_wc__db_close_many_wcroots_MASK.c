
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int VAR_2 ;
 int * FUNC_4 (scalar_t__,int *) ;

svn_error_t *
FUNC_5(apr_hash_t *VAR_3,
                              apr_pool_t *VAR_4,
                              apr_pool_t *VAR_5)
{
  apr_hash_index_t *VAR_6;

  for (VAR_6 = FUNC_0(VAR_5, VAR_3); VAR_6; VAR_6 = FUNC_1(VAR_6))
    {
      svn_wc__db_wcroot_t *VAR_7 = FUNC_2(VAR_6);
      apr_status_t VAR_8;

      VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_2);
      if (VAR_8 != VAR_0)
        return FUNC_4(VAR_8, ((void*)0));
    }

  return VAR_1;
}
