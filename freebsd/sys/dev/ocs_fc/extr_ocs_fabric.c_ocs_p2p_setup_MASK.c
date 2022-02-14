
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ external_loopback; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_8__ {int p2p_remote_port_id; int p2p_port_id; void* p2p_winner; TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_sport_t ;
typedef int int32_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;

int32_t
FUNC_3(ocs_sport_t *VAR_2)
{
 ocs_t *VAR_3 = VAR_2->ocs;
 int32_t VAR_4;
 VAR_4 = FUNC_2(VAR_2);


 if (VAR_4 == 1) {
  VAR_2->p2p_remote_port_id = 0;
  VAR_2->p2p_port_id = 0;
  VAR_2->p2p_winner = VAR_0;
 } else if (VAR_4 == 0) {
  VAR_2->p2p_remote_port_id = 2;
  VAR_2->p2p_port_id = 1;
  VAR_2->p2p_winner = VAR_1;
 } else {

  if (VAR_2->ocs->external_loopback) {




   FUNC_0(VAR_3, "External loopback mode enabled\n");
   VAR_2->p2p_remote_port_id = 1;
   VAR_2->p2p_port_id = 1;
   VAR_2->p2p_winner = VAR_1;
  } else {
   FUNC_1(VAR_3, "failed to determine p2p winner\n");
   return VAR_4;
  }
 }
 return 0;
}
