
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_4__ {int change_set; } ;
typedef TYPE_1__ svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int *,int *,int *,TYPE_1__ const*,int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_x__revision_file_t **VAR_1,
                       svn_fs_t *VAR_2,
                       const svn_fs_x__id_t *VAR_3,
                       apr_pool_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_fs_x__revision_file_t *VAR_6;
  apr_off_t VAR_7 = -1;
  apr_uint32_t VAR_8 = 0;
  svn_revnum_t VAR_9 = FUNC_2(VAR_3->change_set);

  FUNC_0(FUNC_1(VAR_9, VAR_2, VAR_5));

  FUNC_0(FUNC_4(&VAR_6, VAR_2, VAR_9, VAR_4));
  FUNC_0(FUNC_3(&VAR_7, &VAR_8, VAR_2, VAR_6, VAR_3,
                                VAR_5));
  FUNC_0(FUNC_5(VAR_6, ((void*)0), VAR_7));

  *VAR_1 = VAR_6;

  return VAR_0;
}
