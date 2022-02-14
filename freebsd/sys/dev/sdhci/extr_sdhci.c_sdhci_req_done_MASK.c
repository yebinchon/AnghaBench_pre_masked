
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int * curcmd; struct mmc_request* req; int timeout_callout; } ;
struct mmc_request {int (* done ) (struct mmc_request*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mmc_request*) ;

__attribute__((used)) static void
FUNC_2(struct sdhci_slot *VAR_0)
{
 struct mmc_request *VAR_1;

 if (VAR_0->req != ((void*)0) && VAR_0->curcmd != ((void*)0)) {
  FUNC_0(&VAR_0->timeout_callout);
  VAR_1 = VAR_0->req;
  VAR_0->req = ((void*)0);
  VAR_0->curcmd = ((void*)0);
  VAR_1->done(VAR_1);
 }
}
