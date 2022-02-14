
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_2__* env; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int verbosity; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

int
FUNC_2(struct ub_ctx* VAR_2, int VAR_3)
{
 FUNC_0(&VAR_2->cfglock);
 VAR_1 = VAR_3;
 VAR_2->env->cfg->verbosity = VAR_3;
 FUNC_1(&VAR_2->cfglock);
 return VAR_0;
}
