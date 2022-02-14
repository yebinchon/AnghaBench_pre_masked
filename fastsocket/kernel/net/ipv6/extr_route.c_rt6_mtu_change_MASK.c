
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_mtu_change_arg {unsigned int mtu; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ,struct rt6_mtu_change_arg*) ;
 int VAR_0 ;

void FUNC_2(struct net_device *VAR_1, unsigned VAR_2)
{
 struct rt6_mtu_change_arg VAR_3 = {
  .dev = VAR_1,
  .mtu = VAR_2,
 };

 FUNC_1(FUNC_0(VAR_1), VAR_0, 0, &VAR_3);
}
