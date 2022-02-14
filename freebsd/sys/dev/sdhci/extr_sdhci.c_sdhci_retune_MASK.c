
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int retune_req; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1)
{
 struct sdhci_slot *VAR_2 = VAR_1;

 VAR_2->retune_req |= VAR_0;
}
