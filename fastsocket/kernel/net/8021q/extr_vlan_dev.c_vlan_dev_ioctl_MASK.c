
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_ops {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,int) ;} ;
struct net_device {int name; struct net_device_ops* netdev_ops; } ;
struct ifreq {int ifr_ifru; int ifr_name; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net_device*,struct ifreq*,int) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = FUNC_3(VAR_2)->real_dev;
 const struct net_device_ops *VAR_6 = VAR_5->netdev_ops;
 struct ifreq VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_1(VAR_7.ifr_name, VAR_5->name, VAR_1);
 VAR_7.ifr_ifru = VAR_3->ifr_ifru;

 switch (VAR_4) {
 case 130:
 case 129:
 case 128:
  if (FUNC_0(VAR_5) && VAR_6->ndo_do_ioctl)
   VAR_8 = VAR_6->ndo_do_ioctl(VAR_5, &VAR_7, VAR_4);
  break;
 }

 if (!VAR_8)
  VAR_3->ifr_ifru = VAR_7.ifr_ifru;

 return VAR_8;
}
