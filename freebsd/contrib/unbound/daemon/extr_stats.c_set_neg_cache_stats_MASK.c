
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cfg; scalar_t__* modinfo; TYPE_1__* mesh; } ;
struct worker {TYPE_3__ env; } ;
struct val_neg_cache {int lock; scalar_t__ num_neg_cache_nxdomain; scalar_t__ num_neg_cache_noerror; } ;
struct val_env {struct val_neg_cache* neg_cache; } ;
struct ub_server_stats {long long num_neg_cache_noerror; long long num_neg_cache_nxdomain; } ;
struct TYPE_5__ {int stat_cumulative; } ;
struct TYPE_4__ {int mods; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(struct worker* VAR_0, struct ub_server_stats* VAR_1,
 int VAR_2)
{
 int VAR_3 = FUNC_2(&VAR_0->env.mesh->mods, "validator");
 struct val_env* VAR_4;
 struct val_neg_cache* VAR_5;
 if(VAR_3 == -1)
  return;
 VAR_4 = (struct val_env*)VAR_0->env.modinfo[VAR_3];
 if(!VAR_4->neg_cache)
  return;
 VAR_5 = VAR_4->neg_cache;
 FUNC_0(&VAR_5->lock);
 VAR_1->num_neg_cache_noerror = (long long)VAR_5->num_neg_cache_noerror;
 VAR_1->num_neg_cache_nxdomain = (long long)VAR_5->num_neg_cache_nxdomain;
 if(VAR_2 && !VAR_0->env.cfg->stat_cumulative) {
  VAR_5->num_neg_cache_noerror = 0;
  VAR_5->num_neg_cache_nxdomain = 0;
 }
 FUNC_1(&VAR_5->lock);
}
