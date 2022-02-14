
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int dummy; } ;
struct ifreq {int ifr_ifindex; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_bridge*,int ,int) ;
 struct net_bridge* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ifreq*,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct net_bridge *VAR_4 = FUNC_1(VAR_1);

 switch(VAR_3) {
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);

 case 130:
 case 129:
  return FUNC_0(VAR_4, VAR_2->ifr_ifindex, VAR_3 == 130);

 }

 FUNC_3("Bridge does not support ioctl 0x%x\n", VAR_3);
 return -VAR_0;
}
