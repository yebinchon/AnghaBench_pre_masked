
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

svn_error_t *
FUNC_4(svn_mergeinfo_t VAR_2, apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;

  for (VAR_4 = FUNC_0(VAR_3, VAR_2); VAR_4; VAR_4 = FUNC_1(VAR_4))
    {
      apr_array_header_t *VAR_5 = FUNC_2(VAR_4);

      FUNC_3(VAR_5, VAR_1);
    }
  return VAR_0;
}
