
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fc_id; } ;
struct TYPE_8__ {int send_plogi; int nodedb_state; TYPE_2__ rnode; TYPE_1__* ocs; } ;
typedef TYPE_3__ ocs_node_t ;
struct TYPE_6__ {int nodedb_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;

void
FUNC_2(ocs_node_t *VAR_3, int VAR_4)
{
 VAR_3->send_plogi = VAR_4;
 if ((VAR_3->ocs->nodedb_mask & VAR_0) && !FUNC_0(VAR_3->rnode.fc_id)) {
  VAR_3->nodedb_state = VAR_1;
  FUNC_1(VAR_3, VAR_2, ((void*)0));
 } else {
  FUNC_1(VAR_3, VAR_1, ((void*)0));
 }
}
