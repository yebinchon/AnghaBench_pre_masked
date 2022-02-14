
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_sli {int recv_accm; int send_accm; int reserved1; int peer_call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_1,
               const u_char *VAR_2)
{
 const struct pptp_msg_sli *VAR_3 = (const struct pptp_msg_sli *)VAR_2;

 FUNC_2(VAR_3->peer_call_id);
 FUNC_3(VAR_1, &VAR_3->peer_call_id);
 FUNC_2(VAR_3->reserved1);
 FUNC_2(VAR_3->send_accm);
 FUNC_1((VAR_1, " SEND_ACCM(0x%08x)", FUNC_0(&VAR_3->send_accm)));
 FUNC_2(VAR_3->recv_accm);
 FUNC_1((VAR_1, " RECV_ACCM(0x%08x)", FUNC_0(&VAR_3->recv_accm)));

 return;

trunc:
 FUNC_1((VAR_1, "%s", VAR_0));
}
