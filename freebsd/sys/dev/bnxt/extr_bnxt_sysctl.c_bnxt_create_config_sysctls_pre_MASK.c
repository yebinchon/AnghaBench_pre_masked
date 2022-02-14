
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bnxt_softc {int ctx; int dev; } ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bnxt_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int ,int ,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;

int
FUNC_6(struct bnxt_softc *VAR_17)
{
 struct sysctl_ctx_list *VAR_18 = FUNC_3(VAR_17->dev);
 struct sysctl_oid_list *VAR_19;

 VAR_19 = FUNC_2(FUNC_4(VAR_17->dev));;

 FUNC_0(VAR_18, VAR_19, VAR_4, "rss_key",
     VAR_3|VAR_1, VAR_17, 0, VAR_5, "A",
     "RSS key");
 FUNC_0(VAR_18, VAR_19, VAR_4, "rss_type",
     VAR_3|VAR_1, VAR_17, 0, VAR_6, "A",
     "RSS type bits");
 FUNC_0(VAR_18, VAR_19, VAR_4, "rx_stall",
     VAR_2|VAR_1, VAR_17, 0, VAR_7, "I",
     "buffer rx packets in hardware until the host posts new buffers");
 FUNC_0(VAR_18, VAR_19, VAR_4, "vlan_strip",
     VAR_2|VAR_1, VAR_17, 0, VAR_16, "I",
     "strip VLAN tag in the RX path");
 FUNC_1(VAR_18, VAR_19, VAR_4, "if_name", VAR_0,
  FUNC_5(VAR_17->ctx)->if_xname, 0, "interface name");

        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_rx_usecs",
                        VAR_2|VAR_1, VAR_17, 0, VAR_10,
   "I", "interrupt coalescing Rx Usecs");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_rx_frames",
                        VAR_2|VAR_1, VAR_17, 0, VAR_8,
   "I", "interrupt coalescing Rx Frames");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_rx_usecs_irq",
                        VAR_2|VAR_1, VAR_17, 0, VAR_11,
   "I", "interrupt coalescing Rx Usecs IRQ");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_rx_frames_irq",
                        VAR_2|VAR_1, VAR_17, 0, VAR_9,
   "I", "interrupt coalescing Rx Frames IRQ");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_tx_usecs",
                        VAR_2|VAR_1, VAR_17, 0, VAR_14,
   "I", "interrupt coalescing Tx Usces");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_tx_frames",
                        VAR_2|VAR_1, VAR_17, 0, VAR_12,
   "I", "interrupt coalescing Tx Frames");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_tx_usecs_irq",
                        VAR_2|VAR_1, VAR_17, 0, VAR_15,
   "I", "interrupt coalescing Tx Usecs IRQ");
        FUNC_0(VAR_18, VAR_19, VAR_4, "intr_coal_tx_frames_irq",
                        VAR_2|VAR_1, VAR_17, 0, VAR_13,
   "I", "interrupt coalescing Tx Frames IRQ");

 return 0;
}
