
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bdb; } ;
typedef TYPE_1__ bdb_env_baton_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_1)
{
  bdb_env_baton_t *VAR_2 = VAR_1;

  if (VAR_2->bdb)
    FUNC_0(FUNC_1(VAR_2));

  return VAR_0;
}
