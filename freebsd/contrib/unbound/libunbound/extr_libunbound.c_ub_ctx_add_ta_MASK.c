
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_1__* env; scalar_t__ finalized; } ;
struct TYPE_4__ {int trust_anchor_list; } ;
struct TYPE_3__ {TYPE_2__* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(struct ub_ctx* VAR_3, const char* VAR_4)
{
 char* VAR_5 = FUNC_4(VAR_4);
 if(!VAR_5) return VAR_2;
 FUNC_2(&VAR_3->cfglock);
 if(VAR_3->finalized) {
  FUNC_3(&VAR_3->cfglock);
  FUNC_1(VAR_5);
  return VAR_0;
 }
 if(!FUNC_0(&VAR_3->env->cfg->trust_anchor_list, VAR_5)) {
  FUNC_3(&VAR_3->cfglock);
  return VAR_2;
 }
 FUNC_3(&VAR_3->cfglock);
 return VAR_1;
}
