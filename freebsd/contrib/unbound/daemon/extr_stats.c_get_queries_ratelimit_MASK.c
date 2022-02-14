
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cfg; scalar_t__* modinfo; TYPE_2__* mesh; } ;
struct worker {TYPE_3__ env; } ;
struct iter_env {size_t num_queries_ratelimited; int queries_ratelimit_lock; } ;
struct TYPE_5__ {int mods; } ;
struct TYPE_4__ {int stat_cumulative; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static size_t
FUNC_3(struct worker* VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_2(&VAR_0->env.mesh->mods, "iterator");
 struct iter_env* VAR_3;
 size_t VAR_4;
 if(VAR_2 == -1)
  return 0;
 VAR_3 = (struct iter_env*)VAR_0->env.modinfo[VAR_2];
 FUNC_0(&VAR_3->queries_ratelimit_lock);
 VAR_4 = VAR_3->num_queries_ratelimited;
 if(VAR_1 && !VAR_0->env.cfg->stat_cumulative)
  VAR_3->num_queries_ratelimited = 0;
 FUNC_1(&VAR_3->queries_ratelimit_lock);
 return VAR_4;
}
