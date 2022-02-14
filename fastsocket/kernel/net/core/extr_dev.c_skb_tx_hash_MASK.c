
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int real_num_tx_queues; } ;


 int FUNC_0 (struct net_device const*,struct sk_buff const*,int ) ;

u16 FUNC_1(const struct net_device *VAR_0, const struct sk_buff *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_0->real_num_tx_queues);
}
