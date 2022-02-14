
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_slot {int flags; int quirks; scalar_t__ curcmd; struct mmc_request* req; } ;
struct mmc_request {scalar_t__ stop; TYPE_1__* cmd; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct sdhci_slot*) ;
 int FUNC_2 (struct sdhci_slot*,int ) ;
 int FUNC_3 (struct sdhci_slot*,TYPE_1__*) ;
 int FUNC_4 (struct sdhci_slot*,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct sdhci_slot *VAR_7)
{
 const struct mmc_request *VAR_8;

 VAR_8 = VAR_7->req;
 if (VAR_8 == ((void*)0))
  return;

 if (!(VAR_7->flags & VAR_0)) {
  VAR_7->flags |= VAR_0;
  FUNC_3(VAR_7, VAR_8->cmd);
  return;
 }
 if ((VAR_7->quirks & VAR_1) &&
     !(VAR_7->flags & VAR_5) && VAR_8->stop) {
  VAR_7->flags |= VAR_5;
  FUNC_3(VAR_7, VAR_8->stop);
  return;
 }
 if (FUNC_0(VAR_6 > 1))
  FUNC_4(VAR_7, "result: %d\n", VAR_8->cmd->error);
 if (!VAR_8->cmd->error &&
     ((VAR_7->curcmd == VAR_8->stop &&
      (VAR_7->quirks & VAR_1)) ||
      (VAR_7->quirks & VAR_2))) {
  FUNC_2(VAR_7, VAR_3);
  FUNC_2(VAR_7, VAR_4);
 }

 FUNC_1(VAR_7);
}
