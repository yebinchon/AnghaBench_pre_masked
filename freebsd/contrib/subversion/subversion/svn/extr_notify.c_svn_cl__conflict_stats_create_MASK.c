
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ skipped_paths; scalar_t__ tree_conflicts_resolved; scalar_t__ prop_conflicts_resolved; scalar_t__ text_conflicts_resolved; void* tree_conflicts; void* prop_conflicts; void* text_conflicts; int * stats_pool; } ;
typedef TYPE_1__ svn_cl__conflict_stats_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

svn_cl__conflict_stats_t *
FUNC_2(apr_pool_t *VAR_0)
{
  svn_cl__conflict_stats_t *VAR_1
    = FUNC_1(VAR_0, sizeof(*VAR_1));

  VAR_1->stats_pool = VAR_0;
  VAR_1->text_conflicts = FUNC_0(VAR_0);
  VAR_1->prop_conflicts = FUNC_0(VAR_0);
  VAR_1->tree_conflicts = FUNC_0(VAR_0);
  VAR_1->text_conflicts_resolved = 0;
  VAR_1->prop_conflicts_resolved = 0;
  VAR_1->tree_conflicts_resolved = 0;
  VAR_1->skipped_paths = 0;
  return VAR_1;
}
