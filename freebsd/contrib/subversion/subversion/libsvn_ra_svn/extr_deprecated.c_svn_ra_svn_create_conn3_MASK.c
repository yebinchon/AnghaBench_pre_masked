
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_ra_svn_conn_t ;
typedef int apr_socket_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int *,int,int ,int ,int *) ;
 int * FUNC_1 (int *,int ,int *) ;

svn_ra_svn_conn_t *
FUNC_2(apr_socket_t *VAR_1,
                        apr_file_t *VAR_2,
                        apr_file_t *VAR_3,
                        int VAR_4,
                        apr_size_t VAR_5,
                        apr_size_t VAR_6,
                        apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8 = ((void*)0);
  svn_stream_t *VAR_9 = ((void*)0);

  if (VAR_2)
    VAR_8 = FUNC_1(VAR_2, VAR_0, VAR_7);
  if (VAR_3)
    VAR_9 = FUNC_1(VAR_3, VAR_0, VAR_7);

  return FUNC_0(VAR_1, VAR_8, VAR_9,
                                 VAR_4, VAR_5,
                                 VAR_6, VAR_7);
}
