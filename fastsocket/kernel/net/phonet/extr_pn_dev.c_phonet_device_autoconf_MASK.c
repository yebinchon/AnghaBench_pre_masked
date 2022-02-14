
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct ifreq {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct if_phonet_req {TYPE_2__ ifr_phonet_autoconf; } ;
struct TYPE_3__ {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ,struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,struct ifreq*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct if_phonet_req VAR_4;
 int VAR_5;

 if (!VAR_3->netdev_ops->ndo_do_ioctl)
  return -VAR_0;

 VAR_5 = VAR_3->netdev_ops->ndo_do_ioctl(VAR_3, (struct ifreq *)&VAR_4,
      VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0();
 VAR_5 = FUNC_1(VAR_3, VAR_4.ifr_phonet_autoconf.device);
 if (VAR_5)
  return VAR_5;
 FUNC_2(VAR_1, VAR_3,
    VAR_4.ifr_phonet_autoconf.device);
 return 0;
}
