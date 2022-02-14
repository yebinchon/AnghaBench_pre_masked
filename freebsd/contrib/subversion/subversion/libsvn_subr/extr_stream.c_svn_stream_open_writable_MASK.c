
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int * VAR_6 ;
 int FUNC_1 (int **,char const*,int,int ,int *) ;
 int * FUNC_2 (int *,int ,int *) ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_7,
                         const char *VAR_8,
                         apr_pool_t *VAR_9,
                         apr_pool_t *VAR_10)
{
  apr_file_t *VAR_11;

  FUNC_0(FUNC_1(&VAR_11, VAR_8,
                           VAR_4
                             | VAR_0
                             | VAR_1
                             | VAR_2,
                           VAR_3, VAR_9));
  *VAR_7 = FUNC_2(VAR_11, VAR_5, VAR_9);

  return VAR_6;
}
