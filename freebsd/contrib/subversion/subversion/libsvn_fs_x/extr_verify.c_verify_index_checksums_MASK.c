
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
typedef int svn_fs_x__index_info_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,int *,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_1,
                       svn_revnum_t VAR_2,
                       svn_cancel_func_t VAR_3,
                       void *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_fs_x__revision_file_t *VAR_6;
  svn_fs_x__index_info_t VAR_7;
  svn_fs_x__index_info_t VAR_8;


  FUNC_0(FUNC_2(&VAR_6, VAR_1, VAR_2, VAR_5));
  FUNC_0(FUNC_3(&VAR_7, VAR_6));
  FUNC_0(FUNC_4(&VAR_8, VAR_6));


  FUNC_0(FUNC_5(VAR_6, "L2P index", &VAR_7,
                                VAR_3, VAR_4, VAR_5));
  FUNC_0(FUNC_5(VAR_6, "P2L index", &VAR_8,
                                VAR_3, VAR_4, VAR_5));


  FUNC_0(FUNC_1(VAR_6));

  return VAR_0;
}
