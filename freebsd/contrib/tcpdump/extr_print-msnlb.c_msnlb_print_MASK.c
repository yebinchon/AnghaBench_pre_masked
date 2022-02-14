
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct msnlb_heartbeat_pkt {int host_ip; int virtual_ip; int host_prio; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msnlb_heartbeat_pkt const) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(netdissect_options *VAR_0, const u_char *VAR_1)
{
 const struct msnlb_heartbeat_pkt *VAR_2;

 VAR_2 = (const struct msnlb_heartbeat_pkt *)VAR_1;
 FUNC_2(*VAR_2);

 FUNC_1((VAR_0, "MS NLB heartbeat, host priority: %u,",
  FUNC_0(&(VAR_2->host_prio))));
 FUNC_1((VAR_0, " cluster IP: %s,", FUNC_3(VAR_0, &(VAR_2->virtual_ip))));
 FUNC_1((VAR_0, " host IP: %s", FUNC_3(VAR_0, &(VAR_2->host_ip))));
 return;
trunc:
 FUNC_1((VAR_0, "[|MS NLB]"));
}
