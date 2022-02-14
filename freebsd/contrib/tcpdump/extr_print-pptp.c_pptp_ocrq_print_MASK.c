
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_ocrq {int * subaddr; int * phone_no; int * reserved1; int * phone_no_len; int * pkt_proc_delay; int * recv_winsiz; int * framing_type; int * bearer_type; int * max_bps; int * min_bps; int * call_ser; int * call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_11(netdissect_options *VAR_1,
                const u_char *VAR_2)
{
 const struct pptp_msg_ocrq *VAR_3 = (const struct pptp_msg_ocrq *)VAR_2;

 FUNC_3(VAR_3->call_id);
 FUNC_5(VAR_1, &VAR_3->call_id);
 FUNC_3(VAR_3->call_ser);
 FUNC_6(VAR_1, &VAR_3->call_ser);
 FUNC_3(VAR_3->min_bps);
 FUNC_2((VAR_1, " MIN_BPS(%u)", FUNC_1(&VAR_3->min_bps)));
 FUNC_3(VAR_3->max_bps);
 FUNC_2((VAR_1, " MAX_BPS(%u)", FUNC_1(&VAR_3->max_bps)));
 FUNC_3(VAR_3->bearer_type);
 FUNC_4(VAR_1, &VAR_3->bearer_type);
 FUNC_3(VAR_3->framing_type);
 FUNC_7(VAR_1, &VAR_3->framing_type);
 FUNC_3(VAR_3->recv_winsiz);
 FUNC_9(VAR_1, &VAR_3->recv_winsiz);
 FUNC_3(VAR_3->pkt_proc_delay);
 FUNC_8(VAR_1, &VAR_3->pkt_proc_delay);
 FUNC_3(VAR_3->phone_no_len);
 FUNC_2((VAR_1, " PHONE_NO_LEN(%u)", FUNC_0(&VAR_3->phone_no_len)));
 FUNC_3(VAR_3->reserved1);
 FUNC_3(VAR_3->phone_no);
 FUNC_2((VAR_1, " PHONE_NO(%.64s)", VAR_3->phone_no));
 FUNC_3(VAR_3->subaddr);
 FUNC_10(VAR_1, &VAR_3->subaddr[0]);

 return;

trunc:
 FUNC_2((VAR_1, "%s", VAR_0));
}
