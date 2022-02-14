
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_1__ mac; } ;
struct adapter {int feat_cap; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct adapter*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_7(if_ctx_t VAR_22)
{
 struct adapter *VAR_23 = FUNC_6(VAR_22);
 device_t VAR_24 = FUNC_5(VAR_22);
 struct ixgbe_hw *VAR_25 = &VAR_23->hw;
 struct sysctl_oid_list *VAR_26;
 struct sysctl_ctx_list *VAR_27;

 VAR_27 = FUNC_3(VAR_24);
 VAR_26 = FUNC_2(FUNC_4(VAR_24));


 FUNC_1(VAR_27, VAR_26, VAR_10, "fc",
     VAR_2 | VAR_1, VAR_23, 0, VAR_15, "I",
     VAR_9);

 FUNC_1(VAR_27, VAR_26, VAR_10, "advertise_speed",
     VAR_2 | VAR_1, VAR_23, 0, VAR_12, "I",
     VAR_8);
 if (VAR_25->mac.type >= VAR_11)
  FUNC_1(VAR_27, VAR_26, VAR_10, "dmac",
      VAR_4 | VAR_1, VAR_23, 0, VAR_13,
      "I", "DMA Coalesce");


 if (VAR_25->device_id == VAR_6) {
  FUNC_1(VAR_27, VAR_26, VAR_10, "wol_enable",
      VAR_2 | VAR_1, VAR_23, 0,
      VAR_20, "I", "Enable/Disable Wake on LAN");

  FUNC_1(VAR_27, VAR_26, VAR_10, "wufc",
      VAR_5 | VAR_1, VAR_23, 0, VAR_21,
      "I", "Enable/Disable Wake Up Filters");
 }


 if (VAR_25->device_id == VAR_6) {
  struct sysctl_oid *VAR_28;
  struct sysctl_oid_list *VAR_29;

  VAR_28 = FUNC_0(VAR_27, VAR_26, VAR_10, "phy",
      VAR_0, ((void*)0), "External PHY sysctls");
  VAR_29 = FUNC_2(VAR_28);

  FUNC_1(VAR_27, VAR_29, VAR_10, "temp",
      VAR_4 | VAR_0, VAR_23, 0, VAR_17,
      "I", "Current External PHY Temperature (Celsius)");

  FUNC_1(VAR_27, VAR_29, VAR_10,
      "overtemp_occurred", VAR_4 | VAR_0, VAR_23, 0,
      VAR_16, "I",
      "External PHY High Temperature Event Occurred");
 }

 if (VAR_23->feat_cap & VAR_7) {
  FUNC_1(VAR_27, VAR_26, VAR_10, "eee_state",
      VAR_2 | VAR_1, VAR_23, 0,
      VAR_14, "I", "EEE Power Save State");
 }
}
