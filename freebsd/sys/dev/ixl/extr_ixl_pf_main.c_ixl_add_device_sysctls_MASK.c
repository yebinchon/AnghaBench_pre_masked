
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct i40e_hw {int debug_mask; int device_id; } ;
struct ixl_pf {scalar_t__ has_i2c; int dbg_mask; struct i40e_hw hw; int dynamic_tx_itr; int dynamic_rx_itr; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ixl_pf*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;

void
FUNC_8(struct ixl_pf *VAR_47)
{
 device_t VAR_48 = VAR_47->dev;
 struct i40e_hw *VAR_49 = &VAR_47->hw;

 struct sysctl_ctx_list *VAR_50 = FUNC_5(VAR_48);
 struct sysctl_oid_list *VAR_51 =
     FUNC_4(FUNC_6(VAR_48));

 struct sysctl_oid *VAR_52;
 struct sysctl_oid_list *VAR_53;

 struct sysctl_oid *VAR_54;
 struct sysctl_oid_list *VAR_55;


 FUNC_2(VAR_50, VAR_51,
     VAR_14, "fc", VAR_4 | VAR_1,
     VAR_47, 0, VAR_40, "I", VAR_7);

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "advertise_speed", VAR_4 | VAR_1,
     VAR_47, 0, VAR_39, "I", VAR_11);

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "supported_speeds", VAR_4 | VAR_0,
     VAR_47, 0, VAR_42, "I", VAR_12);

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "current_speed", VAR_5 | VAR_0,
     VAR_47, 0, VAR_15, "A", "Current Port Speed");

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "fw_version", VAR_5 | VAR_0,
     VAR_47, 0, VAR_41, "A", "Firmware version");

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "unallocated_queues", VAR_4 | VAR_0,
     VAR_47, 0, VAR_45, "I",
     "Queues not allocated to a PF or VF");

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "tx_itr", VAR_4 | VAR_1,
     VAR_47, 0, VAR_34, "I",
     "Immediately set TX ITR value for all queues");

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "rx_itr", VAR_4 | VAR_1,
     VAR_47, 0, VAR_33, "I",
     "Immediately set RX ITR value for all queues");

 FUNC_0(VAR_50, VAR_51,
     VAR_14, "dynamic_rx_itr", VAR_1,
     &VAR_47->dynamic_rx_itr, 0, "Enable dynamic RX ITR");

 FUNC_0(VAR_50, VAR_51,
     VAR_14, "dynamic_tx_itr", VAR_1,
     &VAR_47->dynamic_tx_itr, 0, "Enable dynamic TX ITR");


 if (FUNC_7(VAR_49->device_id)) {
  VAR_54 = FUNC_1(VAR_50, VAR_51,
      VAR_14, "fec", VAR_0, ((void*)0), "FEC Sysctls");
  VAR_55 = FUNC_4(VAR_54);

  FUNC_2(VAR_50, VAR_55,
      VAR_14, "fc_ability", VAR_4 | VAR_1,
      VAR_47, 0, VAR_22, "I", "FC FEC ability enabled");

  FUNC_2(VAR_50, VAR_55,
      VAR_14, "rs_ability", VAR_4 | VAR_1,
      VAR_47, 0, VAR_24, "I", "RS FEC ability enabled");

  FUNC_2(VAR_50, VAR_55,
      VAR_14, "fc_requested", VAR_4 | VAR_1,
      VAR_47, 0, VAR_23, "I", "FC FEC mode requested on link");

  FUNC_2(VAR_50, VAR_55,
      VAR_14, "rs_requested", VAR_4 | VAR_1,
      VAR_47, 0, VAR_25, "I", "RS FEC mode requested on link");

  FUNC_2(VAR_50, VAR_55,
      VAR_14, "auto_fec_enabled", VAR_4 | VAR_1,
      VAR_47, 0, VAR_21, "I", "Let FW decide FEC ability/request modes");
 }

 FUNC_2(VAR_50, VAR_51,
     VAR_14, "fw_lldp", VAR_4 | VAR_1,
     VAR_47, 0, VAR_27, "I", VAR_8);



 VAR_52 = FUNC_1(VAR_50, VAR_51,
     VAR_14, "debug", VAR_0 | VAR_2, ((void*)0), "Debug Sysctls");
 VAR_53 = FUNC_4(VAR_52);

 FUNC_3(VAR_50, VAR_53,
     VAR_14, "shared_debug_mask", VAR_1,
     &VAR_47->hw.debug_mask, 0, "Shared code debug message level");

 FUNC_3(VAR_50, VAR_53,
     VAR_14, "core_debug_mask", VAR_1,
     &VAR_47->dbg_mask, 0, "Non-shared code debug message level");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "link_status", VAR_5 | VAR_0,
     VAR_47, 0, VAR_32, "A", VAR_9);

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "phy_abilities", VAR_5 | VAR_0,
     VAR_47, 0, VAR_35, "A", "PHY Abilities");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "filter_list", VAR_5 | VAR_0,
     VAR_47, 0, VAR_43, "A", "SW Filter List");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "hw_res_alloc", VAR_5 | VAR_0,
     VAR_47, 0, VAR_31, "A", "HW Resource Allocation");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "switch_config", VAR_5 | VAR_0,
     VAR_47, 0, VAR_44, "A", "HW Switch Configuration");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "rss_key", VAR_5 | VAR_0,
     VAR_47, 0, VAR_29, "A", "View RSS key");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "rss_lut", VAR_5 | VAR_0,
     VAR_47, 0, VAR_30, "A", "View RSS lookup table");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "rss_hena", VAR_6 | VAR_0,
     VAR_47, 0, VAR_28, "LU", "View enabled packet types for RSS");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "disable_fw_link_management", VAR_4 | VAR_3,
     VAR_47, 0, VAR_26, "I", "Disable FW Link Management");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "dump_debug_data", VAR_5 | VAR_0,
     VAR_47, 0, VAR_20, "A", "Dump Debug Data from FW");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "do_pf_reset", VAR_4 | VAR_3,
     VAR_47, 0, VAR_19, "I", "Tell HW to initiate a PF reset");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "do_core_reset", VAR_4 | VAR_3,
     VAR_47, 0, VAR_16, "I", "Tell HW to initiate a CORE reset");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "do_global_reset", VAR_4 | VAR_3,
     VAR_47, 0, VAR_18, "I", "Tell HW to initiate a GLOBAL reset");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "do_emp_reset", VAR_4 | VAR_3,
     VAR_47, 0, VAR_17, "I",
     "(This doesn't work) Tell HW to initiate a EMP (entire firmware) reset");

 FUNC_2(VAR_50, VAR_53,
     VAR_14, "queue_interrupt_table", VAR_5 | VAR_0,
     VAR_47, 0, VAR_36, "A", "View MSI-X indices for TX/RX queues");

 if (VAR_47->has_i2c) {
  FUNC_2(VAR_50, VAR_53,
      VAR_14, "read_i2c_byte", VAR_4 | VAR_1,
      VAR_47, 0, VAR_37, "I", VAR_10);

  FUNC_2(VAR_50, VAR_53,
      VAR_14, "write_i2c_byte", VAR_4 | VAR_1,
      VAR_47, 0, VAR_46, "I", VAR_13);

  FUNC_2(VAR_50, VAR_53,
      VAR_14, "read_i2c_diag_data", VAR_5 | VAR_0,
      VAR_47, 0, VAR_38, "A", "Dump selected diagnostic data from FW");
 }
}
