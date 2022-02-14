
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int kobj; } ;
struct net_device {int flags; scalar_t__ type; scalar_t__ addr_len; int priv_flags; int * br_port; int dev_addr; TYPE_2__ dev; TYPE_1__* netdev_ops; } ;
struct net_bridge_port {int kobj; TYPE_3__* dev; int list; } ;
struct net_bridge {int ifobj; TYPE_5__* dev; int lock; int port_list; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int ext_priv_flags; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {scalar_t__ ndo_start_xmit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct net_bridge_port*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct net_bridge_port*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct net_bridge*,struct net_bridge_port*,int) ;
 int FUNC_4 (struct net_bridge*,struct net_bridge_port*,int ) ;
 int FUNC_5 (struct net_bridge*) ;
 int FUNC_6 (int ,struct net_bridge_port*) ;
 int FUNC_7 (struct net_bridge*) ;
 int FUNC_8 (struct net_bridge_port*) ;
 scalar_t__ FUNC_9 (struct net_bridge*) ;
 int FUNC_10 (struct net_bridge_port*) ;
 int FUNC_11 (struct net_bridge*) ;
 int FUNC_12 (struct net_bridge_port*) ;
 int VAR_15 ;
 int FUNC_13 (int ,struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (TYPE_5__*,int ) ;
 int FUNC_17 (struct net_device*,int) ;
 int FUNC_18 (struct net_bridge_port*) ;
 int FUNC_19 (int *,int *,int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int *) ;
 TYPE_4__* FUNC_23 (struct net_device*) ;
 scalar_t__ FUNC_24 (struct net_device*) ;
 struct net_bridge_port* FUNC_25 (struct net_bridge*,struct net_device*) ;
 int FUNC_26 (int *,struct net_bridge_port*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int ) ;

int FUNC_30(struct net_bridge *VAR_16, struct net_device *VAR_17)
{
 struct net_bridge_port *VAR_18;
 int VAR_19 = 0;


 if ((VAR_17->flags & VAR_8) ||
     VAR_17->type != VAR_0 || VAR_17->addr_len != VAR_5)
  return -VAR_2;


 if (VAR_17->netdev_ops->ndo_start_xmit == VAR_14)
  return -VAR_3;


 if (VAR_17->br_port != ((void*)0))
  return -VAR_1;


 if (FUNC_23(VAR_17)->ext_priv_flags & VAR_7)
  return -VAR_4;

 VAR_18 = FUNC_25(VAR_16, VAR_17);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 VAR_19 = FUNC_17(VAR_17, 1);
 if (VAR_19)
  goto put_back;

 FUNC_13(VAR_11, VAR_17);

 VAR_19 = FUNC_19(&VAR_18->kobj, &VAR_15, &(VAR_17->dev.kobj),
       VAR_13);
 if (VAR_19)
  goto err0;

 VAR_19 = FUNC_4(VAR_16, VAR_18, VAR_17->dev_addr);
 if (VAR_19)
  goto err1;

 VAR_19 = FUNC_12(VAR_18);
 if (VAR_19)
  goto err2;

 if (FUNC_9(VAR_16) && ((VAR_19 = FUNC_8(VAR_18))))
  goto err3;

 FUNC_26(VAR_17->br_port, VAR_18);

 FUNC_14(VAR_17);

 VAR_17->priv_flags |= VAR_6;

 FUNC_22(&VAR_18->list, &VAR_16->port_list);

 FUNC_2(VAR_16, VAR_18);

 FUNC_5(VAR_16);

 FUNC_27(&VAR_16->lock);
 FUNC_11(VAR_16);

 if ((VAR_17->flags & VAR_9) && FUNC_24(VAR_17) &&
     (VAR_16->dev->flags & VAR_9))
  FUNC_10(VAR_18);
 FUNC_28(&VAR_16->lock);

 FUNC_6(VAR_12, VAR_18);

 FUNC_16(VAR_16->dev, FUNC_7(VAR_16));

 FUNC_21(&VAR_18->kobj, VAR_10);

 return 0;
err3:
 FUNC_29(VAR_16->ifobj, VAR_18->dev->name);
err2:
 FUNC_3(VAR_16, VAR_18, 1);
err1:
 FUNC_20(&VAR_18->kobj);
 VAR_18 = ((void*)0);
err0:
 FUNC_17(VAR_17, -1);
put_back:
 FUNC_15(VAR_17);
 FUNC_18(VAR_18);
 return VAR_19;
}
