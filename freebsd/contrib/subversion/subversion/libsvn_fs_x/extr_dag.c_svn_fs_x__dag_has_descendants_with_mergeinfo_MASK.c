
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int mergeinfo_count; int has_mergeinfo; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

svn_boolean_t
FUNC_0(dag_node_t *VAR_3)
{
  svn_fs_x__noderev_t *VAR_4 = VAR_3->node_revision;

  if (VAR_4->kind != VAR_2)
      return VAR_0;

  if (VAR_4->mergeinfo_count > 1)
    return VAR_1;
  else if (VAR_4->mergeinfo_count == 1 && !VAR_4->has_mergeinfo)
    return VAR_1;

  return VAR_0;
}
