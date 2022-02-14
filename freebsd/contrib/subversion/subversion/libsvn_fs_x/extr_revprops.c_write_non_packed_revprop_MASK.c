
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,char const*,char*,int ) ;
 int FUNC_2 (int **,int *,char const*,int *) ;
 char* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
                         const char **VAR_3,
                         svn_fs_t *VAR_4,
                         svn_revnum_t VAR_5,
                         apr_hash_t *VAR_6,
                         svn_fs_x__batch_fsync_t *VAR_7,
                         apr_pool_t *VAR_8,
                         apr_pool_t *VAR_9)
{
  apr_file_t *VAR_10;
  *VAR_2 = FUNC_3(VAR_4, VAR_5, VAR_8);

  *VAR_3 = FUNC_1(VAR_8, *VAR_2, ".tmp", VAR_1);
  FUNC_0(FUNC_2(&VAR_10, VAR_7, *VAR_3,
                                          VAR_9));

  FUNC_0(FUNC_4(VAR_10, VAR_6, VAR_9));

  return VAR_0;
}
