
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; scalar_t__ vlan_tci; scalar_t__ protocol; scalar_t__ data; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct sk_buff *VAR_5, int VAR_6, __be16 VAR_7)
{
 if (FUNC_9(!FUNC_4(VAR_5, VAR_6)))
  return -VAR_0;

 FUNC_7(VAR_5, VAR_6);

 if (VAR_7 == FUNC_0(VAR_3)) {
  struct ethhdr *VAR_8 = (struct ethhdr *)VAR_5->data;

  if (FUNC_9(!FUNC_4(VAR_5, VAR_1)))
   return -VAR_0;

  if (FUNC_1(FUNC_3(VAR_8->h_proto) >= 1536))
   VAR_5->protocol = VAR_8->h_proto;
  else
   VAR_5->protocol = FUNC_0(VAR_2);

 } else {
  VAR_5->protocol = VAR_7;
 }

 FUNC_2(VAR_5);
 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 VAR_5->vlan_tci = 0;
 FUNC_8(VAR_5, 0);
 VAR_5->pkt_type = VAR_4;
 return 0;
}
