
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fw_ver_str; int pci_dev; } ;
typedef TYPE_1__ qla_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,scalar_t__*,scalar_t__,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_6(qla_host_t *VAR_12)
{
        device_t VAR_13 = VAR_12->pci_dev;

        FUNC_0(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "stats", VAR_2 | VAR_0,
                (void *)VAR_12, 0,
                VAR_7, "I", "Statistics");

 FUNC_1(FUNC_4(VAR_13),
  FUNC_3(FUNC_5(VAR_13)),
  VAR_3, "fw_version", VAR_0,
  VAR_12->fw_ver_str, 0, "firmware version");

 VAR_4 = 0;
        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "debug", VAR_1,
                &VAR_4, VAR_4, "Debug Level");

        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "std_replenish", VAR_1,
                &VAR_11, VAR_11,
                "Threshold for Replenishing Standard Frames");

        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "jumbo_replenish", VAR_1,
                &VAR_6, VAR_6,
                "Threshold for Replenishing Jumbo Frames");

        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "rcv_pkt_thres", VAR_1,
                &VAR_8, VAR_8,
                "Threshold for # of rcv pkts to trigger indication isr");

        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "rcv_pkt_thres_d", VAR_1,
                &VAR_9, VAR_9,
                "Threshold for # of rcv pkts to trigger indication defered");

        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "snd_pkt_thres", VAR_1,
                &VAR_10, VAR_10,
                "Threshold for # of snd packets");

        FUNC_2(FUNC_4(VAR_13),
                FUNC_3(FUNC_5(VAR_13)),
                VAR_3, "free_pkt_thres", VAR_1,
                &VAR_5, VAR_5,
                "Threshold for # of packets to free at a time");

        return;
}
