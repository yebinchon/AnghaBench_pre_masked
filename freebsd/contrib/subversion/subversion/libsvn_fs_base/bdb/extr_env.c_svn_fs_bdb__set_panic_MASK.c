
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ env; TYPE_1__* bdb; } ;
typedef TYPE_2__ bdb_env_baton_t ;
struct TYPE_4__ {scalar_t__ env; int panic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(bdb_env_baton_t *VAR_1)
{
  if (!VAR_1->bdb)
    return;

  FUNC_0(VAR_1->env == VAR_1->bdb->env);
  FUNC_1(&VAR_1->bdb->panic, VAR_0);
}
