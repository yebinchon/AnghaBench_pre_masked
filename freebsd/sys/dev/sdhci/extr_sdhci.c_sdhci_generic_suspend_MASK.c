
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int opt; int retune_callout; } ;


 int FUNC_0 (struct sdhci_slot*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sdhci_slot*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sdhci_slot*,int ) ;

int
FUNC_4(struct sdhci_slot *VAR_2)
{






 FUNC_2(&VAR_2->retune_callout);
 FUNC_0(VAR_2);
 VAR_2->opt &= ~VAR_1;
 FUNC_3(VAR_2, VAR_0);
 FUNC_1(VAR_2);

 return (0);
}
