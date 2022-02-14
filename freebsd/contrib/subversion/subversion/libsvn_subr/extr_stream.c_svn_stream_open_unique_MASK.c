
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_io_file_del_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,char const**,char const*,int ,int *,int *) ;
 int * FUNC_2 (int *,int ,int *) ;

svn_error_t *
FUNC_3(svn_stream_t **VAR_2,
                       const char **VAR_3,
                       const char *VAR_4,
                       svn_io_file_del_t VAR_5,
                       apr_pool_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  apr_file_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_4,
                                   VAR_5, VAR_6, VAR_7));
  *VAR_2 = FUNC_2(VAR_8, VAR_0, VAR_6);

  return VAR_1;
}
