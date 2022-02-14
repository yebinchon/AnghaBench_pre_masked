
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbg_level; int enable_minidump; int enable_driverstate_dump; int enable_error_recovery; int ms_delay_after_init; int std_replenish; int hw_lock_failed; int hw_vlan_tx_frames; int tx_tso_frames; int ipv6_lro; int ipv4_lro; int fw_ver_str; int pci_dev; } ;
typedef TYPE_1__ qla_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int,int*,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(qla_host_t *VAR_7)
{
        device_t VAR_8 = VAR_7->pci_dev;

 FUNC_2(FUNC_5(VAR_8),
  FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "version", VAR_0,
  VAR_6, 0, "Driver Version");

        FUNC_2(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
                VAR_3, "fw_version", VAR_0,
                VAR_7->fw_ver_str, 0, "firmware version");

        FUNC_0(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
                VAR_3, "link_status", VAR_2 | VAR_1,
                (void *)VAR_7, 0,
                VAR_5, "I", "Link Status");

 VAR_7->dbg_level = 0;
        FUNC_3(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
                VAR_3, "debug", VAR_1,
                &VAR_7->dbg_level, VAR_7->dbg_level, "Debug Level");

 VAR_7->enable_minidump = 1;
 FUNC_3(FUNC_5(VAR_8),
  FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "enable_minidump", VAR_1,
  &VAR_7->enable_minidump, VAR_7->enable_minidump,
  "Minidump retrival prior to error recovery "
  "is enabled only when this is set");

 VAR_7->enable_driverstate_dump = 1;
 FUNC_3(FUNC_5(VAR_8),
  FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "enable_driverstate_dump", VAR_1,
  &VAR_7->enable_driverstate_dump, VAR_7->enable_driverstate_dump,
  "Driver State retrival prior to error recovery "
  "is enabled only when this is set");

 VAR_7->enable_error_recovery = 1;
 FUNC_3(FUNC_5(VAR_8),
  FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "enable_error_recovery", VAR_1,
  &VAR_7->enable_error_recovery, VAR_7->enable_error_recovery,
  "when set error recovery is enabled on fatal errors "
  "otherwise the port is turned offline");

 VAR_7->ms_delay_after_init = 1000;
 FUNC_3(FUNC_5(VAR_8),
  FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "ms_delay_after_init", VAR_1,
  &VAR_7->ms_delay_after_init, VAR_7->ms_delay_after_init,
  "millisecond delay after hw_init");

 VAR_7->std_replenish = VAR_4;
        FUNC_3(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
                VAR_3, "std_replenish", VAR_1,
                &VAR_7->std_replenish, VAR_7->std_replenish,
                "Threshold for Replenishing Standard Frames");

        FUNC_1(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
                VAR_3, "ipv4_lro",
                VAR_0, &VAR_7->ipv4_lro,
                "number of ipv4 lro completions");

        FUNC_1(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
                VAR_3, "ipv6_lro",
                VAR_0, &VAR_7->ipv6_lro,
                "number of ipv6 lro completions");

 FUNC_1(FUNC_5(VAR_8),
  FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "tx_tso_frames",
  VAR_0, &VAR_7->tx_tso_frames,
  "number of Tx TSO Frames");

 FUNC_1(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "hw_vlan_tx_frames",
  VAR_0, &VAR_7->hw_vlan_tx_frames,
  "number of Tx VLAN Frames");

 FUNC_1(FUNC_5(VAR_8),
                FUNC_4(FUNC_6(VAR_8)),
  VAR_3, "hw_lock_failed",
  VAR_0, &VAR_7->hw_lock_failed,
  "number of hw_lock failures");

        return;
}
