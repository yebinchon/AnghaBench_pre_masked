
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_3__ {int number; int change_set; } ;
typedef TYPE_1__ svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int *,int *,int ,int ,int *) ;
 int FUNC_2 (int *,int *,int *,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

svn_error_t *
FUNC_6(apr_off_t *VAR_1,
                      apr_uint32_t *VAR_2,
                      svn_fs_t *VAR_3,
                      svn_fs_x__revision_file_t *VAR_4,
                      const svn_fs_x__id_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  if (FUNC_5(VAR_5->change_set))
    FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_3,
                                   FUNC_4(VAR_5->change_set),
                                   VAR_5->number, VAR_6));
  else
    FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
                             FUNC_3(VAR_5->change_set),
                             VAR_5->number, VAR_6));

  return VAR_0;
}
