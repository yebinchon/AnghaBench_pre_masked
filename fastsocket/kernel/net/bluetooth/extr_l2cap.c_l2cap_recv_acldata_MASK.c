
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_hdr {int len; } ;
struct l2cap_conn {int rx_len; struct sk_buff* rx_skb; } ;
struct hci_conn {struct l2cap_conn* l2cap_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct l2cap_conn* FUNC_5 (struct hci_conn*,int ) ;
 int FUNC_6 (struct l2cap_conn*,int ) ;
 int FUNC_7 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10(struct hci_conn *VAR_4, struct sk_buff *VAR_5, u16 VAR_6)
{
 struct l2cap_conn *VAR_7 = VAR_4->l2cap_data;

 if (!VAR_7 && !(VAR_7 = FUNC_5(VAR_4, 0)))
  goto drop;

 FUNC_0("conn %p len %d flags 0x%x", VAR_7, VAR_5->len, VAR_6);

 if (VAR_6 & VAR_0) {
  struct l2cap_hdr *VAR_8;
  int VAR_9;

  if (VAR_7->rx_len) {
   FUNC_1("Unexpected start frame (len %d)", VAR_5->len);
   FUNC_4(VAR_7->rx_skb);
   VAR_7->rx_skb = ((void*)0);
   VAR_7->rx_len = 0;
   FUNC_6(VAR_7, VAR_1);
  }

  if (VAR_5->len < 2) {
   FUNC_1("Frame is too short (len %d)", VAR_5->len);
   FUNC_6(VAR_7, VAR_1);
   goto drop;
  }

  VAR_8 = (struct l2cap_hdr *) VAR_5->data;
  VAR_9 = FUNC_2(VAR_8->len) + VAR_3;

  if (VAR_9 == VAR_5->len) {

   FUNC_7(VAR_7, VAR_5);
   return 0;
  }

  FUNC_0("Start: total len %d, frag len %d", VAR_9, VAR_5->len);

  if (VAR_5->len > VAR_9) {
   FUNC_1("Frame is too long (len %d, expected len %d)",
    VAR_5->len, VAR_9);
   FUNC_6(VAR_7, VAR_1);
   goto drop;
  }


  VAR_7->rx_skb = FUNC_3(VAR_9, VAR_2);
  if (!VAR_7->rx_skb)
   goto drop;

  FUNC_8(VAR_5, FUNC_9(VAR_7->rx_skb, VAR_5->len),
        VAR_5->len);
  VAR_7->rx_len = VAR_9 - VAR_5->len;
 } else {
  FUNC_0("Cont: frag len %d (expecting %d)", VAR_5->len, VAR_7->rx_len);

  if (!VAR_7->rx_len) {
   FUNC_1("Unexpected continuation frame (len %d)", VAR_5->len);
   FUNC_6(VAR_7, VAR_1);
   goto drop;
  }

  if (VAR_5->len > VAR_7->rx_len) {
   FUNC_1("Fragment is too long (len %d, expected %d)",
     VAR_5->len, VAR_7->rx_len);
   FUNC_4(VAR_7->rx_skb);
   VAR_7->rx_skb = ((void*)0);
   VAR_7->rx_len = 0;
   FUNC_6(VAR_7, VAR_1);
   goto drop;
  }

  FUNC_8(VAR_5, FUNC_9(VAR_7->rx_skb, VAR_5->len),
        VAR_5->len);
  VAR_7->rx_len -= VAR_5->len;

  if (!VAR_7->rx_len) {

   FUNC_7(VAR_7, VAR_7->rx_skb);
   VAR_7->rx_skb = ((void*)0);
  }
 }

drop:
 FUNC_4(VAR_5);
 return 0;
}
