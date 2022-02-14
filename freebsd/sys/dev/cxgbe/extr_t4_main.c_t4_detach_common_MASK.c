
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct port_info {struct port_info* vi; int pi_lock; scalar_t__ dev; int viid; } ;
struct memwin {int mw_lock; } ;
struct TYPE_6__ {int atid_lock; int ftid_cv; int ftid_lock; struct port_info* tid_tab; struct port_info* hpftid_tab; struct port_info* ftid_tab; } ;
struct TYPE_5__ {struct port_info* tls_rx_ports; } ;
struct TYPE_4__ {struct port_info* eqmap; struct port_info* iqmap; struct port_info* ctrlq; struct port_info* txq; struct port_info* rxq; struct port_info* nm_txq; struct port_info* nm_rxq; struct port_info* ofld_rxq; struct port_info* ofld_txq; } ;
struct adapter {int flags; int intr_count; scalar_t__ intr_type; int sc_lock; int reg_lock; int sfl_lock; struct memwin* memwin; int * policy; int policy_lock; int ifp_lock; TYPE_3__ tids; int sfl_callout; TYPE_2__ tt; TYPE_1__ sge; struct port_info* irq; scalar_t__ key_map; scalar_t__ smt; scalar_t__ l2t; scalar_t__ msix_res; int msix_rid; scalar_t__ udbs_res; int udbs_rid; scalar_t__ regs_res; int regs_rid; int mbox; int pf; struct port_info** port; int * cdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct adapter*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 struct adapter* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (struct port_info*,int ) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int VAR_11 ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct adapter*) ;
 int FUNC_24 (struct adapter*) ;
 int FUNC_25 (struct adapter*) ;
 int FUNC_26 (struct adapter*) ;
 int FUNC_27 (struct adapter*,struct port_info*) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (scalar_t__) ;
 int FUNC_30 (struct adapter*) ;
 int FUNC_31 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_32 (struct adapter*,int ) ;
 int FUNC_33 (struct adapter*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_34 (scalar_t__) ;

int
FUNC_35(device_t VAR_14)
{
 struct adapter *VAR_15;
 struct port_info *VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_10(VAR_14);

 if (VAR_15->cdev) {
  FUNC_7(VAR_15->cdev);
  VAR_15->cdev = ((void*)0);
 }

 FUNC_21(&VAR_13);
 FUNC_0(&VAR_12, VAR_15, VAR_10, VAR_11);
 FUNC_22(&VAR_13);

 VAR_15->flags &= ~VAR_0;
 if (VAR_15->flags & VAR_1) {
  if (!(VAR_15->flags & VAR_5))
   FUNC_33(VAR_15);
 }

 if (FUNC_11(VAR_14)) {
  VAR_18 = FUNC_2(VAR_14);
  if (VAR_18) {
   FUNC_12(VAR_14,
       "failed to detach child devices: %d\n", VAR_18);
   return (VAR_18);
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_15->intr_count; VAR_17++)
  FUNC_27(VAR_15, &VAR_15->irq[VAR_17]);

 if ((VAR_15->flags & (VAR_5 | VAR_2)) == VAR_2)
  FUNC_30(VAR_15);

 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  VAR_16 = VAR_15->port[VAR_17];
  if (VAR_16) {
   FUNC_31(VAR_15, VAR_15->mbox, VAR_15->pf, 0, VAR_16->vi[0].viid);
   if (VAR_16->dev)
    FUNC_8(VAR_14, VAR_16->dev);

   FUNC_16(&VAR_16->pi_lock);
   FUNC_13(VAR_16->vi, VAR_7);
   FUNC_13(VAR_16, VAR_7);
  }
 }

 FUNC_9(VAR_14);

 if (VAR_15->flags & VAR_1)
  FUNC_1(VAR_15);

 if ((VAR_15->flags & (VAR_5 | VAR_2)) == VAR_2)
  FUNC_32(VAR_15, VAR_15->mbox);

 if (VAR_15->intr_type == VAR_3 || VAR_15->intr_type == VAR_4)
  FUNC_18(VAR_14);

 if (VAR_15->regs_res)
  FUNC_3(VAR_14, VAR_9, VAR_15->regs_rid,
      VAR_15->regs_res);

 if (VAR_15->udbs_res)
  FUNC_3(VAR_14, VAR_9, VAR_15->udbs_rid,
      VAR_15->udbs_res);

 if (VAR_15->msix_res)
  FUNC_3(VAR_14, VAR_9, VAR_15->msix_rid,
      VAR_15->msix_res);

 if (VAR_15->l2t)
  FUNC_28(VAR_15->l2t);
 if (VAR_15->smt)
  FUNC_29(VAR_15->smt);
 FUNC_25(VAR_15);



 if (VAR_15->key_map)
  FUNC_34(VAR_15->key_map);
 FUNC_13(VAR_15->irq, VAR_7);
 FUNC_13(VAR_15->sge.rxq, VAR_7);
 FUNC_13(VAR_15->sge.txq, VAR_7);
 FUNC_13(VAR_15->sge.ctrlq, VAR_7);
 FUNC_13(VAR_15->sge.iqmap, VAR_7);
 FUNC_13(VAR_15->sge.eqmap, VAR_7);
 FUNC_13(VAR_15->tids.ftid_tab, VAR_7);
 FUNC_13(VAR_15->tids.hpftid_tab, VAR_7);
 FUNC_14(&VAR_15->tids);
 FUNC_13(VAR_15->tids.tid_tab, VAR_7);
 FUNC_13(VAR_15->tt.tls_rx_ports, VAR_7);
 FUNC_24(VAR_15);

 FUNC_5(&VAR_15->sfl_callout);
 if (FUNC_17(&VAR_15->tids.ftid_lock)) {
  FUNC_16(&VAR_15->tids.ftid_lock);
  FUNC_6(&VAR_15->tids.ftid_cv);
 }
 if (FUNC_17(&VAR_15->tids.atid_lock))
  FUNC_16(&VAR_15->tids.atid_lock);
 if (FUNC_17(&VAR_15->ifp_lock))
  FUNC_16(&VAR_15->ifp_lock);

 if (FUNC_20(&VAR_15->policy_lock)) {
  FUNC_19(&VAR_15->policy_lock);




 }

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  struct memwin *VAR_19 = &VAR_15->memwin[VAR_17];

  if (FUNC_20(&VAR_19->mw_lock))
   FUNC_19(&VAR_19->mw_lock);
 }

 FUNC_16(&VAR_15->sfl_lock);
 FUNC_16(&VAR_15->reg_lock);
 FUNC_16(&VAR_15->sc_lock);

 FUNC_4(VAR_15, sizeof(*VAR_15));

 return (0);
}
