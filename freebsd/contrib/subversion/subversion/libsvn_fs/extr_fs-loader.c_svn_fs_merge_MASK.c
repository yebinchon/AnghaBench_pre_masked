
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int (* merge ) (char const**,TYPE_2__*,char const*,TYPE_2__*,char const*,TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (char const**,TYPE_2__*,char const*,TYPE_2__*,char const*,TYPE_2__*,char const*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(const char **VAR_0, svn_fs_root_t *VAR_1,
             const char *VAR_2, svn_fs_root_t *VAR_3,
             const char *VAR_4, svn_fs_root_t *VAR_5,
             const char *VAR_6, apr_pool_t *VAR_7)
{
  return FUNC_1(VAR_3->vtable->merge(VAR_0,
                                                    VAR_1, VAR_2,
                                                    VAR_3, VAR_4,
                                                    VAR_5,
                                                    VAR_6, VAR_7));
}
