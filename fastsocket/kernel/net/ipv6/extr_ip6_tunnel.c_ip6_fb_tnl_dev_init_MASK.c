
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip6_tnl_net {struct ip6_tnl** tnls_wc; } ;
struct TYPE_2__ {int proto; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 struct ip6_tnl_net* FUNC_3 (struct net*,int ) ;
 struct ip6_tnl* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct ip6_tnl *VAR_3 = FUNC_4(VAR_2);
 struct net *VAR_4 = FUNC_1(VAR_2);
 struct ip6_tnl_net *VAR_5 = FUNC_3(VAR_4, VAR_1);

 FUNC_2(VAR_2);
 VAR_3->parms.proto = VAR_0;
 FUNC_0(VAR_2);
 VAR_5->tnls_wc[0] = VAR_3;
}
