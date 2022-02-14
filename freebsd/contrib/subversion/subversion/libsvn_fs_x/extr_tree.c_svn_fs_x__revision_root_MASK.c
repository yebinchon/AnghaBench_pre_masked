
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int *) ;

svn_error_t *
FUNC_4(svn_fs_root_t **VAR_2,
                        svn_fs_t *VAR_3,
                        svn_revnum_t VAR_4,
                        apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_2(VAR_3, VAR_1));
  FUNC_0(FUNC_3(VAR_4, VAR_3, VAR_5));

  *VAR_2 = FUNC_1(VAR_3, VAR_4, VAR_5);

  return VAR_0;
}
