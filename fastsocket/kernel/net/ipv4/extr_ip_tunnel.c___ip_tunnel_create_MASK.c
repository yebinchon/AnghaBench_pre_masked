
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int setup; int priv_size; scalar_t__* kind; } ;
struct net_device {struct rtnl_link_ops const* rtnl_link_ops; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {scalar_t__* name; } ;
struct ip_tunnel {struct ip_tunnel_parm parms; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int) ;
 int VAR_2 ;
 struct net_device* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,struct net*) ;
 int FUNC_5 (struct net_device*) ;
 struct ip_tunnel* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (char*,char) ;
 int FUNC_9 (char*,scalar_t__*,int) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static struct net_device *FUNC_12(struct net *VAR_3,
          const struct rtnl_link_ops *VAR_4,
          struct ip_tunnel_parm *VAR_5)
{
 int VAR_6;
 struct ip_tunnel *VAR_7;
 struct net_device *VAR_8;
 char VAR_9[VAR_2];

 if (VAR_5->name[0])
  FUNC_9(VAR_9, VAR_5->name, VAR_2);
 else {
  if (FUNC_10(VAR_4->kind) > (VAR_2 - 3)) {
   VAR_6 = -VAR_0;
   goto failed;
  }
  FUNC_9(VAR_9, VAR_4->kind, VAR_2);
  FUNC_11(VAR_9, "%d", 2);
 }

 FUNC_0();
 VAR_8 = FUNC_2(VAR_4->priv_size, VAR_9, VAR_4->setup);
 if (!VAR_8) {
  VAR_6 = -VAR_1;
  goto failed;
 }
 FUNC_4(VAR_8, VAR_3);

 if (FUNC_8(VAR_9, '%')) {
  VAR_6 = FUNC_3(VAR_8, VAR_9);
  if (VAR_6 < 0)
   goto failed;
 }

 VAR_8->rtnl_link_ops = VAR_4;

 VAR_7 = FUNC_6(VAR_8);
 VAR_7->parms = *VAR_5;

 VAR_6 = FUNC_7(VAR_8);
 if (VAR_6)
  goto failed_free;

 return VAR_8;

failed_free:
 FUNC_5(VAR_8);
failed:
 return FUNC_1(VAR_6);
}
