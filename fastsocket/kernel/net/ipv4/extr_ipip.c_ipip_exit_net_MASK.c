
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ipip_net {int fb_tunnel_dev; } ;


 int FUNC_0 (struct ipip_net*) ;
 int VAR_0 ;
 int FUNC_1 (struct ipip_net*) ;
 struct ipip_net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_1)
{
 struct ipip_net *VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 FUNC_3();
 FUNC_0(VAR_2);
 FUNC_5(VAR_2->fb_tunnel_dev);
 FUNC_4();
 FUNC_1(VAR_2);
}
