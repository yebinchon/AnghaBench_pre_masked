
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_net {int ** tunnels_wc; struct net_device* fb_tunnel_dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sit_net*,int ) ;
 struct sit_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2)
{
 struct net *VAR_3 = FUNC_0(VAR_2);
 struct sit_net *VAR_4 = FUNC_4(VAR_3, VAR_1);

 if (VAR_2 == VAR_4->fb_tunnel_dev) {
  FUNC_6(&VAR_0);
  VAR_4->tunnels_wc[0] = ((void*)0);
  FUNC_7(&VAR_0);
  FUNC_1(VAR_2);
 } else {
  FUNC_3(VAR_4, FUNC_5(VAR_2));
  FUNC_2(FUNC_5(VAR_2), ((void*)0));
  FUNC_1(VAR_2);
 }
}
