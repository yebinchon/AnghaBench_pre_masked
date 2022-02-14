
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
struct TYPE_5__ {int (* get_prop ) (int **,TYPE_2__*,char const*,int *) ;} ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int **,TYPE_2__*,char const*,int *) ;
 int * FUNC_2 (int ) ;

svn_error_t *
FUNC_3(svn_string_t **VAR_1, svn_fs_txn_t *VAR_2,
                const char *VAR_3, apr_pool_t *VAR_4)
{
  if (FUNC_0(VAR_3))
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }

  return FUNC_2(VAR_2->vtable->get_prop(VAR_1, VAR_2, VAR_3, VAR_4));
}
