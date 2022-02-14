
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_icrp {int reserved1; int pkt_proc_delay; int recv_winsiz; int err_code; int result_code; int peer_call_id; int call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(netdissect_options *VAR_2,
                const u_char *VAR_3)
{
 const struct pptp_msg_icrp *VAR_4 = (const struct pptp_msg_icrp *)VAR_3;

 FUNC_1(VAR_4->call_id);
 FUNC_2(VAR_2, &VAR_4->call_id);
 FUNC_1(VAR_4->peer_call_id);
 FUNC_4(VAR_2, &VAR_4->peer_call_id);
 FUNC_1(VAR_4->result_code);
 FUNC_7(VAR_2, &VAR_4->result_code, VAR_0);
 FUNC_1(VAR_4->err_code);
 FUNC_3(VAR_2, &VAR_4->err_code);
 FUNC_1(VAR_4->recv_winsiz);
 FUNC_6(VAR_2, &VAR_4->recv_winsiz);
 FUNC_1(VAR_4->pkt_proc_delay);
 FUNC_5(VAR_2, &VAR_4->pkt_proc_delay);
 FUNC_1(VAR_4->reserved1);

 return;

trunc:
 FUNC_0((VAR_2, "%s", VAR_1));
}
