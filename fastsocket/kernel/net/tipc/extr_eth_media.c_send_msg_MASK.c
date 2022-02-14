
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eth_addr; } ;
struct tipc_media_addr {TYPE_1__ dev_addr; } ;
struct tipc_bearer {scalar_t__ usr_handle; } ;
struct sk_buff {int len; struct net_device* dev; } ;
struct net_device {int dev_addr; } ;
struct eth_bearer {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ,int *,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct tipc_bearer *VAR_3,
      struct tipc_media_addr *VAR_4)
{
 struct sk_buff *VAR_5;
 struct net_device *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (VAR_5) {
  FUNC_3(VAR_5);
  VAR_6 = ((struct eth_bearer *)(VAR_3->usr_handle))->dev;
  VAR_5->dev = VAR_6;
  FUNC_0(VAR_5, VAR_6, VAR_0,
     &VAR_4->dev_addr.eth_addr,
     VAR_6->dev_addr, VAR_5->len);
  FUNC_1(VAR_5);
 }
 return 0;
}
