
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_5__ {int sysctl_icmp_echo_ignore_all; } ;
struct net {TYPE_1__ ipv4; } ;
struct icmphdr {int dummy; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_6__ {TYPE_4__ icmph; } ;
struct icmp_bxm {int head_len; int data_len; scalar_t__ offset; struct sk_buff* skb; TYPE_2__ data; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct icmp_bxm*,struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 struct net *VAR_2;

 VAR_2 = FUNC_0(FUNC_3(VAR_1)->dev);
 if (!VAR_2->ipv4.sysctl_icmp_echo_ignore_all) {
  struct icmp_bxm VAR_3;

  VAR_3.data.icmph = *FUNC_1(VAR_1);
  VAR_3.data.icmph.type = VAR_0;
  VAR_3.skb = VAR_1;
  VAR_3.offset = 0;
  VAR_3.data_len = VAR_1->len;
  VAR_3.head_len = sizeof(struct icmphdr);
  FUNC_2(&VAR_3, VAR_1);
 }
}
