
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct net_bridge_port {int dummy; } ;
struct TYPE_4__ {struct net_device* brdev; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_2(const struct net_bridge_port *VAR_2,
    struct sk_buff *VAR_3,
    void (*VAR_4)(const struct net_bridge_port *VAR_5,
            struct sk_buff *VAR_6))
{
 struct net_device *VAR_7 = FUNC_0(VAR_3)->brdev;

 VAR_3 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_3) {
  VAR_7->stats.tx_dropped++;
  return -VAR_0;
 }

 VAR_4(VAR_2, VAR_3);
 return 0;
}
