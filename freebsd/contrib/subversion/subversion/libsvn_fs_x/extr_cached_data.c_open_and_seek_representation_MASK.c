
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_6__ {int change_set; } ;
struct TYPE_5__ {TYPE_3__ id; } ;
typedef TYPE_1__ svn_fs_x__representation_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int **,int *,TYPE_3__*,int *,int *) ;
 int * FUNC_1 (int **,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_x__revision_file_t **VAR_0,
                             svn_fs_t *VAR_1,
                             svn_fs_x__representation_t *VAR_2,
                             apr_pool_t *VAR_3,
                             apr_pool_t *VAR_4)
{
  if (FUNC_2(VAR_2->id.change_set))
    return FUNC_0(VAR_0, VAR_1, &VAR_2->id, VAR_3,
                                  VAR_4);
  else
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
                                     VAR_4);
}
