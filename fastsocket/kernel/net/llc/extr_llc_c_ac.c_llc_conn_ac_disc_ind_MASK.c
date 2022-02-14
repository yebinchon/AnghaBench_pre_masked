
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_un {int dummy; } ;
struct llc_conn_state_ev {scalar_t__ type; int ind_prim; int reason; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_1 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_2 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_3 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_4 (struct llc_pdu_un*) ;
 struct llc_conn_state_ev* FUNC_5 (struct sk_buff*) ;
 struct llc_pdu_un* FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sock *VAR_9, struct sk_buff *VAR_10)
{
 struct llc_conn_state_ev *VAR_11 = FUNC_5(VAR_10);
 u8 VAR_12 = 0;
 int VAR_13 = 0;

 if (VAR_11->type == VAR_4) {
  struct llc_pdu_un *VAR_14 = FUNC_6(VAR_10);

  if (FUNC_1(VAR_14) &&
      FUNC_2(VAR_14) &&
      FUNC_4(VAR_14) == VAR_2)
   VAR_12 = VAR_8;
  else if (FUNC_0(VAR_14) &&
      FUNC_2(VAR_14) &&
      FUNC_3(VAR_14) == VAR_1)
   VAR_12 = VAR_7;
 } else if (VAR_11->type == VAR_3)
  VAR_12 = VAR_6;
 else
  VAR_13 = -VAR_0;
 if (!VAR_13) {
  VAR_11->reason = VAR_12;
  VAR_11->ind_prim = VAR_5;
 }
 return VAR_13;
}
