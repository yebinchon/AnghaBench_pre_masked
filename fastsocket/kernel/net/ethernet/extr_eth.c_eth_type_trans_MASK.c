
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int pkt_type; struct net_device* dev; } ;
struct net_device {int dev_addr; int broadcast; } ;
struct ethhdr {int h_proto; int h_dest; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 struct ethhdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;

__be16 FUNC_10(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct ethhdr *VAR_10;
 unsigned char *VAR_11;

 VAR_8->dev = VAR_9;
 FUNC_8(VAR_8);
 FUNC_7(VAR_8, VAR_0);
 VAR_10 = FUNC_1(VAR_8);

 if (FUNC_9(FUNC_3(VAR_10->h_dest))) {
  if (!FUNC_0(VAR_10->h_dest, VAR_9->broadcast))
   VAR_8->pkt_type = VAR_5;
  else
   VAR_8->pkt_type = VAR_6;
 }
 else if (1 ) {
  if (FUNC_9(FUNC_0(VAR_10->h_dest, VAR_9->dev_addr)))
   VAR_8->pkt_type = VAR_7;
 }







 if (FUNC_4(VAR_9))
  return FUNC_2(VAR_3);
 if (FUNC_5(VAR_9))
  return FUNC_2(VAR_4);

 if (FUNC_6(VAR_10->h_proto) >= 1536)
  return VAR_10->h_proto;

 VAR_11 = VAR_8->data;







 if (*(unsigned short *)VAR_11 == 0xFFFF)
  return FUNC_2(VAR_2);




 return FUNC_2(VAR_1);
}
