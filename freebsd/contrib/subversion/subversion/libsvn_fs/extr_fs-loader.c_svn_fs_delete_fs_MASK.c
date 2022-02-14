
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int (* delete_fs ) (char const*,int *) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**,char const*,int *) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ) ;

svn_error_t *
FUNC_4(const char *VAR_0, apr_pool_t *VAR_1)
{
  fs_library_vtable_t *VAR_2;

  FUNC_0(FUNC_1(&VAR_2, VAR_0, VAR_1));
  return FUNC_3(VAR_2->delete_fs(VAR_0, VAR_1));
}
