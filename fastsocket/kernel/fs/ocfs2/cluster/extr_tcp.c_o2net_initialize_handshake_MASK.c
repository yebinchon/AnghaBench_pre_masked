
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* o2net_reconnect_delay_ms; void* o2net_keepalive_delay_ms; void* o2net_idle_timeout_ms; void* o2hb_heartbeat_timeout_ms; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 VAR_1->o2hb_heartbeat_timeout_ms = FUNC_0(
  VAR_0);
 VAR_1->o2net_idle_timeout_ms = FUNC_0(FUNC_1());
 VAR_1->o2net_keepalive_delay_ms = FUNC_0(
  FUNC_2());
 VAR_1->o2net_reconnect_delay_ms = FUNC_0(
  FUNC_3());
}
