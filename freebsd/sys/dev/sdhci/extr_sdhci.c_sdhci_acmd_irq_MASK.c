
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sdhci_slot {int curcmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_slot*) ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
 int FUNC_2 (struct sdhci_slot*,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct sdhci_slot *VAR_1, uint16_t VAR_2)
{

 if (!VAR_1->curcmd) {
  FUNC_2(VAR_1, "Got AutoCMD12 error 0x%04x, but "
      "there is no active command.\n", VAR_2);
  FUNC_0(VAR_1);
  return;
 }
 FUNC_2(VAR_1, "Got AutoCMD12 error 0x%04x\n", VAR_2);
 FUNC_1(VAR_1, VAR_0);
}
