
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_id_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int * (* unparse ) (TYPE_2__ const*,int *) ;} ;


 int * FUNC_0 (TYPE_2__ const*,int *) ;

svn_string_t *
FUNC_1(const svn_fs_id_t *VAR_0, apr_pool_t *VAR_1)
{
  return VAR_0->vtable->unparse(VAR_0, VAR_1);
}
