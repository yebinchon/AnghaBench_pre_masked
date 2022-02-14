
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sdhci_slot {TYPE_1__* curcmd; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sdhci_slot*) ;
 int FUNC_1 (struct sdhci_slot*) ;
 int FUNC_2 (struct sdhci_slot*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct sdhci_slot *VAR_7, uint32_t VAR_8)
{

 if (!VAR_7->curcmd) {
  FUNC_2(VAR_7, "Got command interrupt 0x%08x, but "
      "there is no active command.\n", VAR_8);
  FUNC_0(VAR_7);
  return;
 }
 if (VAR_8 & VAR_6)
  VAR_7->curcmd->error = VAR_2;
 else if (VAR_8 & VAR_3)
  VAR_7->curcmd->error = VAR_0;
 else if (VAR_8 & (VAR_4 | VAR_5))
  VAR_7->curcmd->error = VAR_1;

 FUNC_1(VAR_7);
}
