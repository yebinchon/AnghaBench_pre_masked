
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_1__* env; scalar_t__ finalized; } ;
struct TYPE_2__ {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct ub_ctx* VAR_3, const char* VAR_4, const char* VAR_5)
{
 FUNC_1(&VAR_3->cfglock);
 if(VAR_3->finalized) {
  FUNC_2(&VAR_3->cfglock);
  return VAR_0;
 }
 if(!FUNC_0(VAR_3->env->cfg, VAR_4, VAR_5)) {
  FUNC_2(&VAR_3->cfglock);
  return VAR_2;
 }
 FUNC_2(&VAR_3->cfglock);
 return VAR_1;
}
