
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * now; TYPE_2__* infra_cache; } ;
struct worker {TYPE_1__ env; } ;
struct infra_arg {TYPE_2__* infra; scalar_t__ ssl_failed; int now; int * ssl; } ;
struct TYPE_4__ {int hosts; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,void*) ;

__attribute__((used)) static void
FUNC_1(RES* VAR_1, struct worker* VAR_2)
{
 struct infra_arg VAR_3;
 VAR_3.infra = VAR_2->env.infra_cache;
 VAR_3.ssl = VAR_1;
 VAR_3.now = *VAR_2->env.now;
 VAR_3.ssl_failed = 0;
 FUNC_0(VAR_3.infra->hosts, 0, &VAR_0, (void*)&VAR_3);
}
