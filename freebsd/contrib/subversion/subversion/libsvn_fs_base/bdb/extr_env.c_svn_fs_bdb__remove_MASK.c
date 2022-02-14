
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int path_bdb; TYPE_2__* env; } ;
typedef TYPE_1__ bdb_env_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int (* remove ) (TYPE_2__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__**,char const*,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

svn_error_t *
FUNC_4(const char *VAR_1, apr_pool_t *VAR_2)
{
  bdb_env_t *VAR_3;

  FUNC_0(FUNC_2(&VAR_3, VAR_1, VAR_2));
  return FUNC_1
    (VAR_3, VAR_3->env->remove(VAR_3->env, VAR_3->path_bdb, VAR_0));
}
