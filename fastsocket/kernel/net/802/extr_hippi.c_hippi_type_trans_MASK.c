
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ethertype; } ;
struct hippi_hdr {TYPE_1__ snap; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__be16 FUNC_3(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct hippi_hdr *VAR_3;





 VAR_1->dev = VAR_2;
 FUNC_2(VAR_1);
 VAR_3 = (struct hippi_hdr *)FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);





 return VAR_3->snap.ethertype;
}
