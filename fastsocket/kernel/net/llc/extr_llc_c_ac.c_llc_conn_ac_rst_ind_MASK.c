
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int n2; int retry_count; } ;
struct llc_pdu_un {int dummy; } ;
struct llc_conn_state_ev {int type; int ind_prim; int reason; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct llc_pdu_un*) ;
 int FUNC_1 (struct llc_pdu_un*) ;
 int FUNC_2 (struct llc_pdu_un*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct llc_pdu_un*) ;
 int FUNC_4 (struct llc_pdu_un*) ;
 struct llc_conn_state_ev* FUNC_5 (struct sk_buff*) ;
 struct llc_pdu_un* FUNC_6 (struct sk_buff*) ;
 struct llc_sock* FUNC_7 (struct sock*) ;

int FUNC_8(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 u8 VAR_7 = 0;
 int VAR_8 = 1;
 struct llc_conn_state_ev *VAR_9 = FUNC_5(VAR_6);
 struct llc_pdu_un *VAR_10 = FUNC_6(VAR_6);
 struct llc_sock *VAR_11 = FUNC_7(VAR_5);

 switch (VAR_9->type) {
 case 130:
  if (FUNC_1(VAR_10) &&
      FUNC_2(VAR_10) &&
      FUNC_4(VAR_10) == VAR_1) {
   VAR_7 = VAR_3;
   VAR_8 = 0;
  } else if (FUNC_0(VAR_10) &&
      FUNC_2(VAR_10) &&
      FUNC_3(VAR_10) == VAR_0) {
   VAR_7 = VAR_4;
   VAR_8 = 0;
  }
  break;
 case 132:
 case 129:
 case 128:
 case 131:
  if (VAR_11->retry_count > VAR_11->n2) {
   VAR_7 = VAR_3;
   VAR_8 = 0;
  }
  break;
 }
 if (!VAR_8) {
  VAR_9->reason = VAR_7;
  VAR_9->ind_prim = VAR_2;
 }
 return VAR_8;
}
