
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpt_softc {int is_fc; int is_1078; int is_sas; int is_spi; scalar_t__ verbose; scalar_t__ disabled; int * eh; int ih; int * pci_irq; scalar_t__ msi_enable; int * pci_reg; void* pci_sh; void* pci_st; void* pci_pio_sh; void* pci_pio_st; int * pci_pio_reg; int mpt_ini_id; int role; int raid_queue_depth; int raid_mwce_setting; int raid_resync_rate; int unit; int dev; } ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mpt_softc*) ;
 int FUNC_2 (struct mpt_softc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 void* FUNC_6 (int ,int ,int*,int) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int *,int ,struct mpt_softc*,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (struct mpt_softc*) ;
 int FUNC_12 (struct mpt_softc*) ;
 int FUNC_13 (struct mpt_softc*) ;
 scalar_t__ FUNC_14 (struct mpt_softc*) ;
 int FUNC_15 (struct mpt_softc*) ;
 int FUNC_16 (struct mpt_softc*) ;
 int FUNC_17 (struct mpt_softc*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_18 (struct mpt_softc*,char*) ;
 int FUNC_19 (struct mpt_softc*) ;
 int FUNC_20 (struct mpt_softc*) ;
 int FUNC_21 (struct mpt_softc*,int ) ;
 int FUNC_22 (struct mpt_softc*) ;
 int FUNC_23 (struct mpt_softc*) ;
 scalar_t__ FUNC_24 (int ,int*) ;
 scalar_t__ FUNC_25 (int ,int*) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,int,int) ;
 int FUNC_29 (int ,int,int,int) ;
 void* FUNC_30 (int *) ;
 void* FUNC_31 (int *) ;
 int VAR_25 ;

__attribute__((used)) static int
FUNC_32(device_t VAR_26)
{
 struct mpt_softc *VAR_27;
 int VAR_28;
 uint32_t VAR_29;
 int VAR_30, VAR_31;

 VAR_27 = (struct mpt_softc*)FUNC_8(VAR_26);

 switch (FUNC_27(VAR_26)) {
 case 151:
 case 152:
 case 150:
 case 147:
 case 146:
 case 143:
 case 145:
 case 144:
 case 149:
 case 148:
 case 142:
 case 141:
  VAR_27->is_fc = 1;
  break;
 case 129:
 case 128:
  VAR_27->is_1078 = 1;

 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_27->is_sas = 1;
  break;
 default:
  VAR_27->is_spi = 1;
  break;
 }
 VAR_27->dev = VAR_26;
 VAR_27->unit = FUNC_9(VAR_26);
 VAR_27->raid_resync_rate = VAR_7;
 VAR_27->raid_mwce_setting = VAR_5;
 VAR_27->raid_queue_depth = VAR_6;
 VAR_27->verbose = VAR_3;
 VAR_27->role = VAR_8;
 VAR_27->mpt_ini_id = VAR_2;




 FUNC_22(VAR_27);
 if (VAR_27->verbose == VAR_3) {
  VAR_27->verbose = VAR_4;

  VAR_27->verbose += (VAR_22 != 0)? 1 : 0;
 }




 VAR_29 = FUNC_28(VAR_26, VAR_15, 2);
 VAR_29 |= VAR_13 | VAR_12 |
     VAR_10 | VAR_11;
 FUNC_29(VAR_26, VAR_15, VAR_29, 2);




 VAR_29 = FUNC_28(VAR_26, VAR_14, 4);
 VAR_29 &= ~VAR_9;
 FUNC_29(VAR_26, VAR_14, VAR_29, 4);
 VAR_29 = FUNC_28(VAR_26, FUNC_4(0), 4);
 if (FUNC_5(VAR_29)) {

  VAR_30 = 0;
  VAR_31 = 1;
 } else {

  VAR_31 = 0;
  VAR_30 = 1;
 }






 VAR_30 = FUNC_4(VAR_30);
 VAR_27->pci_pio_reg = FUNC_6(VAR_26, VAR_19,
     &VAR_30, VAR_16);
 if (VAR_27->pci_pio_reg == ((void*)0)) {
  if (VAR_22) {
   FUNC_10(VAR_26,
       "unable to map registers in PIO mode\n");
  }
 } else {
  VAR_27->pci_pio_st = FUNC_31(VAR_27->pci_pio_reg);
  VAR_27->pci_pio_sh = FUNC_30(VAR_27->pci_pio_reg);
 }

 VAR_31 = FUNC_4(VAR_31);
 VAR_27->pci_reg = FUNC_6(VAR_26, VAR_21,
     &VAR_31, VAR_16);
 if (VAR_27->pci_reg == ((void*)0)) {
  if (VAR_22 || VAR_27->is_sas || VAR_27->pci_pio_reg == ((void*)0)) {
   FUNC_10(VAR_26,
       "Unable to memory map registers.\n");
  }
  if (VAR_27->is_sas || VAR_27->pci_pio_reg == ((void*)0)) {
   FUNC_10(VAR_26, "Giving Up.\n");
   goto bad;
  }
  if (VAR_22) {
   FUNC_10(VAR_26, "Falling back to PIO mode.\n");
  }
  VAR_27->pci_st = VAR_27->pci_pio_st;
  VAR_27->pci_sh = VAR_27->pci_pio_sh;
 } else {
  VAR_27->pci_st = FUNC_31(VAR_27->pci_reg);
  VAR_27->pci_sh = FUNC_30(VAR_27->pci_reg);
 }


 VAR_28 = 0;
 if (VAR_27->msi_enable) {




  VAR_29 = 1;
  if (FUNC_25(VAR_26, &VAR_29) == 0)
   VAR_28 = 1;
  VAR_29 = 1;
  if (VAR_28 == 0 && FUNC_24(VAR_26, &VAR_29) == 0)
   VAR_28 = 1;
 }
 VAR_27->pci_irq = FUNC_6(VAR_26, VAR_20, &VAR_28,
     VAR_16 | (VAR_28 != 0 ? 0 : VAR_17));
 if (VAR_27->pci_irq == ((void*)0)) {
  FUNC_10(VAR_26, "could not allocate interrupt\n");
  goto bad;
 }

 FUNC_2(VAR_27);


 FUNC_13(VAR_27);


 if (FUNC_7(VAR_26, VAR_27->pci_irq, VAR_1, ((void*)0), VAR_23,
     VAR_27, &VAR_27->ih)) {
  FUNC_10(VAR_26, "could not setup interrupt\n");
  goto bad;
 }


 if (FUNC_14(VAR_27)) {
  FUNC_18(VAR_27, "Could not allocate DMA memory\n");
  goto bad;
 }
 if (VAR_27->is_sas) {
  FUNC_26(VAR_26, VAR_19);
 }


 if (VAR_27->disabled == 0) {
  if (FUNC_11(VAR_27) != 0) {
   goto bad;
  }
 } else {
  FUNC_18(VAR_27, "device disabled at user request\n");
  goto bad;
 }

 VAR_27->eh = FUNC_0(VAR_25, VAR_24,
     VAR_26, VAR_18);

 if (VAR_27->eh == ((void*)0)) {
  FUNC_18(VAR_27, "shutdown event registration failed\n");
  FUNC_13(VAR_27);
  (void) FUNC_12(VAR_27);
  FUNC_21(VAR_27, VAR_0);
  FUNC_19(VAR_27);
  goto bad;
 }
 return (0);

bad:
 FUNC_15(VAR_27);
 FUNC_16(VAR_27);




 FUNC_1(VAR_27);




 return (0);
}
