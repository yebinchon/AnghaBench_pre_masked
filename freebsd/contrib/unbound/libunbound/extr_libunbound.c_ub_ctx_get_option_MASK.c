
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_1__* env; } ;
struct TYPE_2__ {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct ub_ctx* VAR_3, const char* VAR_4, char** VAR_5)
{
 int VAR_6;
 FUNC_1(&VAR_3->cfglock);
 VAR_6 = FUNC_0(VAR_3->env->cfg, VAR_4, VAR_5);
 FUNC_2(&VAR_3->cfglock);
 if(VAR_6 == 0) VAR_6 = VAR_0;
 else if(VAR_6 == 1) VAR_6 = VAR_2;
 else if(VAR_6 == 2) VAR_6 = VAR_1;
 return VAR_6;
}
