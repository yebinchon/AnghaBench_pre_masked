
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ttl; int tos; int frag_off; int daddr; int saddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; int o_key; int i_key; int o_flags; int i_flags; int link; } ;
struct ip_tunnel {struct ip_tunnel_parm parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 struct ip_tunnel* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_12, const struct net_device *VAR_13)
{
 struct ip_tunnel *VAR_14 = FUNC_1(VAR_13);
 struct ip_tunnel_parm *VAR_15 = &VAR_14->parms;

 if (FUNC_4(VAR_12, VAR_3, VAR_15->link) ||
     FUNC_2(VAR_12, VAR_1, FUNC_6(VAR_15->i_flags)) ||
     FUNC_2(VAR_12, VAR_5, FUNC_6(VAR_15->o_flags)) ||
     FUNC_3(VAR_12, VAR_2, VAR_15->i_key) ||
     FUNC_3(VAR_12, VAR_6, VAR_15->o_key) ||
     FUNC_3(VAR_12, VAR_4, VAR_15->iph.saddr) ||
     FUNC_3(VAR_12, VAR_8, VAR_15->iph.daddr) ||
     FUNC_5(VAR_12, VAR_10, VAR_15->iph.ttl) ||
     FUNC_5(VAR_12, VAR_9, VAR_15->iph.tos) ||
     FUNC_5(VAR_12, VAR_7,
         !!(VAR_15->iph.frag_off & FUNC_0(VAR_11))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -VAR_0;
}
