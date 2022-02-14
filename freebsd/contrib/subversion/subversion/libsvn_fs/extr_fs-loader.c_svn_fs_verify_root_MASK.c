
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_8__ {TYPE_2__* fs; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int (* verify_root ) (TYPE_3__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *) ;

svn_error_t *
FUNC_2(svn_fs_root_t *VAR_1,
                   apr_pool_t *VAR_2)
{
  svn_fs_t *VAR_3 = VAR_1->fs;
  FUNC_0(VAR_3->vtable->verify_root(VAR_1, VAR_2));

  return VAR_0;
}
