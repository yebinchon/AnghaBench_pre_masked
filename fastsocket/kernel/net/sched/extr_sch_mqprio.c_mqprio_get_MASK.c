
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {unsigned int num_tx_queues; } ;
struct Qdisc {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_3(struct Qdisc *VAR_0, u32 VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 > VAR_2->num_tx_queues + FUNC_1(VAR_2))
  return 0;
 return VAR_3;
}
