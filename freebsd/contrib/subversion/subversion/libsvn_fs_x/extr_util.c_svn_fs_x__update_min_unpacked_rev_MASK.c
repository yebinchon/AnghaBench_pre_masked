
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_unpacked_rev; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_6__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,TYPE_2__*,int *) ;

svn_error_t *
FUNC_1(svn_fs_t *VAR_0,
                                  apr_pool_t *VAR_1)
{
  svn_fs_x__data_t *VAR_2 = VAR_0->fsap_data;
  return FUNC_0(&VAR_2->min_unpacked_rev, VAR_0,
                                         VAR_1);
}
