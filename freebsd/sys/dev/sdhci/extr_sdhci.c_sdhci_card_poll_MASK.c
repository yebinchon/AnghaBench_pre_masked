
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int card_poll_callout; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sdhci_slot*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct sdhci_slot*) ;
 int FUNC_2 (struct sdhci_slot*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct sdhci_slot *VAR_2 = VAR_1;

 FUNC_2(VAR_2,
     FUNC_0(VAR_2->bus, VAR_2));
 FUNC_1(&VAR_2->card_poll_callout, VAR_0,
     FUNC_3, VAR_2);
}
