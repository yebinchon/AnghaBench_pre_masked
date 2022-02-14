
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_iccn {int framing_type; int pkt_proc_delay; int recv_winsiz; int conn_speed; int reserved1; int peer_call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_1,
                const u_char *VAR_2)
{
 const struct pptp_msg_iccn *VAR_3 = (const struct pptp_msg_iccn *)VAR_2;

 FUNC_1(VAR_3->peer_call_id);
 FUNC_4(VAR_1, &VAR_3->peer_call_id);
 FUNC_1(VAR_3->reserved1);
 FUNC_1(VAR_3->conn_speed);
 FUNC_2(VAR_1, &VAR_3->conn_speed);
 FUNC_1(VAR_3->recv_winsiz);
 FUNC_6(VAR_1, &VAR_3->recv_winsiz);
 FUNC_1(VAR_3->pkt_proc_delay);
 FUNC_5(VAR_1, &VAR_3->pkt_proc_delay);
 FUNC_1(VAR_3->framing_type);
 FUNC_3(VAR_1, &VAR_3->framing_type);

 return;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
}
