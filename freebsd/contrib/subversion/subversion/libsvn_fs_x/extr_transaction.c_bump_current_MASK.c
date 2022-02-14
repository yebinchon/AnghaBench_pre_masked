
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char const*,char const*,int *,int *) ;
 char* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_1,
             svn_revnum_t VAR_2,
             svn_fs_x__batch_fsync_t *VAR_3,
             apr_pool_t *VAR_4)
{
  const char *VAR_5;


  FUNC_0(FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4));


  FUNC_0(FUNC_1(VAR_3, VAR_4));


  VAR_5 = FUNC_3(VAR_1, VAR_4);
  FUNC_0(FUNC_2(FUNC_4(VAR_1, VAR_4),
                                    VAR_5, VAR_5,
                                    VAR_3, VAR_4));


  FUNC_0(FUNC_1(VAR_3, VAR_4));

  return VAR_0;
}
