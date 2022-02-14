
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; int dev; scalar_t__ cb; int pkt_type; struct nf_bridge_info* nf_bridge; } ;
struct nf_bridge_info {int mask; struct net_device* physindev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct sk_buff*,struct net_device*,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_6)
{
 struct nf_bridge_info *VAR_7 = VAR_6->nf_bridge;
 struct net_device *VAR_8;

 if (VAR_6->protocol != FUNC_2(VAR_1) && !FUNC_0(VAR_6)) {
  VAR_8 = VAR_7->physindev;
  if (VAR_7->mask & VAR_0) {
   VAR_6->pkt_type = VAR_3;
   VAR_7->mask ^= VAR_0;
  }
 } else {
  VAR_8 = *((struct net_device **)(VAR_6->cb));
 }
 FUNC_3(VAR_6);
 FUNC_1(VAR_4, VAR_2, VAR_6, VAR_8,
         VAR_6->dev, VAR_5, 1);
 return 0;
}
