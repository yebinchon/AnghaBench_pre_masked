
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,char const*,int *) ;
 char* FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,int *) ;
 int FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (int *,char*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_t *VAR_1,
                svn_revnum_t VAR_2,
                svn_fs_x__batch_fsync_t *VAR_3,
                apr_pool_t *VAR_4)
{
  apr_file_t *VAR_5;
  const char *VAR_6 = FUNC_5(VAR_1, VAR_4);
  const char *VAR_7 = FUNC_4(VAR_1, VAR_4);
  char *VAR_8;


  FUNC_0(FUNC_3(&VAR_5, VAR_3, VAR_6, VAR_4));


  VAR_8 = FUNC_1(VAR_4, "%ld\n", VAR_2);
  FUNC_0(FUNC_7(VAR_5, VAR_8, FUNC_2(VAR_8), ((void*)0), VAR_4));


  FUNC_0(FUNC_6(VAR_7, VAR_6, VAR_4));

  return VAR_0;
}
