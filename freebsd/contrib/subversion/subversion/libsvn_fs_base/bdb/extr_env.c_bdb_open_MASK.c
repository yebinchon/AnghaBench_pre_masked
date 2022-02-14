
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int pool; int path; int dbconfig_file; int key; TYPE_2__* env; int path_bdb; } ;
typedef TYPE_1__ bdb_env_t ;
struct TYPE_7__ {int (* set_flags ) (TYPE_2__*,int ,int) ;int (* open ) (TYPE_2__*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static svn_error_t *
FUNC_5(bdb_env_t *VAR_2, u_int32_t VAR_3, int VAR_4)
{



  FUNC_0(FUNC_2
          (VAR_2, (VAR_2->env->open)(VAR_2->env, VAR_2->path_bdb, VAR_3, VAR_4)));
  return FUNC_1(&VAR_2->key, &VAR_2->dbconfig_file,
                       VAR_2->path, VAR_2->pool);
}
