
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipip_net {int dummy; } ;
struct TYPE_2__ {scalar_t__ daddr; scalar_t__ saddr; } ;
struct ip_tunnel_parm {scalar_t__* name; TYPE_1__ iph; } ;
struct ip_tunnel {struct ip_tunnel_parm parms; struct ip_tunnel* next; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 struct ip_tunnel** FUNC_0 (struct ipip_net*,struct ip_tunnel_parm*) ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct net*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ipip_net*,struct ip_tunnel*) ;
 int VAR_2 ;
 struct ipip_net* FUNC_8 (struct net*,int ) ;
 struct ip_tunnel* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char) ;
 int FUNC_13 (char*,scalar_t__*,int) ;

__attribute__((used)) static struct ip_tunnel * FUNC_14(struct net *VAR_3,
  struct ip_tunnel_parm *VAR_4, int VAR_5)
{
 __be32 VAR_6 = VAR_4->iph.daddr;
 __be32 VAR_7 = VAR_4->iph.saddr;
 struct ip_tunnel *VAR_8, **VAR_9, *VAR_10;
 struct net_device *VAR_11;
 char VAR_12[VAR_0];
 struct ipip_net *VAR_13 = FUNC_8(VAR_3, VAR_1);

 for (VAR_9 = FUNC_0(VAR_13, VAR_4); (VAR_8 = *VAR_9) != ((void*)0); VAR_9 = &VAR_8->next) {
  if (VAR_7 == VAR_8->parms.iph.saddr && VAR_6 == VAR_8->parms.iph.daddr)
   return VAR_8;
 }
 if (!VAR_5)
  return ((void*)0);

 if (VAR_4->name[0])
  FUNC_13(VAR_12, VAR_4->name, VAR_0);
 else
  FUNC_11(VAR_12, "tunl%%d");

 VAR_11 = FUNC_1(sizeof(*VAR_8), VAR_12, VAR_2);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_11, VAR_3);

 if (FUNC_12(VAR_12, '%')) {
  if (FUNC_2(VAR_11, VAR_12) < 0)
   goto failed_free;
 }

 VAR_10 = FUNC_9(VAR_11);
 VAR_10->parms = *VAR_4;

 FUNC_6(VAR_11);

 if (FUNC_10(VAR_11) < 0)
  goto failed_free;

 FUNC_3(VAR_11);
 FUNC_7(VAR_13, VAR_10);
 return VAR_10;

failed_free:
 FUNC_5(VAR_11);
 return ((void*)0);
}
