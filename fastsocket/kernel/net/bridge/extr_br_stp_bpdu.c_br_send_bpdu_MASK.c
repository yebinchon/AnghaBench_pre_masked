
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; int protocol; } ;
struct net_bridge_port {TYPE_1__* br; TYPE_2__* dev; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int group_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int *,TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,unsigned char const*,int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct net_bridge_port *VAR_8,
    const unsigned char *VAR_9, int VAR_10)
{
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_2(VAR_10+VAR_3);
 if (!VAR_11)
  return;

 VAR_11->dev = VAR_8->dev;
 VAR_11->protocol = FUNC_3(VAR_0);

 FUNC_8(VAR_11, VAR_3);
 FUNC_7(FUNC_1(VAR_11, VAR_10), VAR_9, VAR_10);

 FUNC_5(VAR_11, VAR_2, VAR_4,
       VAR_4, VAR_1);
 FUNC_6(VAR_11);

 FUNC_4(VAR_11, VAR_8->dev->dev_addr, VAR_8->br->group_addr);

 FUNC_0(VAR_6, VAR_5, VAR_11, ((void*)0), VAR_11->dev,
  VAR_7);
}
