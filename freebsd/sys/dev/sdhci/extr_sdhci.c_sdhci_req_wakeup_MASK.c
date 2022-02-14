
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int dummy; } ;
struct mmc_request {int flags; struct sdhci_slot* done_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_request*) ;

__attribute__((used)) static void
FUNC_1(struct mmc_request *VAR_1)
{
 struct sdhci_slot *VAR_2;

 VAR_2 = VAR_1->done_data;
 VAR_1->flags |= VAR_0;
 FUNC_0(VAR_1);
}
