
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ pkt_type; int len; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {int ihl; int version; int tot_len; } ;
struct inet_skb_parm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,struct sk_buff*,struct net_device*,int *,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (int ) ;

int FUNC_15(struct sk_buff *VAR_10, struct net_device *VAR_11, struct packet_type *VAR_12, struct net_device *VAR_13)
{
 struct iphdr *VAR_14;
 u32 VAR_15;




 if (VAR_10->pkt_type == VAR_7)
  goto drop;


 FUNC_2(FUNC_4(VAR_11), VAR_1, VAR_10->len);

 if ((VAR_10 = FUNC_13(VAR_10, VAR_0)) == ((void*)0)) {
  FUNC_1(FUNC_4(VAR_11), VAR_2);
  goto out;
 }

 if (!FUNC_10(VAR_10, sizeof(struct iphdr)))
  goto inhdr_error;

 VAR_14 = FUNC_6(VAR_10);
 if (VAR_14->ihl < 5 || VAR_14->version != 4)
  goto inhdr_error;

 if (!FUNC_10(VAR_10, VAR_14->ihl*4))
  goto inhdr_error;

 VAR_14 = FUNC_6(VAR_10);

 if (FUNC_14(FUNC_5((u8 *)VAR_14, VAR_14->ihl)))
  goto inhdr_error;

 VAR_15 = FUNC_9(VAR_14->tot_len);
 if (VAR_10->len < VAR_15) {
  FUNC_1(FUNC_4(VAR_11), VAR_4);
  goto drop;
 } else if (VAR_15 < (VAR_14->ihl*4))
  goto inhdr_error;





 if (FUNC_11(VAR_10, VAR_15)) {
  FUNC_1(FUNC_4(VAR_11), VAR_2);
  goto drop;
 }


 FUNC_8(FUNC_0(VAR_10), 0, sizeof(struct inet_skb_parm));


 FUNC_12(VAR_10);

 return FUNC_3(VAR_8, VAR_6, VAR_10, VAR_11, ((void*)0),
         VAR_9);

inhdr_error:
 FUNC_1(FUNC_4(VAR_11), VAR_3);
drop:
 FUNC_7(VAR_10);
out:
 return VAR_5;
}
