
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int len; int data; } ;
struct l2cap_pinfo {int mode; int imtu; int expected_tx_seq; int fcs; } ;
struct l2cap_conn {int chan_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct l2cap_pinfo*,struct sk_buff*) ;
 int FUNC_9 (struct sock*,int,struct sk_buff*) ;
 int FUNC_10 (struct sock*,int,struct sk_buff*) ;
 struct sock* FUNC_11 (int *,int) ;
 struct l2cap_pinfo* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_16(struct l2cap_conn *VAR_3, u16 VAR_4, struct sk_buff *VAR_5)
{
 struct sock *VAR_6;
 struct l2cap_pinfo *VAR_7;
 u16 VAR_8, VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_6 = FUNC_11(&VAR_3->chan_list, VAR_4);
 if (!VAR_6) {
  FUNC_0("unknown cid 0x%4.4x", VAR_4);
  goto drop;
 }

 VAR_7 = FUNC_12(VAR_6);

 FUNC_0("sk %p, len %d", VAR_6, VAR_5->len);

 if (VAR_6->sk_state != VAR_0)
  goto drop;

 switch (VAR_7->mode) {
 case 130:





  if (VAR_7->imtu < VAR_5->len)
   goto drop;

  if (!FUNC_15(VAR_6, VAR_5))
   goto done;
  break;

 case 129:
  VAR_8 = FUNC_6(VAR_5->data);
  FUNC_14(VAR_5, 2);
  VAR_9 = VAR_5->len;

  if (FUNC_3(VAR_8))
   VAR_9 -= 2;

  if (VAR_7->fcs == VAR_2)
   VAR_9 -= 2;






  if (VAR_9 > VAR_1)
   goto drop;

  if (FUNC_8(VAR_7, VAR_5))
   goto drop;

  if (FUNC_2(VAR_8))
   VAR_11 = FUNC_9(VAR_6, VAR_8, VAR_5);
  else
   VAR_11 = FUNC_10(VAR_6, VAR_8, VAR_5);

  if (!VAR_11)
   goto done;
  break;

 case 128:
  VAR_8 = FUNC_6(VAR_5->data);
  FUNC_14(VAR_5, 2);
  VAR_9 = VAR_5->len;

  if (FUNC_3(VAR_8))
   VAR_9 -= 2;

  if (VAR_7->fcs == VAR_2)
   VAR_9 -= 2;

  if (VAR_9 > VAR_1 || FUNC_4(VAR_8))
   goto drop;

  if (FUNC_8(VAR_7, VAR_5))
   goto drop;

  VAR_10 = FUNC_1(VAR_8);

  if (VAR_7->expected_tx_seq == VAR_10)
   VAR_7->expected_tx_seq = (VAR_7->expected_tx_seq + 1) % 64;
  else
   VAR_7->expected_tx_seq = VAR_10 + 1;

  VAR_11 = FUNC_13(VAR_6, VAR_5, VAR_8);

  goto done;

 default:
  FUNC_0("sk %p: bad mode 0x%2.2x", VAR_6, FUNC_12(VAR_6)->mode);
  break;
 }

drop:
 FUNC_7(VAR_5);

done:
 if (VAR_6)
  FUNC_5(VAR_6);

 return 0;
}
