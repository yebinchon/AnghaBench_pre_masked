
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {int change_set; } ;
struct TYPE_7__ {int change_set; } ;
struct TYPE_9__ {TYPE_2__ noderev_id; TYPE_1__ predecessor_id; } ;
typedef TYPE_3__ svn_fs_x__noderev_t ;
struct TYPE_10__ {TYPE_3__* node_revision; } ;
typedef TYPE_4__ dag_node_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

svn_revnum_t
FUNC_2(const dag_node_t *VAR_0)
{
  svn_fs_x__noderev_t *VAR_1 = VAR_0->node_revision;
  return ( FUNC_1(VAR_1)
          ? FUNC_0(VAR_1->predecessor_id.change_set)
          : FUNC_0(VAR_1->noderev_id.change_set));
}
