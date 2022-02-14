
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_2__* env; scalar_t__ finalized; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int ssl_upstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ub_ctx* VAR_4, int VAR_5)
{
 FUNC_0(&VAR_4->cfglock);
 if(VAR_4->finalized) {
  FUNC_1(&VAR_4->cfglock);
  VAR_3=VAR_0;
  return VAR_1;
 }
 VAR_4->env->cfg->ssl_upstream = VAR_5;
 FUNC_1(&VAR_4->cfglock);
 return VAR_2;
}
