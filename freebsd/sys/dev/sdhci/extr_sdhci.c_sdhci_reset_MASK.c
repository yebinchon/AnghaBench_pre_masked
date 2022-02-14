
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct sdhci_slot {int quirks; scalar_t__ power; scalar_t__ clock; int bus; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
 int FUNC_2 (int ,struct sdhci_slot*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct sdhci_slot*,int ,int) ;
 int FUNC_4 (struct sdhci_slot*) ;
 int FUNC_5 (struct sdhci_slot*,scalar_t__) ;
 int FUNC_6 (struct sdhci_slot*,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct sdhci_slot *VAR_5, uint8_t VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;

 if (VAR_5->quirks & VAR_1) {
  if (!FUNC_2(VAR_5->bus, VAR_5))
   return;
 }


 if ((VAR_6 & VAR_3) == 0 &&
     (VAR_5->quirks & VAR_0)) {

  VAR_8 = VAR_5->clock;
  VAR_5->clock = 0;
  FUNC_5(VAR_5, VAR_8);
 }

 if (VAR_6 & VAR_3) {
  VAR_5->clock = 0;
  VAR_5->power = 0;
 }

 FUNC_3(VAR_5, VAR_4, VAR_6);

 if (VAR_5->quirks & VAR_2) {
  VAR_7 = 10000;
  while ((FUNC_1(VAR_5, VAR_4) & VAR_6) != VAR_6) {
   if (VAR_7 <= 0)
    break;
   VAR_7--;
   FUNC_0(1);
  }
 }


 VAR_7 = 10000;

 while (FUNC_1(VAR_5, VAR_4) & VAR_6) {
  if (VAR_7 <= 0) {
   FUNC_6(VAR_5, "Reset 0x%x never completed.\n",
       VAR_6);
   FUNC_4(VAR_5);
   return;
  }
  VAR_7--;
  FUNC_0(10);
 }
}
