
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int **,int *,char const*,int ,int *) ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_4(svn_fs_x__batch_fsync_t *VAR_4,
                               const char *VAR_5,
                               apr_pool_t *VAR_6)
{
  apr_file_t *VAR_7;
  svn_node_kind_t VAR_8;



  FUNC_0(FUNC_3(VAR_5, &VAR_8, VAR_6));
  if (VAR_8 == VAR_3)
    FUNC_0(FUNC_1(&VAR_7, VAR_4, VAR_5, VAR_1,
                               VAR_6));



  return VAR_2;
}
