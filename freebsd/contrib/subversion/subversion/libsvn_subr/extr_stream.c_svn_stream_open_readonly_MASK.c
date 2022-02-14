
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (int **,char const*,int,int ,int *) ;
 int * FUNC_2 (int *,int ,int *) ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_5,
                         const char *VAR_6,
                         apr_pool_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  apr_file_t *VAR_9;

  FUNC_0(FUNC_1(&VAR_9, VAR_6, VAR_2 | VAR_0,
                           VAR_1, VAR_7));
  *VAR_5 = FUNC_2(VAR_9, VAR_3, VAR_7);

  return VAR_4;
}
