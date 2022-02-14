
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef TYPE_3__* if_ctx_t ;
typedef int device_t ;
struct TYPE_8__ {int isc_disable_msix; } ;
struct TYPE_9__ {int ifc_sysctl_separate_txrx; int ifc_sysctl_core_offset; int ifc_sysctl_tx_abdicate; int ifc_sysctl_rx_budget; TYPE_2__ ifc_softc_ctx; int ifc_sysctl_qs_eq_override; int ifc_sysctl_nrxqs; int ifc_sysctl_ntxqs; TYPE_1__* ifc_sctx; struct sysctl_oid* ifc_sysctl_node; } ;
struct TYPE_7__ {int isc_driver_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,TYPE_3__*,int ,int ,char*,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_6 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(if_ctx_t VAR_9)
{
        device_t VAR_10 = FUNC_9(VAR_9);
 struct sysctl_oid_list *VAR_11, *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 struct sysctl_oid *VAR_14;

 VAR_13 = FUNC_7(VAR_10);
 VAR_11 = FUNC_6(FUNC_8(VAR_10));
 VAR_9->ifc_sysctl_node = VAR_14 = FUNC_2(VAR_13, VAR_11, VAR_7, "iflib",
            VAR_1, ((void*)0), "IFLIB fields");
 VAR_12 = FUNC_6(VAR_14);

 FUNC_0(VAR_13, VAR_12, VAR_7, "driver_version",
         VAR_1, VAR_9->ifc_sctx->isc_driver_version,
         "driver version");

 FUNC_4(VAR_13, VAR_12, VAR_7, "override_ntxqs",
         VAR_3, &VAR_9->ifc_sysctl_ntxqs, 0,
   "# of txqs to use, 0 => use default #");
 FUNC_4(VAR_13, VAR_12, VAR_7, "override_nrxqs",
         VAR_3, &VAR_9->ifc_sysctl_nrxqs, 0,
   "# of rxqs to use, 0 => use default #");
 FUNC_4(VAR_13, VAR_12, VAR_7, "override_qs_enable",
         VAR_3, &VAR_9->ifc_sysctl_qs_eq_override, 0,
                       "permit #txq != #rxq");
 FUNC_1(VAR_13, VAR_12, VAR_7, "disable_msix",
                      VAR_3, &VAR_9->ifc_softc_ctx.isc_disable_msix, 0,
                      "disable MSI-X (default 0)");
 FUNC_4(VAR_13, VAR_12, VAR_7, "rx_budget",
         VAR_3, &VAR_9->ifc_sysctl_rx_budget, 0,
         "set the RX budget");
 FUNC_4(VAR_13, VAR_12, VAR_7, "tx_abdicate",
         VAR_3, &VAR_9->ifc_sysctl_tx_abdicate, 0,
         "cause TX to abdicate instead of running to completion");
 VAR_9->ifc_sysctl_core_offset = VAR_0;
 FUNC_4(VAR_13, VAR_12, VAR_7, "core_offset",
         VAR_2, &VAR_9->ifc_sysctl_core_offset, 0,
         "offset to start using cores at");
 FUNC_5(VAR_13, VAR_12, VAR_7, "separate_txrx",
         VAR_2, &VAR_9->ifc_sysctl_separate_txrx, 0,
         "use separate cores for TX and RX");


 FUNC_3(VAR_13, VAR_12, VAR_7, "override_ntxds",
         VAR_4|VAR_3, VAR_9, VAR_6,
                       VAR_8, "A",
         "list of # of TX descriptors to use, 0 = use default #");
 FUNC_3(VAR_13, VAR_12, VAR_7, "override_nrxds",
         VAR_4|VAR_3, VAR_9, VAR_5,
                       VAR_8, "A",
         "list of # of RX descriptors to use, 0 = use default #");
}
