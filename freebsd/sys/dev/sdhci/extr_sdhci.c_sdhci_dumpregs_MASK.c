
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int dummy; } ;


 int FUNC_0 (struct sdhci_slot*,int ) ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
 int FUNC_2 (struct sdhci_slot*,int ) ;
 int VAR_0 ;
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
 int VAR_11 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct sdhci_slot*,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct sdhci_slot *VAR_24)
{

 FUNC_3(VAR_24,
     "============== REGISTER DUMP ==============\n");

 FUNC_3(VAR_24, "Sys addr: 0x%08x | Version:  0x%08x\n",
     FUNC_2(VAR_24, VAR_10), FUNC_1(VAR_24, VAR_13));
 FUNC_3(VAR_24, "Blk size: 0x%08x | Blk cnt:  0x%08x\n",
     FUNC_1(VAR_24, VAR_6), FUNC_1(VAR_24, VAR_4));
 FUNC_3(VAR_24, "Argument: 0x%08x | Trn mode: 0x%08x\n",
     FUNC_2(VAR_24, VAR_3), FUNC_1(VAR_24, VAR_22));
 FUNC_3(VAR_24, "Present:  0x%08x | Host ctl: 0x%08x\n",
     FUNC_2(VAR_24, VAR_18), FUNC_0(VAR_24, VAR_11));
 FUNC_3(VAR_24, "Power:    0x%08x | Blk gap:  0x%08x\n",
     FUNC_0(VAR_24, VAR_17), FUNC_0(VAR_24, VAR_5));
 FUNC_3(VAR_24, "Wake-up:  0x%08x | Clock:    0x%08x\n",
     FUNC_0(VAR_24, VAR_23), FUNC_1(VAR_24, VAR_9));
 FUNC_3(VAR_24, "Timeout:  0x%08x | Int stat: 0x%08x\n",
     FUNC_0(VAR_24, VAR_21), FUNC_2(VAR_24, VAR_15));
 FUNC_3(VAR_24, "Int enab: 0x%08x | Sig enab: 0x%08x\n",
     FUNC_2(VAR_24, VAR_14), FUNC_2(VAR_24, VAR_19));
 FUNC_3(VAR_24, "AC12 err: 0x%08x | Host ctl2:0x%08x\n",
     FUNC_1(VAR_24, VAR_0), FUNC_1(VAR_24, VAR_12));
 FUNC_3(VAR_24, "Caps:     0x%08x | Caps2:    0x%08x\n",
     FUNC_2(VAR_24, VAR_7), FUNC_2(VAR_24, VAR_8));
 FUNC_3(VAR_24, "Max curr: 0x%08x | ADMA err: 0x%08x\n",
     FUNC_2(VAR_24, VAR_16), FUNC_0(VAR_24, VAR_2));
 FUNC_3(VAR_24, "ADMA addr:0x%08x | Slot int: 0x%08x\n",
     FUNC_2(VAR_24, VAR_1), FUNC_1(VAR_24, VAR_20));

 FUNC_3(VAR_24,
     "===========================================\n");
}
