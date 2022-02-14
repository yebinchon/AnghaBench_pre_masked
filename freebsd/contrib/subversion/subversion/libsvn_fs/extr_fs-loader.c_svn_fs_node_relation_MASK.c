
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fs; TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_fs_node_relation_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* node_relation ) (int *,TYPE_2__*,char const*,TYPE_2__*,char const*,int *) ;} ;


 int * VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,char const*,TYPE_2__*,char const*,int *) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;

svn_error_t *
FUNC_2(svn_fs_node_relation_t *VAR_2,
                     svn_fs_root_t *VAR_3, const char *VAR_4,
                     svn_fs_root_t *VAR_5, const char *VAR_6,
                     apr_pool_t *VAR_7)
{

  if (VAR_3->fs != VAR_5->fs)
    {
      *VAR_2 = VAR_1;
      return VAR_0;
    }

  return FUNC_1(VAR_3->vtable->node_relation(VAR_2,
                                                       VAR_3, VAR_4,
                                                       VAR_5, VAR_6,
                                                       VAR_7));
}
