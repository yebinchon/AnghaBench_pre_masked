
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int *,int *) ;
 int * FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_string_t **VAR_1, svn_mergeinfo_t VAR_2,
                        apr_pool_t *VAR_3)
{
  svn_stringbuf_t *VAR_4;

  FUNC_0(FUNC_1(&VAR_4, VAR_2, ((void*)0), VAR_3));
  *VAR_1 = FUNC_2(VAR_4);
  return VAR_0;
}
