
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int transport_header; } ;
struct inet6_skb_parm {int dst1; int nhoff; int lastopt; } ;
struct dst_entry {int dev; } ;
typedef int __u16 ;


 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct dst_entry* FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 scalar_t__ FUNC_6 (int ,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 struct dst_entry* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_2)
{
 struct inet6_skb_parm *VAR_3 = FUNC_0(VAR_2);



 struct dst_entry *VAR_4;

 if (!FUNC_8(VAR_2, FUNC_12(VAR_2) + 8) ||
     !FUNC_8(VAR_2, (FUNC_12(VAR_2) +
     ((FUNC_11(VAR_2)[1] + 1) << 3)))) {
  FUNC_1(FUNC_2(FUNC_9(VAR_2)->dev), FUNC_5(FUNC_9(VAR_2)),
     VAR_0);
  FUNC_7(VAR_2);
  return -1;
 }

 VAR_3->lastopt = VAR_3->dst1 = FUNC_10(VAR_2);




 VAR_4 = FUNC_3(FUNC_9(VAR_2));
 if (FUNC_6(VAR_1, VAR_2)) {
  FUNC_4(VAR_4);
  VAR_2->transport_header += (FUNC_11(VAR_2)[1] + 1) << 3;
  VAR_3 = FUNC_0(VAR_2);



  VAR_3->nhoff = VAR_3->dst1;

  return 1;
 }

 FUNC_1(FUNC_2(VAR_4->dev),
    FUNC_5(VAR_4), VAR_0);
 FUNC_4(VAR_4);
 return -1;
}
