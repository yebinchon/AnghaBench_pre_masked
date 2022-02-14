
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* wext_ioctl_func ) (struct net_device*,struct iwreq*,unsigned int,struct iw_request_info*,int *) ;
struct net_device {TYPE_1__* netdev_ops; scalar_t__ wireless_handlers; } ;
struct net {int dummy; } ;
struct iwreq {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ifreq {int ifr_name; } ;
typedef int * iw_handler ;
struct TYPE_2__ {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int * FUNC_1 (struct net_device*,unsigned int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct ifreq*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_7, struct ifreq *VAR_8,
      unsigned int VAR_9,
      struct iw_request_info *VAR_10,
      wext_ioctl_func VAR_11,
      wext_ioctl_func VAR_12)
{
 struct iwreq *VAR_13 = (struct iwreq *) VAR_8;
 struct net_device *VAR_14;
 iw_handler VAR_15;





 if ((VAR_14 = FUNC_0(VAR_7, VAR_8->ifr_name)) == ((void*)0))
  return -VAR_0;




 if (VAR_9 == VAR_3)
  return VAR_11(VAR_14, VAR_13, VAR_9, VAR_10,
    &VAR_5);
 if (!FUNC_2(VAR_14))
  return -VAR_0;


 VAR_15 = FUNC_1(VAR_14, VAR_9);
 if (VAR_15) {

  if (VAR_9 < VAR_4)
   return VAR_11(VAR_14, VAR_13, VAR_9, VAR_10, VAR_15);
  else if (VAR_12)
   return VAR_12(VAR_14, VAR_13, VAR_9, VAR_10, VAR_15);
 }

 if (VAR_14->netdev_ops->ndo_do_ioctl)
  return VAR_14->netdev_ops->ndo_do_ioctl(VAR_14, VAR_8, VAR_9);
 return -VAR_1;
}
