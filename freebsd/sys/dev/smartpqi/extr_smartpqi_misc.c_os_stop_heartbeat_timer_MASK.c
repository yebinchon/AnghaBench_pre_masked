
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int heartbeat_timeout_id; } ;
struct TYPE_6__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;

void FUNC_2(pqisrc_softstate_t *VAR_1)
{
 FUNC_0("IN\n");


 FUNC_1(VAR_0, VAR_1,
   VAR_1->os_specific.heartbeat_timeout_id);

 FUNC_0("OUT\n");
}
