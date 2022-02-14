
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* revision_root ) (int **,TYPE_2__*,int ,int *) ;} ;


 int FUNC_0 (int **,TYPE_2__*,int ,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_fs_root_t **VAR_0, svn_fs_t *VAR_1, svn_revnum_t VAR_2,
                     apr_pool_t *VAR_3)
{


  apr_pool_t *VAR_4 = FUNC_2(VAR_3);
  return FUNC_1(VAR_1->vtable->revision_root(VAR_0, VAR_1, VAR_2, VAR_4));
}
