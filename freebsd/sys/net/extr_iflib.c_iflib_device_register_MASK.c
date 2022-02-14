
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ether_vlan_header {int dummy; } ;
typedef TYPE_4__* kobjop_desc_t ;
typedef TYPE_5__* kobj_t ;
typedef int kobj_method_t ;
typedef int if_t ;
typedef TYPE_6__* if_softc_ctx_t ;
typedef TYPE_7__* if_shared_ctx_t ;
typedef TYPE_8__* if_ctx_t ;
typedef int device_t ;
struct TYPE_43__ {int octet; } ;
struct TYPE_47__ {int isc_capabilities; int isc_tx_csum_flags; int isc_capenable; int isc_ntxqsets; int isc_ntxqsets_max; int isc_nrxqsets; int isc_nrxqsets_max; int* isc_ntxd; int isc_tx_nsegments; int isc_tx_tso_segments_max; int isc_rss_table_size; int isc_rss_table_mask; int isc_vectors; scalar_t__ isc_msix_bar; scalar_t__ isc_intr; int isc_tx_tso_segsize_max; int isc_tx_tso_size_max; int * isc_nrxd; int isc_media; int * isc_txrx; } ;
struct TYPE_49__ {int ifc_flags; struct TYPE_49__* ifc_softc; int ifc_dev; int ifc_admin_task; int ifc_ifp; TYPE_2__ ifc_mac; int isc_legacy_intr; int ifc_sysctl_core_offset; int ifc_cpus; int ifc_mediap; int ifc_txrx; TYPE_6__ ifc_softc_ctx; TYPE_7__* ifc_sctx; } ;
struct TYPE_48__ {int isc_flags; TYPE_3__* isc_driver; } ;
struct TYPE_46__ {TYPE_1__* ops; } ;
struct TYPE_45__ {int deflt; } ;
struct TYPE_44__ {int size; } ;
struct TYPE_42__ {int cls; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int ,int ,TYPE_8__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_12 (TYPE_6__*) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_13 (int ,int ,int,int *) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,TYPE_8__*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_8__*,int ) ;
 int FUNC_19 (TYPE_8__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int) ;
 TYPE_4__ VAR_24 ;
 TYPE_4__ VAR_25 ;
 int VAR_26 ;
 int FUNC_28 (TYPE_8__*) ;
 int FUNC_29 (TYPE_8__*) ;
 int FUNC_30 (TYPE_8__*) ;
 int FUNC_31 (TYPE_8__*) ;
 int FUNC_32 (TYPE_8__*) ;
 int VAR_27 ;
 int FUNC_33 (TYPE_8__*,int ,TYPE_8__*,int*,char*) ;
 int FUNC_34 (TYPE_8__*) ;
 int FUNC_35 (TYPE_8__*) ;
 int FUNC_36 (TYPE_8__*) ;
 int FUNC_37 (TYPE_8__*) ;
 int FUNC_38 (TYPE_8__*) ;
 int FUNC_39 (TYPE_8__*) ;
 int FUNC_40 (TYPE_8__*) ;
 int FUNC_41 (TYPE_8__*) ;
 int * FUNC_42 (int ,int *,TYPE_4__*) ;
 void* FUNC_43 (int,int ,int) ;
 void* FUNC_44 (int,int) ;
 int FUNC_45 (int ,int ) ;
 int VAR_28 ;
 int FUNC_46 (int ,int *,TYPE_8__*,int *,int *,char*) ;
 int FUNC_47 (int ,int *) ;

