
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {struct sk_buff* sk_send_head; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_pinfo {int conn_state; scalar_t__ remote_max_tx; int req_seq; int next_tx_seq; scalar_t__ fcs; int unacked_frames; int conn; } ;
struct TYPE_2__ {scalar_t__ retries; int tx_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct l2cap_pinfo* FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int,scalar_t__) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_7)
{
 struct sk_buff *VAR_8, *VAR_9;
 struct l2cap_pinfo *VAR_10 = FUNC_6(VAR_7);
 u16 VAR_11, VAR_12;
 int VAR_13;

 if (VAR_10->conn_state & VAR_2)
  return 0;

 while ((VAR_8 = VAR_7->sk_send_head) && (!FUNC_8(VAR_7))
   && !(VAR_10->conn_state & VAR_1)) {
  VAR_9 = FUNC_10(VAR_8, VAR_0);

  if (VAR_10->remote_max_tx &&
    FUNC_2(VAR_8)->retries == VAR_10->remote_max_tx) {
   FUNC_7(VAR_10->conn, VAR_7);
   break;
  }

  FUNC_2(VAR_8)->retries++;

  VAR_11 = FUNC_4(VAR_9->data + VAR_6);
  VAR_11 |= (VAR_10->req_seq << VAR_3)
    | (VAR_10->next_tx_seq << VAR_4);
  FUNC_9(VAR_11, VAR_9->data + VAR_6);


  if (FUNC_6(VAR_7)->fcs == VAR_5) {
   VAR_12 = FUNC_3(0, (u8 *)VAR_8->data, VAR_9->len - 2);
   FUNC_9(VAR_12, VAR_8->data + VAR_9->len - 2);
  }

  VAR_13 = FUNC_5(VAR_7, VAR_9);
  if (VAR_13 < 0) {
   FUNC_7(VAR_10->conn, VAR_7);
   return VAR_13;
  }
  FUNC_1();

  FUNC_2(VAR_8)->tx_seq = VAR_10->next_tx_seq;
  VAR_10->next_tx_seq = (VAR_10->next_tx_seq + 1) % 64;

  VAR_10->unacked_frames++;

  if (FUNC_11(FUNC_0(VAR_7), VAR_8))
   VAR_7->sk_send_head = ((void*)0);
  else
   VAR_7->sk_send_head = FUNC_12(FUNC_0(VAR_7), VAR_8);
 }

 return 0;
}
