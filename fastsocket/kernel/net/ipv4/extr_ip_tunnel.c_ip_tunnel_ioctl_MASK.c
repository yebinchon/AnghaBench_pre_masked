
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int flags; int type; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int daddr; int frag_off; int ttl; } ;
struct ip_tunnel_parm {int i_flags; int o_flags; TYPE_1__ iph; int o_key; int i_key; } ;
struct ip_tunnel_net {struct net_device* fb_tunnel_dev; } ;
struct ip_tunnel {struct net_device* dev; int parms; int ip_tnl_net_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct ip_tunnel* FUNC_4 (struct net*,struct ip_tunnel_net*,struct ip_tunnel_parm*) ;
 struct ip_tunnel* FUNC_5 (struct ip_tunnel_net*,struct ip_tunnel_parm*,int ) ;
 int FUNC_6 (struct ip_tunnel_net*,struct ip_tunnel*,struct net_device*,struct ip_tunnel_parm*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ip_tunnel_parm*,int *,int) ;
 struct ip_tunnel_net* FUNC_9 (struct net*,int ) ;
 struct ip_tunnel* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

int FUNC_12(struct net_device *VAR_10, struct ip_tunnel_parm *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 struct ip_tunnel *VAR_14;
 struct net *VAR_15 = FUNC_2(VAR_10);
 struct ip_tunnel *VAR_16 = FUNC_10(VAR_10);
 struct ip_tunnel_net *VAR_17 = FUNC_9(VAR_15, VAR_16->ip_tnl_net_id);

 FUNC_0(!VAR_17->fb_tunnel_dev);
 switch (VAR_12) {
 case 128:
  VAR_14 = ((void*)0);
  if (VAR_10 == VAR_17->fb_tunnel_dev)
   VAR_14 = FUNC_5(VAR_17, VAR_11, VAR_17->fb_tunnel_dev->type);
  if (VAR_14 == ((void*)0))
   VAR_14 = FUNC_10(VAR_10);
  FUNC_8(VAR_11, &VAR_14->parms, sizeof(*VAR_11));
  break;

 case 131:
 case 130:
  VAR_13 = -VAR_5;
  if (!FUNC_1(VAR_0))
   goto done;
  if (VAR_11->iph.ttl)
   VAR_11->iph.frag_off |= FUNC_3(VAR_8);
  if (!(VAR_11->i_flags&VAR_9))
   VAR_11->i_key = 0;
  if (!(VAR_11->o_flags&VAR_9))
   VAR_11->o_key = 0;

  VAR_14 = FUNC_5(VAR_17, VAR_11, VAR_17->fb_tunnel_dev->type);

  if (!VAR_14 && (VAR_12 == 131))
   VAR_14 = FUNC_4(VAR_15, VAR_17, VAR_11);

  if (VAR_10 != VAR_17->fb_tunnel_dev && VAR_12 == 130) {
   if (VAR_14 != ((void*)0)) {
    if (VAR_14->dev != VAR_10) {
     VAR_13 = -VAR_1;
     break;
    }
   } else {
    unsigned int VAR_18 = 0;

    if (FUNC_7(VAR_11->iph.daddr))
     VAR_18 = VAR_6;
    else if (VAR_11->iph.daddr)
     VAR_18 = VAR_7;

    if ((VAR_10->flags^VAR_18)&(VAR_7|VAR_6)) {
     VAR_13 = -VAR_2;
     break;
    }

    VAR_14 = FUNC_10(VAR_10);
   }
  }

  if (VAR_14) {
   VAR_13 = 0;
   FUNC_6(VAR_17, VAR_14, VAR_10, VAR_11, 1);
  } else
   VAR_13 = (VAR_12 == 131 ? -VAR_3 : -VAR_4);
  break;

 case 129:
  VAR_13 = -VAR_5;
  if (!FUNC_1(VAR_0))
   goto done;

  if (VAR_10 == VAR_17->fb_tunnel_dev) {
   VAR_13 = -VAR_4;
   VAR_14 = FUNC_5(VAR_17, VAR_11, VAR_17->fb_tunnel_dev->type);
   if (VAR_14 == ((void*)0))
    goto done;
   VAR_13 = -VAR_5;
   if (VAR_14 == FUNC_10(VAR_17->fb_tunnel_dev))
    goto done;
   VAR_10 = VAR_14->dev;
  }
  FUNC_11(VAR_10);
  VAR_13 = 0;
  break;

 default:
  VAR_13 = -VAR_2;
 }

done:
 return VAR_13;
}
