
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* make_file ) (TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const*,int *) ;

svn_error_t *
FUNC_4(svn_fs_root_t *VAR_0, const char *VAR_1, apr_pool_t *VAR_2)
{
  FUNC_0(FUNC_3(VAR_1, VAR_2));
  return FUNC_2(VAR_0->vtable->make_file(VAR_0, VAR_1, VAR_2));
}
