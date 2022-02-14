
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int br_port; int name; } ;
struct net_bridge_port {int rcu; int kobj; int list; struct net_device* dev; struct net_bridge* br; } ;
struct net_bridge {int lock; int ifobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*,int) ;
 int FUNC_2 (int ,struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge_port*) ;
 int FUNC_4 (struct net_bridge_port*) ;
 int FUNC_5 (struct net_bridge_port*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(struct net_bridge_port *VAR_4)
{
 struct net_bridge *VAR_5 = VAR_4->br;
 struct net_device *VAR_6 = VAR_4->dev;

 FUNC_14(VAR_5->ifobj, VAR_6->name);

 FUNC_7(VAR_6, -1);

 FUNC_0(VAR_5, VAR_4);

 FUNC_12(&VAR_5->lock);
 FUNC_5(VAR_4);
 FUNC_13(&VAR_5->lock);

 FUNC_2(VAR_2, VAR_4);

 FUNC_1(VAR_5, VAR_4, 1);

 FUNC_10(&VAR_4->list);

 FUNC_11(VAR_6->br_port, ((void*)0));

 VAR_6->priv_flags &= ~VAR_0;

 FUNC_3(VAR_4);

 FUNC_9(&VAR_4->kobj, VAR_1);
 FUNC_8(&VAR_4->kobj);

 FUNC_4(VAR_4);

 FUNC_6(&VAR_4->rcu, VAR_3);
}
