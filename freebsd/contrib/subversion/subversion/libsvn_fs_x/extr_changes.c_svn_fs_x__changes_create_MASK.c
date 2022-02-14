
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; } ;
typedef TYPE_1__ svn_fs_x__changes_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

svn_fs_x__changes_t *
FUNC_2(apr_size_t VAR_0,
                         apr_pool_t *VAR_1)
{
  svn_fs_x__changes_t *VAR_2 = FUNC_0(VAR_0,
                                                     VAR_1);
  VAR_2->builder = FUNC_1(VAR_1);

  return VAR_2;
}
