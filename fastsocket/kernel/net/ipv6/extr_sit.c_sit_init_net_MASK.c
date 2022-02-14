
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_net {int fb_tunnel_dev; int tunnels_r_l; int * tunnels; int tunnels_r; int tunnels_l; int tunnels_wc; } ;
struct net {int dummy; } ;
struct ip_tunnel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,struct net*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct sit_net*) ;
 struct sit_net* FUNC_6 (int,int ) ;
 int FUNC_7 (struct net*,int ,struct sit_net*) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4)
{
 int VAR_5;
 struct sit_net *VAR_6;

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_6(sizeof(struct sit_net), VAR_1);
 if (VAR_6 == ((void*)0))
  goto err_alloc;

 VAR_5 = FUNC_7(VAR_4, VAR_3, VAR_6);
 if (VAR_5 < 0)
  goto err_assign;

 VAR_6->tunnels[0] = VAR_6->tunnels_wc;
 VAR_6->tunnels[1] = VAR_6->tunnels_l;
 VAR_6->tunnels[2] = VAR_6->tunnels_r;
 VAR_6->tunnels[3] = VAR_6->tunnels_r_l;

 VAR_6->fb_tunnel_dev = FUNC_0(sizeof(struct ip_tunnel), "sit0",
        VAR_2);
 if (!VAR_6->fb_tunnel_dev) {
  VAR_5 = -VAR_0;
  goto err_alloc_dev;
 }
 FUNC_1(VAR_6->fb_tunnel_dev, VAR_4);

 FUNC_4(VAR_6->fb_tunnel_dev);

 if ((VAR_5 = FUNC_8(VAR_6->fb_tunnel_dev)))
  goto err_reg_dev;

 return 0;

err_reg_dev:
 FUNC_2(VAR_6->fb_tunnel_dev);
 FUNC_3(VAR_6->fb_tunnel_dev);
err_alloc_dev:

err_assign:
 FUNC_5(VAR_6);
err_alloc:
 return VAR_5;
}
