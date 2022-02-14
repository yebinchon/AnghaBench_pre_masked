
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {int dummy; } ;
struct sk_buff {int len; int protocol; int pkt_type; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 TYPE_1__* FUNC_2 (struct vport*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct vport *VAR_2, struct sk_buff *VAR_3)
{
 struct net_device *VAR_4 = FUNC_2(VAR_2)->dev;
 int VAR_5;

 VAR_5 = VAR_3->len;

 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);

 VAR_3->dev = VAR_4;
 VAR_3->pkt_type = VAR_1;
 VAR_3->protocol = FUNC_1(VAR_3, VAR_4);
 FUNC_7(VAR_3, FUNC_0(VAR_3), VAR_0);

 FUNC_3(VAR_3);

 return VAR_5;
}
