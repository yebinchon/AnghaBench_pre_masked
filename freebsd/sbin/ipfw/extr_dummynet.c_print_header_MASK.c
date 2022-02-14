
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_flow_id {int dummy; } ;


 int FUNC_0 (struct ipfw_flow_id*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ipfw_flow_id *VAR_0)
{
 if (!FUNC_0(VAR_0))
  FUNC_1("BKT Prot ___Source IP/port____ "
      "____Dest. IP/port____ "
      "Tot_pkt/bytes Pkt/Byte Drp\n");
 else
  FUNC_1("BKT ___Prot___ _flow-id_ "
      "______________Source IPv6/port_______________ "
      "_______________Dest. IPv6/port_______________ "
      "Tot_pkt/bytes Pkt/Byte Drp\n");
}