int
FUNC_48(device_t VAR_29, void *VAR_30, if_shared_ctx_t VAR_31, if_ctx_t *VAR_32)
{
 if_ctx_t VAR_33;
 if_t VAR_34;
 if_softc_ctx_t VAR_35;
 kobjop_desc_t VAR_36;
 kobj_method_t *VAR_37;
 int VAR_38, VAR_39, VAR_40;
 uint16_t VAR_41, VAR_42;

 VAR_33 = FUNC_43(sizeof(* VAR_33), VAR_19, VAR_20|VAR_21);

 if (VAR_30 == ((void*)0)) {
  VAR_30 = FUNC_43(VAR_31->isc_driver->size, VAR_19, VAR_20|VAR_21);
  FUNC_15(VAR_29, VAR_33);
  VAR_33->ifc_flags |= VAR_8;
 }

 VAR_33->ifc_sctx = VAR_31;
 VAR_33->ifc_dev = VAR_29;
 VAR_33->ifc_softc = VAR_30;

 if ((VAR_38 = FUNC_38(VAR_33)) != 0) {
  FUNC_14(VAR_29, "iflib_register failed %d\n", VAR_38);
  goto fail_ctx_free;
 }
 FUNC_29(VAR_33);

 VAR_35 = &VAR_33->ifc_softc_ctx;
 VAR_34 = VAR_33->ifc_ifp;

 FUNC_39(VAR_33);
 FUNC_2(VAR_33);
 if ((VAR_38 = FUNC_7(VAR_33)) != 0) {
  FUNC_14(VAR_29, "IFDI_ATTACH_PRE failed %d\n", VAR_38);
  goto fail_unlock;
 }
 FUNC_12(VAR_35);
 VAR_33->ifc_txrx = *VAR_35->isc_txrx;

 if (VAR_31->isc_flags & VAR_9)
  VAR_33->ifc_mediap = VAR_35->isc_media;






 FUNC_21(VAR_34,
     VAR_35->isc_capabilities | VAR_2 | VAR_3);
 FUNC_22(VAR_34,
     VAR_35->isc_capenable | VAR_2 | VAR_3);

 if (VAR_35->isc_ntxqsets == 0 || (VAR_35->isc_ntxqsets_max && VAR_35->isc_ntxqsets_max < VAR_35->isc_ntxqsets))
  VAR_35->isc_ntxqsets = VAR_35->isc_ntxqsets_max;
 if (VAR_35->isc_nrxqsets == 0 || (VAR_35->isc_nrxqsets_max && VAR_35->isc_nrxqsets_max < VAR_35->isc_nrxqsets))
  VAR_35->isc_nrxqsets = VAR_35->isc_nrxqsets_max;

 VAR_42 = (VAR_31->isc_flags & VAR_11) ? 1 : 0;
 VAR_41 = (VAR_31->isc_flags & VAR_10) ? 1 : 0;


 FUNC_14(VAR_29, "Using %d TX descriptors and %d RX descriptors\n",
     VAR_35->isc_ntxd[VAR_42], VAR_35->isc_nrxd[VAR_41]);

 if (VAR_35->isc_tx_nsegments > VAR_35->isc_ntxd[VAR_42] /
     VAR_18)
  VAR_35->isc_tx_nsegments = FUNC_44(1, VAR_35->isc_ntxd[VAR_42] /
      VAR_18);
 if (VAR_35->isc_tx_tso_segments_max > VAR_35->isc_ntxd[VAR_42] /
     VAR_18)
  VAR_35->isc_tx_tso_segments_max = FUNC_44(1,
      VAR_35->isc_ntxd[VAR_42] / VAR_18);


 if (FUNC_20(VAR_34) & VAR_4) {




  FUNC_24(VAR_34, FUNC_45(VAR_35->isc_tx_tso_size_max,
      VAR_17));
  FUNC_25(VAR_34, VAR_35->isc_tx_tso_segments_max - 3);
  FUNC_26(VAR_34, VAR_35->isc_tx_tso_segsize_max);
 }
 if (VAR_35->isc_rss_table_size == 0)
  VAR_35->isc_rss_table_size = 64;
 VAR_35->isc_rss_table_mask = VAR_35->isc_rss_table_size-1;

 FUNC_5(&VAR_33->ifc_admin_task, 0, VAR_22, VAR_33);

 FUNC_46(VAR_28, &VAR_33->ifc_admin_task, VAR_33,
     ((void*)0), ((void*)0), "admin");


 if (FUNC_13(VAR_29, VAR_16, sizeof(VAR_33->ifc_cpus), &VAR_33->ifc_cpus) != 0) {
  FUNC_14(VAR_29, "Unable to fetch CPU list\n");
  FUNC_0(&VAR_23, &VAR_33->ifc_cpus);
 }
 FUNC_11(FUNC_1(&VAR_33->ifc_cpus) > 0);





 if (VAR_31->isc_flags & VAR_15) {
  VAR_39 = VAR_35->isc_vectors;
 } else if (VAR_35->isc_msix_bar != 0)




  VAR_39 = FUNC_34(VAR_33);
 else {
  VAR_35->isc_vectors = 1;
  VAR_35->isc_ntxqsets = 1;
  VAR_35->isc_nrxqsets = 1;
  VAR_35->isc_intr = VAR_12;
  VAR_39 = 0;
 }

 if ((VAR_38 = FUNC_37(VAR_33))) {
  FUNC_14(VAR_29, "Unable to allocate queue memory\n");
  goto fail_intr_free;
 }

 if ((VAR_38 = FUNC_36(VAR_33)))
  goto fail_queues;




 VAR_33->ifc_sysctl_core_offset = FUNC_19(VAR_33);
 FUNC_9(VAR_33);

 if (VAR_39 > 1) {




  VAR_36 = &VAR_24;
  VAR_37 = FUNC_42(((kobj_t)VAR_33)->ops->cls, ((void*)0),
      VAR_36);
  if (VAR_37 == &VAR_36->deflt) {
   FUNC_14(VAR_29,
       "MSI-X requires ifdi_rx_queue_intr_enable method");
   VAR_38 = VAR_1;
   goto fail_queues;
  }
  VAR_36 = &VAR_25;
  VAR_37 = FUNC_42(((kobj_t)VAR_33)->ops->cls, ((void*)0),
      VAR_36);
  if (VAR_37 == &VAR_36->deflt) {
   FUNC_14(VAR_29,
       "MSI-X requires ifdi_tx_queue_intr_enable method");
   VAR_38 = VAR_1;
   goto fail_queues;
  }






  VAR_38 = FUNC_10(VAR_33, VAR_39);
  if (VAR_38 != 0) {
   FUNC_14(VAR_29, "IFDI_MSIX_INTR_ASSIGN failed %d\n",
       VAR_38);
   goto fail_queues;
  }
 } else if (VAR_35->isc_intr != VAR_14) {
  VAR_40 = 0;
  if (VAR_35->isc_intr == VAR_13) {
   FUNC_11(VAR_39 == 1);
   VAR_40 = 1;
  }
  if ((VAR_38 = FUNC_33(VAR_33, VAR_33->isc_legacy_intr, VAR_33->ifc_softc, &VAR_40, "irq0")) != 0) {
   FUNC_14(VAR_29, "iflib_legacy_setup failed %d\n", VAR_38);
   goto fail_queues;
  }
 } else {
  FUNC_14(VAR_29,
      "Cannot use iflib with only 1 MSI-X interrupt!\n");
  VAR_38 = VAR_0;
  goto fail_intr_free;
 }

 FUNC_16(VAR_33->ifc_ifp, VAR_33->ifc_mac.octet);

 if ((VAR_38 = FUNC_6(VAR_33)) != 0) {
  FUNC_14(VAR_29, "IFDI_ATTACH_POST failed %d\n", VAR_38);
  goto fail_detach;
 }






 if (FUNC_20(VAR_34) & VAR_6)
  FUNC_27(VAR_34, sizeof(struct ether_vlan_header));

 if ((VAR_38 = FUNC_35(VAR_33))) {
  FUNC_14(VAR_33->ifc_dev, "netmap attach failed: %d\n", VAR_38);
  goto fail_detach;
 }
 *VAR_32 = VAR_33;

 FUNC_4(VAR_33->ifc_ifp, VAR_26);

 FUNC_23(VAR_33->ifc_ifp, VAR_27);
 FUNC_28(VAR_33);
 FUNC_30(VAR_33);
 VAR_33->ifc_flags |= VAR_7;
 FUNC_3(VAR_33);

 return (0);

fail_detach:
 FUNC_17(VAR_33->ifc_ifp);
fail_intr_free:
 FUNC_32(VAR_33);
fail_queues:
 FUNC_41(VAR_33);
 FUNC_40(VAR_33);
 FUNC_47(VAR_28, &VAR_33->ifc_admin_task);
 FUNC_8(VAR_33);
fail_unlock:
 FUNC_3(VAR_33);
 FUNC_31(VAR_33);
fail_ctx_free:
 FUNC_15(VAR_33->ifc_dev, ((void*)0));
        if (VAR_33->ifc_flags & VAR_8)
                FUNC_18(VAR_33->ifc_softc, VAR_19);
        FUNC_18(VAR_33, VAR_19);
 return (VAR_38);
}
