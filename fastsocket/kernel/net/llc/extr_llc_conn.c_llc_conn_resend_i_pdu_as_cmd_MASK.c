
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int vS; int pdu_unack_q; } ;
struct llc_pdu_sn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct llc_pdu_sn*) ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,scalar_t__,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 struct llc_pdu_sn* FUNC_5 (struct sk_buff*) ;
 struct llc_sock* FUNC_6 (struct sock*) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;

void FUNC_9(struct sock *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct sk_buff *VAR_5;
 struct llc_pdu_sn *VAR_6;
 u16 VAR_7;
 struct llc_sock *VAR_8;
 u8 VAR_9 = 0;

 FUNC_1(VAR_2, VAR_3, &VAR_7);
 if (!VAR_7)
  goto out;




 VAR_8 = FUNC_6(VAR_2);

 while ((VAR_5 = FUNC_7(&VAR_8->pdu_unack_q)) != ((void*)0)) {
  VAR_6 = FUNC_5(VAR_5);
  FUNC_3(VAR_5, VAR_1);
  FUNC_4(VAR_5, VAR_4);
  FUNC_8(&VAR_2->sk_write_queue, VAR_5);
  VAR_4 = 0;
  VAR_8->vS = FUNC_0(VAR_6);
  VAR_9++;
 }
 if (VAR_9 > 0)
  VAR_8->vS = (VAR_8->vS + 1) % VAR_0;

 FUNC_2(VAR_2);
out:;
}
