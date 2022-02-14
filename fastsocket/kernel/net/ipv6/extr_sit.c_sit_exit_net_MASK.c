
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_net {int fb_tunnel_dev; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sit_net*) ;
 struct sit_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sit_net*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_1)
{
 struct sit_net *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 FUNC_2();
 FUNC_4(VAR_2);
 FUNC_5(VAR_2->fb_tunnel_dev);
 FUNC_3();
 FUNC_0(VAR_2);
}
