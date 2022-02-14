
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int revprop_prefix; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_1,
                      apr_pool_t *VAR_2)
{
  fs_fs_data_t *VAR_3 = VAR_1->fsap_data;
  if (!VAR_3->revprop_prefix)
    FUNC_0(FUNC_1(&VAR_3->revprop_prefix));

  return VAR_0;
}
