
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* closest_copy ) (TYPE_2__**,char const**,TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (TYPE_2__**,char const**,TYPE_2__*,char const*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_fs_root_t **VAR_0, const char **VAR_1,
                    svn_fs_root_t *VAR_2, const char *VAR_3, apr_pool_t *VAR_4)
{
  return FUNC_1(VAR_2->vtable->closest_copy(VAR_0, VAR_1,
                                                    VAR_2, VAR_3, VAR_4));
}
