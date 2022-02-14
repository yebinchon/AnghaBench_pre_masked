
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tnl_ptk_info {scalar_t__ proto; int key; int flags; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct ip_tunnel {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_3 (struct ip_tunnel_net*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct ip_tunnel*,struct sk_buff*,struct tnl_ptk_info const*,int) ;
 int VAR_4 ;
 struct ip_tunnel_net* FUNC_5 (struct net*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, const struct tnl_ptk_info *VAR_6)
{
 struct net *VAR_7 = FUNC_0(VAR_5->dev);
 struct ip_tunnel_net *VAR_8;
 const struct iphdr *VAR_9;
 struct ip_tunnel *VAR_10;

 if (VAR_6->proto == FUNC_1(VAR_0))
  VAR_8 = FUNC_5(VAR_7, VAR_3);
 else
  VAR_8 = FUNC_5(VAR_7, VAR_4);

 VAR_9 = FUNC_2(VAR_5);
 VAR_10 = FUNC_3(VAR_8, VAR_5->dev->ifindex, VAR_6->flags,
      VAR_9->saddr, VAR_9->daddr, VAR_6->key);

 if (VAR_10) {
  FUNC_4(VAR_10, VAR_5, VAR_6, 0);
  return VAR_1;
 }
 return VAR_2;
}
