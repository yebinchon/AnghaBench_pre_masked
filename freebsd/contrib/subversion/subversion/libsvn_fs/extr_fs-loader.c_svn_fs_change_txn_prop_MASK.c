
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* change_prop ) (TYPE_2__*,char const*,int const*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,int const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int * FUNC_4 (int ) ;

svn_error_t *
FUNC_5(svn_fs_txn_t *VAR_1, const char *VAR_2,
                       const svn_string_t *VAR_3, apr_pool_t *VAR_4)
{
  if (FUNC_1(VAR_2))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_0("Attempt to modify internal transaction "
                               "property '%s'"), VAR_2);

  return FUNC_4(VAR_1->vtable->change_prop(VAR_1, VAR_2, VAR_3, VAR_4));
}
