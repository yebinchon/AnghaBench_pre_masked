
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct get_node_mergeinfo_stats_baton {int node; int child_mergeinfo_count; int has_mergeinfo; int path; int root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int ) ;
 int * FUNC_2 (int *,int *,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0, trail_t *VAR_1)
{
  struct get_node_mergeinfo_stats_baton *VAR_2 = VAR_0;

  FUNC_0(FUNC_1(&(VAR_2->node), VAR_2->root, VAR_2->path,
                  VAR_1, VAR_1->pool));
  return FUNC_2(&(VAR_2->has_mergeinfo),
                                              &(VAR_2->child_mergeinfo_count),
                                              VAR_2->node, VAR_1,
                                              VAR_1->pool);
}
