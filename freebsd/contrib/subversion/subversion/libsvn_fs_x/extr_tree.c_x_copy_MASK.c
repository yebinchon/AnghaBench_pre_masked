
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_root_t *VAR_2,
       const char *VAR_3,
       svn_fs_root_t *VAR_4,
       const char *VAR_5,
       apr_pool_t *VAR_6)
{
  apr_pool_t *VAR_7 = FUNC_3(VAR_6);

  FUNC_0(FUNC_1(VAR_2,
                      FUNC_2(VAR_3, VAR_7),
                      VAR_4,
                      FUNC_2(VAR_5, VAR_7),
                      VAR_1, VAR_7));

  FUNC_4(VAR_7);

  return VAR_0;
}
