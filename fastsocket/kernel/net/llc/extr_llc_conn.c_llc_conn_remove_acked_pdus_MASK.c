
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef void* u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int pdu_unack_q; } ;
struct llc_pdu_sn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct llc_pdu_sn* FUNC_2 (struct sk_buff*) ;
 struct llc_sock* FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;

int FUNC_7(struct sock *VAR_1, u8 VAR_2, u16 *VAR_3)
{
 int VAR_4, VAR_5;
 struct sk_buff *VAR_6;
 struct llc_pdu_sn *VAR_7;
 int VAR_8 = 0;
 struct llc_sock *VAR_9 = FUNC_3(VAR_1);
 int VAR_10 = FUNC_6(&VAR_9->pdu_unack_q);

 if (!VAR_10)
  goto out;
 VAR_6 = FUNC_5(&VAR_9->pdu_unack_q);
 VAR_7 = FUNC_2(VAR_6);


 VAR_4 = ((int)VAR_0 + (int)VAR_2 -
   (int)FUNC_0(VAR_7)) % VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4 && VAR_5 < VAR_10; VAR_5++) {
  VAR_6 = FUNC_4(&VAR_9->pdu_unack_q);
  FUNC_1(VAR_6);
  VAR_8++;
 }
out:
 *VAR_3 = FUNC_6(&VAR_9->pdu_unack_q);
 return VAR_8;
}
