
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int **,int *,char const*,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int *) ;

svn_error_t *
FUNC_3(apr_file_t **VAR_3,
                                svn_fs_x__batch_fsync_t *VAR_4,
                                const char *VAR_5,
                                apr_pool_t *VAR_6)
{
  apr_off_t VAR_7 = 0;

  FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1,
                             VAR_6));
  FUNC_0(FUNC_2(*VAR_3, VAR_0, &VAR_7, VAR_6));

  return VAR_2;
}
