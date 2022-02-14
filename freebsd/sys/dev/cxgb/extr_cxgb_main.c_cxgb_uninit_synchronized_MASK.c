
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ link_ok; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {scalar_t__ offset; } ;
struct port_info {struct adapter* adapter; int port_id; TYPE_2__ link_config; TYPE_4__ phy; TYPE_3__ mac; int link_check_task; int link_check_ch; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct adapter {scalar_t__ open_device_map; int tq; int tick_task; int slow_intr_task; } ;
struct TYPE_5__ {int (* power_down ) (TYPE_4__*,int) ;} ;


 int FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct port_info*) ;
 int FUNC_3 (struct port_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (struct adapter*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,scalar_t__,int ,int ) ;
 int FUNC_13 (struct adapter*,scalar_t__,int ,int,int,int) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct port_info *VAR_9)
{
 struct adapter *VAR_10 = VAR_9->adapter;
 struct ifnet *VAR_11 = VAR_9->ifp;




 FUNC_0(VAR_10);
 FUNC_6(&VAR_10->open_device_map, VAR_9->port_id);
 FUNC_11(VAR_10, VAR_9->port_id);
 FUNC_14(VAR_10->tq, &VAR_10->slow_intr_task);
 FUNC_14(VAR_10->tq, &VAR_10->tick_task);

 FUNC_5(&VAR_9->link_check_ch);
 FUNC_14(VAR_10->tq, &VAR_9->link_check_task);

 FUNC_2(VAR_9);
 VAR_11->if_drv_flags &= ~(VAR_6 | VAR_5);


 FUNC_12(VAR_10, VAR_2 + VAR_9->mac.offset, VAR_4, 0);


 FUNC_12(VAR_10, VAR_0 + VAR_9->mac.offset,
    FUNC_4(VAR_8), 0);

 FUNC_1(100 * 1000);


 FUNC_13(VAR_10, VAR_1 + VAR_9->mac.offset,
   VAR_3, 1, 20, 5);

 FUNC_1(100 * 1000);
 FUNC_9(&VAR_9->mac, VAR_7);

 VAR_9->phy.ops->power_down(&VAR_9->phy, 1);

 FUNC_3(VAR_9);

 VAR_9->link_config.link_ok = 0;
 FUNC_10(VAR_10, VAR_9->port_id, 0, 0, 0, 0, 0);

 if (VAR_10->open_device_map == 0)
  FUNC_7(VAR_9->adapter);

 return (0);
}
