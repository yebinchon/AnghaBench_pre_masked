
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; int features; scalar_t__ needed_headroom; } ;
struct iphdr {int dummy; } ;
struct TYPE_3__ {int protocol; } ;
struct TYPE_4__ {int o_flags; TYPE_1__ iph; } ;
struct ip_tunnel {TYPE_2__ parms; int hlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_9)
{
 struct ip_tunnel *VAR_10;

 VAR_10 = FUNC_2(VAR_9);
 VAR_10->hlen = FUNC_1(VAR_10->parms.o_flags);
 VAR_10->parms.iph.protocol = VAR_2;

 VAR_9->needed_headroom = VAR_3 + sizeof(struct iphdr) + 4;
 VAR_9->mtu = VAR_0 - sizeof(struct iphdr) - 4;

 VAR_9->features |= VAR_6 | VAR_1;

 if (!(VAR_10->parms.o_flags & VAR_7)) {

  VAR_9->features |= VAR_4;



  VAR_9->features |= VAR_5;
 }
 FUNC_0(VAR_9, &VAR_8);
}
