
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int **,int *,char const*,int *,char const*,int *) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,int *,int *) ;
 int * FUNC_3 (int *,int ,scalar_t__*,int *) ;
 int FUNC_4 (int **,int *,int *,int ,int *,int *) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,void*,int *) ;
 int FUNC_7 (int *,void**,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_file_t **VAR_4, svn_filesize_t *VAR_5,
            svn_fs_root_t *VAR_6, const char *VAR_7,
            svn_fs_root_t *VAR_8, const char *VAR_9, apr_pool_t *VAR_10)
{
  svn_stream_t *VAR_11;
  apr_off_t VAR_12;
  svn_txdelta_stream_t *VAR_13;
  svn_txdelta_window_handler_t VAR_14;
  void *VAR_15;



  FUNC_0(FUNC_4(VAR_4, ((void*)0), ((void*)0),
                                   VAR_3,
                                   VAR_10, VAR_10));
  VAR_11 = FUNC_5(*VAR_4, VAR_2, VAR_10);


  FUNC_0(FUNC_1(&VAR_13, VAR_6, VAR_7,
                                       VAR_8, VAR_9, VAR_10));
  FUNC_7(&VAR_14, &VAR_15, VAR_11, 0,
                          VAR_1, VAR_10);
  FUNC_0(FUNC_6(VAR_13, VAR_14, VAR_15, VAR_10));


  FUNC_0(FUNC_2(&VAR_12, *VAR_4, VAR_10));
  *VAR_5 = VAR_12;
  VAR_12 = 0;
  return FUNC_3(*VAR_4, VAR_0, &VAR_12, VAR_10);
}
