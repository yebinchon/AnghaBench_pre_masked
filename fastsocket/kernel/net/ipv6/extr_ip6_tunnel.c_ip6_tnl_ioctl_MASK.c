
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip6_tnl_parm {int proto; } ;
struct ip6_tnl_net {struct net_device* fb_tnl_dev; } ;
struct ip6_tnl {struct net_device* dev; struct ip6_tnl_parm parms; } ;
struct TYPE_2__ {int ifru_data; } ;
struct ifreq {TYPE_1__ ifr_ifru; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct ip6_tnl_parm*,int ,int) ;
 int FUNC_2 (int ,struct ip6_tnl_parm*,int) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ip6_tnl*,struct ip6_tnl_parm*) ;
 int FUNC_5 (struct ip6_tnl_net*,struct ip6_tnl*) ;
 struct ip6_tnl* FUNC_6 (struct net*,struct ip6_tnl_parm*,int) ;
 int VAR_9 ;
 int FUNC_7 (struct ip6_tnl_net*,struct ip6_tnl*) ;
 int FUNC_8 (struct ip6_tnl_parm*,struct ip6_tnl_parm*,int) ;
 struct ip6_tnl_net* FUNC_9 (struct net*,int ) ;
 struct ip6_tnl* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_10, struct ifreq *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 struct ip6_tnl_parm VAR_14;
 struct ip6_tnl *VAR_15 = ((void*)0);
 struct net *VAR_16 = FUNC_3(VAR_10);
 struct ip6_tnl_net *VAR_17 = FUNC_9(VAR_16, VAR_9);

 switch (VAR_12) {
 case 128:
  if (VAR_10 == VAR_17->fb_tnl_dev) {
   if (FUNC_1(&VAR_14, VAR_11->ifr_ifru.ifru_data, sizeof (VAR_14))) {
    VAR_13 = -VAR_2;
    break;
   }
   VAR_15 = FUNC_6(VAR_16, &VAR_14, 0);
  }
  if (VAR_15 == ((void*)0))
   VAR_15 = FUNC_10(VAR_10);
  FUNC_8(&VAR_14, &VAR_15->parms, sizeof (VAR_14));
  if (FUNC_2(VAR_11->ifr_ifru.ifru_data, &VAR_14, sizeof (VAR_14))) {
   VAR_13 = -VAR_2;
  }
  break;
 case 131:
 case 130:
  VAR_13 = -VAR_6;
  if (!FUNC_0(VAR_0))
   break;
  VAR_13 = -VAR_2;
  if (FUNC_1(&VAR_14, VAR_11->ifr_ifru.ifru_data, sizeof (VAR_14)))
   break;
  VAR_13 = -VAR_3;
  if (VAR_14.proto != VAR_8 && VAR_14.proto != VAR_7 &&
      VAR_14.proto != 0)
   break;
  VAR_15 = FUNC_6(VAR_16, &VAR_14, VAR_12 == 131);
  if (VAR_10 != VAR_17->fb_tnl_dev && VAR_12 == 130) {
   if (VAR_15 != ((void*)0)) {
    if (VAR_15->dev != VAR_10) {
     VAR_13 = -VAR_1;
     break;
    }
   } else
    VAR_15 = FUNC_10(VAR_10);

   FUNC_7(VAR_17, VAR_15);
   VAR_13 = FUNC_4(VAR_15, &VAR_14);
   FUNC_5(VAR_17, VAR_15);
   FUNC_11(VAR_10);
  }
  if (VAR_15) {
   VAR_13 = 0;
   if (FUNC_2(VAR_11->ifr_ifru.ifru_data, &VAR_15->parms, sizeof (VAR_14)))
    VAR_13 = -VAR_2;

  } else
   VAR_13 = (VAR_12 == 131 ? -VAR_4 : -VAR_5);
  break;
 case 129:
  VAR_13 = -VAR_6;
  if (!FUNC_0(VAR_0))
   break;

  if (VAR_10 == VAR_17->fb_tnl_dev) {
   VAR_13 = -VAR_2;
   if (FUNC_1(&VAR_14, VAR_11->ifr_ifru.ifru_data, sizeof (VAR_14)))
    break;
   VAR_13 = -VAR_5;
   if ((VAR_15 = FUNC_6(VAR_16, &VAR_14, 0)) == ((void*)0))
    break;
   VAR_13 = -VAR_6;
   if (VAR_15->dev == VAR_17->fb_tnl_dev)
    break;
   VAR_10 = VAR_15->dev;
  }
  VAR_13 = 0;
  FUNC_12(VAR_10);
  break;
 default:
  VAR_13 = -VAR_3;
 }
 return VAR_13;
}
