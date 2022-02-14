
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

svn_error_t *
FUNC_5(svn_mergeinfo_t VAR_1,
                                   apr_pool_t *VAR_2)
{
  apr_hash_index_t *VAR_3;

  for (VAR_3 = FUNC_1(VAR_2, VAR_1); VAR_3; VAR_3 = FUNC_2(VAR_3))
    {
      apr_array_header_t *VAR_4 = FUNC_3(VAR_3);

      FUNC_0(FUNC_4(VAR_4, VAR_2));
    }

  return VAR_0;
}
