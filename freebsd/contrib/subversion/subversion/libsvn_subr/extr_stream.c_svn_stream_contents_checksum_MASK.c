
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int **,int *,int ,int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_checksum_t **VAR_0,
                             svn_stream_t *VAR_1,
                             svn_checksum_kind_t VAR_2,
                             apr_pool_t *VAR_3,
                             apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5;

  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2,
                                VAR_3, VAR_4);


  return FUNC_1(VAR_5, FUNC_2(VAR_1));
}
