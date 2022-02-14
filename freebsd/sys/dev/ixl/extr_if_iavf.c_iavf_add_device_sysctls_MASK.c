
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ixl_vsi {int dummy; } ;
struct TYPE_2__ {int debug_mask; } ;
struct iavf_sc {int dbg_mask; TYPE_1__ hw; int dev; struct ixl_vsi vsi; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct iavf_sc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,struct ixl_vsi*) ;
 int FUNC_7 (int ,struct ixl_vsi*,struct sysctl_ctx_list*,char*) ;

__attribute__((used)) static void
FUNC_8(struct iavf_sc *VAR_14)
{
 struct ixl_vsi *VAR_15 = &VAR_14->vsi;
 device_t VAR_16 = VAR_14->dev;

 struct sysctl_ctx_list *VAR_17 = FUNC_4(VAR_16);
 struct sysctl_oid_list *VAR_18 =
     FUNC_3(FUNC_5(VAR_16));
 struct sysctl_oid *VAR_19;
 struct sysctl_oid_list *VAR_20;

 FUNC_1(VAR_17, VAR_18,
     VAR_6, "current_speed", VAR_5 | VAR_0,
     VAR_14, 0, VAR_7, "A", "Current Port Speed");

 FUNC_1(VAR_17, VAR_18,
     VAR_6, "tx_itr", VAR_4 | VAR_1,
     VAR_14, 0, VAR_11, "I",
     "Immediately set TX ITR value for all queues");

 FUNC_1(VAR_17, VAR_18,
     VAR_6, "rx_itr", VAR_4 | VAR_1,
     VAR_14, 0, VAR_9, "I",
     "Immediately set RX ITR value for all queues");



 VAR_19 = FUNC_0(VAR_17, VAR_18,
     VAR_6, "debug", VAR_0 | VAR_2, ((void*)0), "Debug Sysctls");
 VAR_20 = FUNC_3(VAR_19);

 FUNC_2(VAR_17, VAR_20,
     VAR_6, "shared_debug_mask", VAR_1,
     &VAR_14->hw.debug_mask, 0, "Shared code debug message level");

 FUNC_2(VAR_17, VAR_20,
     VAR_6, "core_debug_mask", VAR_1,
     &VAR_14->dbg_mask, 0, "Non-shared code debug message level");

 FUNC_1(VAR_17, VAR_20,
     VAR_6, "filter_list", VAR_5 | VAR_0,
     VAR_14, 0, VAR_10, "A", "SW Filter List");

 FUNC_1(VAR_17, VAR_20,
     VAR_6, "queue_interrupt_table", VAR_5 | VAR_0,
     VAR_14, 0, VAR_8, "A", "View MSI-X indices for TX/RX queues");

 FUNC_1(VAR_17, VAR_20,
     VAR_6, "do_vf_reset", VAR_4 | VAR_3,
     VAR_14, 0, VAR_12, "A", "Request a VF reset from PF");

 FUNC_1(VAR_17, VAR_20,
     VAR_6, "do_vflr_reset", VAR_4 | VAR_3,
     VAR_14, 0, VAR_13, "A", "Request a VFLR reset from HW");


 FUNC_7(VAR_16, VAR_15, VAR_17, "vsi");
 FUNC_6(VAR_16, VAR_15);

}
