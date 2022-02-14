
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct sdhci_slot {int intmask; int retune_req; TYPE_1__* curcmd; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_slot*,int ) ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
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
 int FUNC_2 (struct sdhci_slot*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct sdhci_slot*) ;
 int FUNC_4 (struct sdhci_slot*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct sdhci_slot*,int ) ;
 int FUNC_7 (struct sdhci_slot*,int) ;
 int FUNC_8 (struct sdhci_slot*,int) ;
 int VAR_17 ;
 int FUNC_9 (struct sdhci_slot*) ;
 int FUNC_10 (struct sdhci_slot*) ;
 int FUNC_11 (struct sdhci_slot*,int) ;
 int FUNC_12 (struct sdhci_slot*,char*,...) ;

void
FUNC_13(struct sdhci_slot *VAR_18)
{
 uint32_t VAR_19, VAR_20;
 uint16_t VAR_21;

 FUNC_2(VAR_18);

 VAR_19 = FUNC_1(VAR_18, VAR_12);
 if (VAR_19 == 0 || VAR_19 == 0xffffffff) {
  FUNC_3(VAR_18);
  return;
 }
 if (FUNC_5(VAR_17 > 2))
  FUNC_12(VAR_18, "Interrupt %#x\n", VAR_19);


 if (FUNC_5(VAR_19 & VAR_13)) {
  FUNC_4(VAR_18, VAR_12, VAR_13);
  FUNC_12(VAR_18, "Tuning error indicated\n");
  VAR_18->retune_req |= VAR_15;
  if (VAR_18->curcmd) {
   VAR_18->curcmd->error = VAR_0;
   FUNC_10(VAR_18);
  }
 }

 if (FUNC_5(VAR_19 & VAR_11))
  VAR_18->retune_req |= VAR_14;

 if (VAR_19 & (VAR_4 | VAR_5)) {
  VAR_20 = (VAR_19 & VAR_4) != 0;
  VAR_18->intmask &=
      ~(VAR_4 | VAR_5);
  VAR_18->intmask |= VAR_20 ? VAR_5 :
      VAR_4;
  FUNC_4(VAR_18, VAR_9, VAR_18->intmask);
  FUNC_4(VAR_18, VAR_16, VAR_18->intmask);
  FUNC_4(VAR_18, VAR_12, VAR_19 &
      (VAR_4 | VAR_5));
  FUNC_11(VAR_18, VAR_20);
 }

 if (VAR_19 & VAR_7) {
  FUNC_4(VAR_18, VAR_12, VAR_19 & VAR_7);
  FUNC_7(VAR_18, VAR_19 & VAR_7);
 }

 if (VAR_19 & VAR_8) {
  FUNC_4(VAR_18, VAR_12, VAR_19 & VAR_8);

  if ((VAR_19 & VAR_6) == 0)
   FUNC_8(VAR_18, VAR_19 & VAR_8);
 }

 if (VAR_19 & VAR_2) {

  VAR_21 = FUNC_0(VAR_18, VAR_1);
  FUNC_4(VAR_18, VAR_12, VAR_2);
  FUNC_6(VAR_18, VAR_21);
 }

 if (VAR_19 & VAR_3) {
  FUNC_4(VAR_18, VAR_12, VAR_3);
  FUNC_12(VAR_18, "Card is consuming too much power!\n");
 }
 VAR_19 &= ~(VAR_10 | VAR_13 | VAR_11 |
     VAR_4 | VAR_5 | VAR_7 |
     VAR_8 | VAR_2 | VAR_3);

 if (VAR_19) {
  FUNC_4(VAR_18, VAR_12, VAR_19);
  FUNC_12(VAR_18, "Unexpected interrupt 0x%08x.\n",
      VAR_19);
  FUNC_9(VAR_18);
 }

 FUNC_3(VAR_18);
}
