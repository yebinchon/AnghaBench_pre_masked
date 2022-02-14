
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tnl_ptk_info {scalar_t__ proto; int key; int flags; } ;
struct sk_buff {TYPE_4__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct iphdr {int saddr; int daddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct TYPE_5__ {scalar_t__ daddr; scalar_t__ ttl; } ;
struct TYPE_6__ {TYPE_1__ iph; } ;
struct ip_tunnel {int err_count; scalar_t__ err_time; TYPE_2__ parms; } ;
struct TYPE_8__ {int ifindex; } ;
struct TYPE_7__ {int type; int code; } ;


 int VAR_0 ;

 int const VAR_1 ;




 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net* FUNC_0 (TYPE_4__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_3 (struct ip_tunnel_net*,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 struct ip_tunnel_net* FUNC_5 (struct net*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_8, u32 VAR_9,
       const struct tnl_ptk_info *VAR_10)
{
 struct net *VAR_11 = FUNC_0(VAR_8->dev);
 struct ip_tunnel_net *VAR_12;
 const struct iphdr *VAR_13;
 const int VAR_14 = FUNC_2(VAR_8)->type;
 const int VAR_15 = FUNC_2(VAR_8)->code;
 struct ip_tunnel *VAR_16;

 switch (VAR_14) {
 default:
 case 131:
  return VAR_3;

 case 132:
  switch (VAR_15) {
  case 129:
  case 130:

   return VAR_3;
  default:




   break;
  }
  break;
 case 128:
  if (VAR_15 != VAR_1)
   return VAR_3;
  break;
 }

 if (VAR_10->proto == FUNC_1(VAR_0))
  VAR_12 = FUNC_5(VAR_11, VAR_5);
 else
  VAR_12 = FUNC_5(VAR_11, VAR_6);

 VAR_13 = (const struct iphdr *)VAR_8->data;
 VAR_16 = FUNC_3(VAR_12, VAR_8->dev->ifindex, VAR_10->flags,
        VAR_13->daddr, VAR_13->saddr, VAR_10->key);

 if (VAR_16 == ((void*)0))
  return VAR_4;

 if (VAR_16->parms.iph.daddr == 0 ||
     FUNC_4(VAR_16->parms.iph.daddr))
  return VAR_3;

 if (VAR_16->parms.iph.ttl == 0 && VAR_14 == 128)
  return VAR_3;

 if (FUNC_6(VAR_7, VAR_16->err_time + VAR_2))
  VAR_16->err_count++;
 else
  VAR_16->err_count = 1;
 VAR_16->err_time = VAR_7;
 return VAR_3;
}
