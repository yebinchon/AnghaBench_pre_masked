
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; scalar_t__ len; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {struct net_device* brdev; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct sk_buff*,struct net_device*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3)
{
 struct net_device *VAR_4, *VAR_5 = FUNC_0(VAR_3)->brdev;

 VAR_5->stats.rx_packets++;
 VAR_5->stats.rx_bytes += VAR_3->len;

 VAR_4 = VAR_3->dev;
 VAR_3->dev = VAR_5;

 return FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4, ((void*)0),
         VAR_2);
}
