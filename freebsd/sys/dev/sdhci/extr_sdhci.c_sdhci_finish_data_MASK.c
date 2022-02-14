
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sdhci_slot {int data_done; int flags; size_t offset; scalar_t__ cmd_done; int retune_req; TYPE_1__* curcmd; int dmamap; int dmatag; int sdma_bbufsz; int dmamem; int intmask; } ;
struct mmc_data {int flags; size_t len; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ error; struct mmc_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sdhci_slot*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct sdhci_slot*,int ) ;
 int FUNC_4 (struct sdhci_slot*) ;
 int FUNC_5 (size_t,int ) ;

void
FUNC_6(struct sdhci_slot *VAR_10)
{
 struct mmc_data *VAR_11 = VAR_10->curcmd->data;
 size_t VAR_12;




 if (!VAR_10->cmd_done) {
  FUNC_0(VAR_10, VAR_8,
      VAR_10->intmask |= VAR_4);
 }

 if (!VAR_10->data_done && (VAR_10->flags & VAR_9) &&
     VAR_10->curcmd->data != ((void*)0)) {
  if (VAR_11->flags & VAR_2) {
   VAR_12 = VAR_11->len - VAR_10->offset;
   FUNC_1(VAR_10->dmatag, VAR_10->dmamap,
       VAR_0);
   FUNC_2((u_char*)VAR_11->data + VAR_10->offset, VAR_10->dmamem,
       FUNC_5(VAR_12, VAR_10->sdma_bbufsz));
  } else
   FUNC_1(VAR_10->dmatag, VAR_10->dmamap,
       VAR_1);
 }
 VAR_10->data_done = 1;

 if (VAR_10->curcmd->error) {
  if (VAR_10->curcmd->error == VAR_3)
   VAR_10->retune_req |= VAR_7;
  FUNC_3(VAR_10, VAR_5);
  FUNC_3(VAR_10, VAR_6);
  FUNC_4(VAR_10);
  return;
 }

 if (VAR_10->cmd_done)
  FUNC_4(VAR_10);
}
