
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; int error_info; int * dbconfig_file; int * pool; } ;
typedef TYPE_1__ bdb_env_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_1)
{
  bdb_env_t *VAR_2 = VAR_1;
  VAR_2->pool = ((void*)0);
  VAR_2->dbconfig_file = ((void*)0);
  if (!VAR_2->refcount)
    FUNC_1(VAR_1);

  return VAR_0;
}
