
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; struct net_device* dev; struct nf_bridge_info* nf_bridge; } ;
struct nf_bridge_info {struct net_device* physindev; int mask; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct net_device* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device *FUNC_1(struct sk_buff *VAR_4)
{
 struct nf_bridge_info *VAR_5 = VAR_4->nf_bridge;

 if (VAR_4->pkt_type == VAR_3) {
  VAR_4->pkt_type = VAR_2;
  VAR_5->mask |= VAR_1;
 }

 VAR_5->mask |= VAR_0;
 VAR_5->physindev = VAR_4->dev;
 VAR_4->dev = FUNC_0(VAR_4->dev);

 return VAR_4->dev;
}
