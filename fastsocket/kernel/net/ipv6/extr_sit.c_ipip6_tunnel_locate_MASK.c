
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_net {int dummy; } ;
struct net_device {int priv_flags; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ daddr; scalar_t__ saddr; } ;
struct ip_tunnel_parm {scalar_t__ link; int i_flags; scalar_t__* name; TYPE_1__ iph; } ;
struct ip_tunnel {struct ip_tunnel_parm parms; struct ip_tunnel* next; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ip_tunnel** FUNC_0 (struct sit_net*,struct ip_tunnel_parm*) ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct net*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sit_net*,struct ip_tunnel*) ;
 int VAR_3 ;
 struct sit_net* FUNC_8 (struct net*,int ) ;
 struct ip_tunnel* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char) ;
 int FUNC_13 (char*,scalar_t__*,int) ;

__attribute__((used)) static struct ip_tunnel * FUNC_14(struct net *VAR_5,
  struct ip_tunnel_parm *VAR_6, int VAR_7)
{
 __be32 VAR_8 = VAR_6->iph.daddr;
 __be32 VAR_9 = VAR_6->iph.saddr;
 struct ip_tunnel *VAR_10, **VAR_11, *VAR_12;
 struct net_device *VAR_13;
 char VAR_14[VAR_1];
 struct sit_net *VAR_15 = FUNC_8(VAR_5, VAR_4);

 for (VAR_11 = FUNC_0(VAR_15, VAR_6); (VAR_10 = *VAR_11) != ((void*)0); VAR_11 = &VAR_10->next) {
  if (VAR_9 == VAR_10->parms.iph.saddr &&
      VAR_8 == VAR_10->parms.iph.daddr &&
      VAR_6->link == VAR_10->parms.link) {
   if (VAR_7)
    return ((void*)0);
   else
    return VAR_10;
  }
 }
 if (!VAR_7)
  goto failed;

 if (VAR_6->name[0])
  FUNC_13(VAR_14, VAR_6->name, VAR_1);
 else
  FUNC_11(VAR_14, "sit%%d");

 VAR_13 = FUNC_1(sizeof(*VAR_10), VAR_14, VAR_3);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_13, VAR_5);

 if (FUNC_12(VAR_14, '%')) {
  if (FUNC_2(VAR_13, VAR_14) < 0)
   goto failed_free;
 }

 VAR_12 = FUNC_9(VAR_13);

 VAR_12->parms = *VAR_6;
 FUNC_6(VAR_13);

 if (VAR_6->i_flags & VAR_2)
  VAR_13->priv_flags |= VAR_0;

 if (FUNC_10(VAR_13) < 0)
  goto failed_free;

 FUNC_3(VAR_13);

 FUNC_7(VAR_15, VAR_12);
 return VAR_12;

failed_free:
 FUNC_5(VAR_13);
failed:
 return ((void*)0);
}
