
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pool; int owner; } ;
typedef TYPE_1__ svn_fs_x__revision_file_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static apr_pool_t *
FUNC_1(svn_fs_x__revision_file_t *VAR_0)
{
  if (VAR_0->pool == ((void*)0))
    VAR_0->pool = FUNC_0(VAR_0->owner);

  return VAR_0->pool;
}
