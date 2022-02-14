
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_4__ {int * vtable; int * pool; int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static svn_fs_root_t *
FUNC_1(svn_fs_t *VAR_1,
          apr_pool_t *VAR_2)
{
  svn_fs_root_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->fs = VAR_1;
  VAR_3->pool = VAR_2;
  VAR_3->vtable = &VAR_0;

  return VAR_3;
}
