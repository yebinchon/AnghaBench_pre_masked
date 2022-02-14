
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip6_tnl_net {int ** tnls_wc; struct net_device* fb_tnl_dev; } ;
struct ip6_tnl {int dummy; } ;


 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ip6_tnl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ip6_tnl_net*,struct ip6_tnl*) ;
 struct ip6_tnl_net* FUNC_4 (struct net*,int ) ;
 struct ip6_tnl* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_2)
{
 struct ip6_tnl *VAR_3 = FUNC_5(VAR_2);
 struct net *VAR_4 = FUNC_0(VAR_2);
 struct ip6_tnl_net *VAR_5 = FUNC_4(VAR_4, VAR_1);

 if (VAR_2 == VAR_5->fb_tnl_dev) {
  FUNC_6(&VAR_0);
  VAR_5->tnls_wc[0] = ((void*)0);
  FUNC_7(&VAR_0);
 } else {
  FUNC_3(VAR_5, VAR_3);
 }
 FUNC_2(VAR_3);
 FUNC_1(VAR_2);
}
