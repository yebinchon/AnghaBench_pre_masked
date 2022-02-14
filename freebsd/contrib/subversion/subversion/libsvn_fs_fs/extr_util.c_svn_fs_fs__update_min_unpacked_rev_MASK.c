
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ format; int min_unpacked_rev; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,TYPE_1__*,int *) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_1,
                                   apr_pool_t *VAR_2)
{
  fs_fs_data_t *VAR_3 = VAR_1->fsap_data;

  FUNC_0(VAR_3->format >= VAR_0);

  return FUNC_1(&VAR_3->min_unpacked_rev, VAR_1, VAR_2);
}
