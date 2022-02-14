
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *,int *,int ,int ,int *,int *) ;
 int * FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_fs_fs__revision_file_t **VAR_1,
                                 svn_fs_t *VAR_2,
                                 svn_revnum_t VAR_3,
                                 apr_pool_t *VAR_4,
                                 apr_pool_t *VAR_5)
{
  *VAR_1 = FUNC_0(VAR_4, sizeof(**VAR_1));
  FUNC_1(*VAR_1, VAR_2, VAR_3, VAR_4);

  return FUNC_3(FUNC_2(*VAR_1, VAR_2, VAR_3, VAR_0,
                                               VAR_4, VAR_5));
}
