
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_packed__data_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_packed__data_root_t **VAR_1,
                             svn_stringbuf_t *VAR_2,
                             apr_pool_t *VAR_3,
                             apr_pool_t *VAR_4)
{
  svn_stream_t *VAR_5;

  FUNC_0(FUNC_3(VAR_2, VAR_4));

  VAR_5 = FUNC_2(VAR_2, VAR_4);
  FUNC_0(FUNC_1(VAR_1, VAR_5, VAR_3, VAR_4));

  return VAR_0;
}
