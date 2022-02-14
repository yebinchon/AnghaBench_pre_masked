
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* ocs; int gidpt_delay_timer; } ;
typedef TYPE_1__ ocs_node_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int xport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 ocs_node_t *VAR_3 = VAR_2;
 int32_t VAR_4;

 FUNC_0(&VAR_3->gidpt_delay_timer);
 VAR_4 = FUNC_2(VAR_3->ocs->xport, VAR_1, VAR_3, VAR_0, ((void*)0));
 if (VAR_4) {
  FUNC_1(VAR_3->ocs, "ocs_xport_control(OCS_XPORT_POST_NODE_EVENT) failed: %d\n", VAR_4);
 }
}
