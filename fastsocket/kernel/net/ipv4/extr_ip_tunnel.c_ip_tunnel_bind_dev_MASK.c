
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct net_device* dev; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;
struct net_device {scalar_t__ type; int hard_header_len; int needed_headroom; int mtu; scalar_t__ iflink; int flags; } ;
struct iphdr {int tos; int saddr; scalar_t__ daddr; int protocol; } ;
struct TYPE_6__ {scalar_t__ link; int o_key; struct iphdr iph; } ;
struct ip_tunnel {int hlen; TYPE_3__ parms; } ;
struct flowi {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtable*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 struct rtable* FUNC_4 (int ,struct flowi*,int ,scalar_t__,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (struct rtable*) ;
 struct ip_tunnel* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4)
{
 struct net_device *VAR_5 = ((void*)0);
 struct ip_tunnel *VAR_6 = FUNC_6(VAR_4);
 const struct iphdr *VAR_7;
 int VAR_8 = VAR_3;
 int VAR_9 = VAR_1;
 int VAR_10 = VAR_6->hlen + sizeof(struct iphdr);

 VAR_7 = &VAR_6->parms.iph;


 if (VAR_7->daddr) {
  struct flowi VAR_11;
  struct rtable *VAR_12;

  VAR_12 = FUNC_4(FUNC_3(VAR_4), &VAR_11,
         VAR_6->parms.iph.protocol,
         VAR_7->daddr, VAR_7->saddr,
         VAR_6->parms.o_key,
         FUNC_1(VAR_7->tos),
         VAR_6->parms.link);
  if (!FUNC_0(VAR_12)) {
   VAR_5 = VAR_12->u.dst.dev;
   FUNC_5(VAR_12);
  }
  if (VAR_4->type != VAR_0)
   VAR_4->flags |= VAR_2;
 }

 if (!VAR_5 && VAR_6->parms.link)
  VAR_5 = FUNC_2(FUNC_3(VAR_4), VAR_6->parms.link);

 if (VAR_5) {
  VAR_8 = VAR_5->hard_header_len + VAR_5->needed_headroom;
  VAR_9 = VAR_5->mtu;
 }
 VAR_4->iflink = VAR_6->parms.link;

 VAR_4->needed_headroom = VAR_10 + VAR_8;
 VAR_9 -= (VAR_4->hard_header_len + VAR_10);

 if (VAR_9 < 68)
  VAR_9 = 68;

 return VAR_9;
}
