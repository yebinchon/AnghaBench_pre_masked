
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {struct sk_buff* sk_send_head; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_pinfo {int next_tx_seq; scalar_t__ fcs; int conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct l2cap_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (int,scalar_t__) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6;
 struct l2cap_pinfo *VAR_7 = FUNC_5(VAR_4);
 u16 VAR_8, VAR_9;
 int VAR_10;

 while ((VAR_5 = VAR_4->sk_send_head)) {
  VAR_6 = FUNC_8(VAR_5, VAR_0);

  VAR_8 = FUNC_2(VAR_6->data + VAR_3);
  VAR_8 |= VAR_7->next_tx_seq << VAR_1;
  FUNC_7(VAR_8, VAR_6->data + VAR_3);

  if (FUNC_5(VAR_4)->fcs == VAR_2) {
   VAR_9 = FUNC_1(0, (u8 *)VAR_6->data, VAR_6->len - 2);
   FUNC_7(VAR_9, VAR_6->data + VAR_6->len - 2);
  }

  VAR_10 = FUNC_4(VAR_4, VAR_6);
  if (VAR_10 < 0) {
   FUNC_6(VAR_7->conn, VAR_4);
   return VAR_10;
  }

  VAR_7->next_tx_seq = (VAR_7->next_tx_seq + 1) % 64;

  if (FUNC_10(FUNC_0(VAR_4), VAR_5))
   VAR_4->sk_send_head = ((void*)0);
  else
   VAR_4->sk_send_head = FUNC_11(FUNC_0(VAR_4), VAR_5);

  VAR_5 = FUNC_9(FUNC_0(VAR_4));
  FUNC_3(VAR_5);
 }
 return 0;
}
