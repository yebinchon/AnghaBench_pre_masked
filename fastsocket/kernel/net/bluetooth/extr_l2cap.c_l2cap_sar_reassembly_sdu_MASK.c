
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct l2cap_pinfo {int conn_state; struct sk_buff* sdu; int sdu_len; int partial_sdu_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct l2cap_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_5, struct sk_buff *VAR_6, u16 VAR_7)
{
 struct l2cap_pinfo *VAR_8 = FUNC_3(VAR_5);
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_0;

 switch (VAR_7 & VAR_4) {
 case 128:
  if (VAR_8->conn_state & VAR_3) {
   FUNC_2(VAR_8->sdu);
   break;
  }

  VAR_10 = FUNC_8(VAR_5, VAR_6);
  if (!VAR_10)
   return 0;

  break;

 case 129:
  if (VAR_8->conn_state & VAR_3) {
   FUNC_2(VAR_8->sdu);
   break;
  }

  VAR_8->sdu_len = FUNC_1(VAR_6->data);
  FUNC_6(VAR_6, 2);

  VAR_8->sdu = FUNC_0(VAR_8->sdu_len, VAR_2);
  if (!VAR_8->sdu) {
   VAR_10 = -VAR_1;
   break;
  }

  FUNC_4(FUNC_7(VAR_8->sdu, VAR_6->len), VAR_6->data, VAR_6->len);

  VAR_8->conn_state |= VAR_3;
  VAR_8->partial_sdu_len = VAR_6->len;
  VAR_10 = 0;
  break;

 case 131:
  if (!(VAR_8->conn_state & VAR_3))
   break;

  FUNC_4(FUNC_7(VAR_8->sdu, VAR_6->len), VAR_6->data, VAR_6->len);

  VAR_8->partial_sdu_len += VAR_6->len;
  if (VAR_8->partial_sdu_len > VAR_8->sdu_len)
   FUNC_2(VAR_8->sdu);
  else
   VAR_10 = 0;

  break;

 case 130:
  if (!(VAR_8->conn_state & VAR_3))
   break;

  FUNC_4(FUNC_7(VAR_8->sdu, VAR_6->len), VAR_6->data, VAR_6->len);

  VAR_8->conn_state &= ~VAR_3;
  VAR_8->partial_sdu_len += VAR_6->len;

  if (VAR_8->partial_sdu_len == VAR_8->sdu_len) {
   VAR_9 = FUNC_5(VAR_8->sdu, VAR_2);
   VAR_10 = FUNC_8(VAR_5, VAR_9);
   if (VAR_10 < 0)
    FUNC_2(VAR_9);
  }
  FUNC_2(VAR_8->sdu);
  VAR_10 = 0;

  break;
 }

 FUNC_2(VAR_6);
 return VAR_10;
}
