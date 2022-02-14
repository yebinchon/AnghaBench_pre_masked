
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int data; int dev; int len; } ;
struct ipv6hdr {scalar_t__ nexthdr; int daddr; } ;
struct inet6_skb_parm {int flags; int ra; } ;
struct icmp6hdr {int icmp6_type; } ;
struct TYPE_8__ {TYPE_1__* devconf_all; } ;
struct TYPE_10__ {TYPE_2__ ipv6; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {scalar_t__ mc_forwarding; } ;


 int VAR_0 ;




 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (scalar_t__) ;
 struct ipv6hdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int,scalar_t__*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct sk_buff*,scalar_t__*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 scalar_t__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(struct sk_buff *VAR_5)
{
 struct ipv6hdr *VAR_6;
 int VAR_7;

 FUNC_1(FUNC_2(FUNC_15(VAR_5)->dev),
    FUNC_3(FUNC_15(VAR_5)), VAR_3,
    VAR_5->len);

 VAR_6 = FUNC_9(VAR_5);
 VAR_7 = FUNC_7(VAR_5->dev, &VAR_6->daddr, ((void*)0));
 if (FUNC_12(VAR_7))
  FUNC_4(VAR_5);
 else {

  FUNC_11(VAR_5);
 }

 return 0;
}
