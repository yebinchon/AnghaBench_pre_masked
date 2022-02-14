
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s_node; int s_net; } ;
struct sockaddr_at {TYPE_2__ sat_addr; } ;
struct net_device_ops {int (* ndo_do_ioctl ) (TYPE_3__*,struct ifreq*,int ) ;} ;
struct ifreq {int ifr_addr; } ;
struct TYPE_5__ {scalar_t__ s_node; scalar_t__ s_net; } ;
struct atalk_iface {TYPE_1__ address; int status; TYPE_3__* dev; } ;
struct TYPE_7__ {struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,struct ifreq*,int ) ;
 int FUNC_3 (TYPE_3__*,struct ifreq*,int ) ;

__attribute__((used)) static void FUNC_4(struct atalk_iface *VAR_3)
{
 struct ifreq VAR_4;
 struct sockaddr_at *VAR_5 = (struct sockaddr_at *)&VAR_4.ifr_addr;
 const struct net_device_ops *VAR_6 = VAR_3->dev->netdev_ops;

 VAR_5->sat_addr.s_node = VAR_3->address.s_node;
 VAR_5->sat_addr.s_net = FUNC_1(VAR_3->address.s_net);


 if (!(VAR_6->ndo_do_ioctl(VAR_3->dev, &VAR_4, VAR_2))) {
  VAR_6->ndo_do_ioctl(VAR_3->dev, &VAR_4, VAR_1);
  if (VAR_3->address.s_net != FUNC_0(VAR_5->sat_addr.s_net) ||
      VAR_3->address.s_node != VAR_5->sat_addr.s_node)
   VAR_3->status |= VAR_0;

  VAR_3->address.s_net = FUNC_0(VAR_5->sat_addr.s_net);
  VAR_3->address.s_node = VAR_5->sat_addr.s_node;
 }
}
