
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debugnet_pcb {scalar_t__ dp_server; scalar_t__ dp_state; scalar_t__ dp_gateway; } ;
typedef scalar_t__ in_addr_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct debugnet_pcb*) ;
 int VAR_4 ;
 int FUNC_2 (struct debugnet_pcb*,scalar_t__) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct debugnet_pcb *VAR_5)
{
 in_addr_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_5->dp_server;
restart:
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  if (VAR_7 != 0)
   return (VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_4 &&
      VAR_5->dp_state < VAR_0; VAR_8++) {
   FUNC_1(VAR_5);
   FUNC_0(500);
  }
  if (VAR_5->dp_state >= VAR_0)
   break;
  FUNC_3("(ARP retry)");
 }
 if (VAR_5->dp_state >= VAR_0)
  return (0);
 if (VAR_6 == VAR_5->dp_server) {
  FUNC_3("\nFailed to ARP server");
  if (VAR_5->dp_gateway != VAR_2) {
   FUNC_3(", trying to reach gateway...\n");
   VAR_6 = VAR_5->dp_gateway;
   goto restart;
  } else
   FUNC_3(".\n");
 } else
  FUNC_3("\nFailed to ARP gateway.\n");

 return (VAR_1);
}
