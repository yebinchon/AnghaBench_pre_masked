
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
struct net_device_ops {int (* ndo_set_mac_address ) (struct net_device*,struct sockaddr*) ;} ;
struct net_device {scalar_t__ type; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct sockaddr*) ;

int FUNC_3(struct net_device *VAR_4, struct sockaddr *VAR_5)
{
 const struct net_device_ops *VAR_6 = VAR_4->netdev_ops;
 int VAR_7;

 if (!VAR_6->ndo_set_mac_address)
  return -VAR_2;
 if (VAR_5->sa_family != VAR_4->type)
  return -VAR_0;
 if (!FUNC_1(VAR_4))
  return -VAR_1;
 VAR_7 = VAR_6->ndo_set_mac_address(VAR_4, VAR_5);
 if (!VAR_7)
  FUNC_0(VAR_3, VAR_4);
 return VAR_7;
}
