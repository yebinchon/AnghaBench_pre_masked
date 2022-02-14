
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int pdu_unack_q; TYPE_1__* dev; } ;
struct llc_pdu_sn {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (int,int,int) ;
 struct llc_pdu_sn* FUNC_2 (struct sk_buff*) ;
 struct llc_sock* FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static u16 FUNC_7(struct sock *VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;
 struct sk_buff *VAR_6;
 struct llc_pdu_sn *VAR_7;
 struct llc_sock *VAR_8 = FUNC_3(VAR_2);
 int VAR_9 = 0;

 if (VAR_8->dev->flags & VAR_0)
  goto out;
 VAR_9 = 1;
 if (FUNC_6(&VAR_8->pdu_unack_q))
  goto out;
 VAR_6 = FUNC_4(&VAR_8->pdu_unack_q);
 VAR_7 = FUNC_2(VAR_6);
 VAR_4 = FUNC_0(VAR_7);
 VAR_6 = FUNC_5(&VAR_8->pdu_unack_q);
 VAR_7 = FUNC_2(VAR_6);
 VAR_5 = FUNC_0(VAR_7);
 VAR_9 = !FUNC_1(VAR_4, VAR_3, (VAR_5 + 1) % VAR_1);
out:
 return VAR_9;
}
