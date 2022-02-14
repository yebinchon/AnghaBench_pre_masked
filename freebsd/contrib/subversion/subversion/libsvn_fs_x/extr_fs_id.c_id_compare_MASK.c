
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_fs_node_relation_t ;
typedef int svn_fs_id_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {int noderev_id; } ;
typedef TYPE_2__ fs_x__id_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_1 (TYPE_2__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_fs_node_relation_t
FUNC_4(const svn_fs_id_t *VAR_4,
           const svn_fs_id_t *VAR_5)
{
  const fs_x__id_t *VAR_6 = (const fs_x__id_t *)VAR_4;
  const fs_x__id_t *VAR_7 = (const fs_x__id_t *)VAR_5;
  svn_fs_x__noderev_t *VAR_8, *VAR_9;
  svn_boolean_t VAR_10;


  if (FUNC_2(&VAR_6->noderev_id, &VAR_7->noderev_id))
    return VAR_2;





  VAR_8 = FUNC_1(VAR_6);
  VAR_9 = FUNC_1(VAR_7);

  if (VAR_8 && VAR_9)
    VAR_10 = FUNC_2(&VAR_8->node_id, &VAR_9->node_id);
  else
    VAR_10 = VAR_0;

  FUNC_3(FUNC_0(VAR_6));
  FUNC_3(FUNC_0(VAR_7));


  return VAR_10 ? VAR_1 : VAR_3;
}
