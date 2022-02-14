
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_history_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* location ) (char const**,int *,TYPE_2__*,int *) ;} ;


 int FUNC_0 (char const**,int *,TYPE_2__*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(const char **VAR_0, svn_revnum_t *VAR_1,
                        svn_fs_history_t *VAR_2, apr_pool_t *VAR_3)
{
  return FUNC_1(VAR_2->vtable->location(VAR_0, VAR_1, VAR_2,
                                                   VAR_3));
}
