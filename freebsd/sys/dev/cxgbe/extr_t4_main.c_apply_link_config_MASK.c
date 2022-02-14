
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {scalar_t__ requested_aneg; int supported; int requested_fc; int requested_fec; int fc; scalar_t__ link_ok; } ;
struct port_info {int dev; int tx_chan; struct link_config link_cfg; struct adapter* adapter; } ;
struct adapter {int flags; int mbox; } ;


 int FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct port_info*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct adapter*,int ,int ,struct link_config*) ;

__attribute__((used)) static int
FUNC_5(struct port_info *VAR_14)
{
 struct adapter *VAR_15 = VAR_14->adapter;
 struct link_config *VAR_16 = &VAR_14->link_cfg;
 int VAR_17;
 VAR_17 = -FUNC_4(VAR_15, VAR_15->mbox, VAR_14->tx_chan, VAR_16);
 if (VAR_17 != 0) {

  if (!(VAR_15->flags & VAR_10) || VAR_17 != VAR_3)
   FUNC_3(VAR_14->dev, "l1cfg failed: %d\n", VAR_17);
 } else {
  if (VAR_16->link_ok && !(VAR_16->requested_fc & VAR_11))
   VAR_16->fc = VAR_16->requested_fc & (VAR_13 | VAR_12);
 }
 return (VAR_17);
}
