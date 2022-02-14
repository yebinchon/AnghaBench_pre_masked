
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_slot {TYPE_1__* curcmd; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_slot*) ;
 int FUNC_1 (struct sdhci_slot*) ;
 int FUNC_2 (struct sdhci_slot*,int) ;
 int FUNC_3 (struct sdhci_slot*,char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct sdhci_slot *VAR_4 = VAR_3;

 if (VAR_4->curcmd != ((void*)0)) {
  FUNC_3(VAR_4, "Controller timeout\n");
  FUNC_0(VAR_4);
  FUNC_2(VAR_4, VAR_1 | VAR_2);
  VAR_4->curcmd->error = VAR_0;
  FUNC_1(VAR_4);
 } else {
  FUNC_3(VAR_4, "Spurious timeout - no active command\n");
 }
}
