
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct sdhci_slot {int opt; int flags; int sdma_bbufsz; size_t offset; int intmask; int paddr; int bus; TYPE_2__* curcmd; int dmamap; int dmatag; int * dmamem; TYPE_1__* req; } ;
struct mmc_data {size_t len; int flags; scalar_t__ data; } ;
struct TYPE_4__ {int flags; scalar_t__ error; scalar_t__ opcode; struct mmc_data* data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,struct sdhci_slot*) ;
 int FUNC_1 (int ,struct sdhci_slot*,int*) ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (int ,struct sdhci_slot*) ;
 int VAR_22 ;
 int FUNC_3 (struct sdhci_slot*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (struct sdhci_slot*) ;
 int FUNC_8 (struct sdhci_slot*) ;
 int FUNC_9 (struct sdhci_slot*) ;
 int FUNC_10 (struct sdhci_slot*) ;
 int FUNC_11 (struct sdhci_slot*,char*,int) ;
 int FUNC_12 (size_t,int) ;

__attribute__((used)) static void
FUNC_13(struct sdhci_slot *VAR_23, uint32_t VAR_24)
{
 struct mmc_data *VAR_25;
 size_t VAR_26;
 uint32_t VAR_27;

 if (!VAR_23->curcmd) {
  FUNC_11(VAR_23, "Got data interrupt 0x%08x, but "
      "there is no active command.\n", VAR_24);
  FUNC_7(VAR_23);
  return;
 }
 if (VAR_23->curcmd->data == ((void*)0) &&
     (VAR_23->curcmd->flags & VAR_8) == 0) {
  FUNC_11(VAR_23, "Got data interrupt 0x%08x, but "
      "there is no active data operation.\n",
      VAR_24);
  FUNC_7(VAR_23);
  return;
 }
 if (VAR_24 & VAR_18)
  VAR_23->curcmd->error = VAR_7;
 else if (VAR_24 & (VAR_15 | VAR_17))
  VAR_23->curcmd->error = VAR_5;
 if (VAR_23->curcmd->data == ((void*)0) &&
     (VAR_24 & (VAR_14 | VAR_20 |
     VAR_19))) {
  FUNC_11(VAR_23, "Got data interrupt 0x%08x, but "
      "there is busy-only command.\n", VAR_24);
  FUNC_7(VAR_23);
  VAR_23->curcmd->error = VAR_6;
 }
 if (VAR_23->curcmd->error) {

  goto done;
 }


 if (FUNC_4((VAR_24 & VAR_14) &&
     (VAR_23->curcmd->opcode == VAR_9 ||
     VAR_23->curcmd->opcode == VAR_10))) {
  VAR_23->req->flags |= VAR_11;
  FUNC_8(VAR_23);
  FUNC_9(VAR_23);
  return;
 }

 if (VAR_24 & (VAR_14 | VAR_20)) {
  if ((VAR_23->opt & VAR_21) &&
      FUNC_2(VAR_23->bus, VAR_23)) {
   FUNC_1(VAR_23->bus, VAR_23,
       &VAR_24);
   VAR_23->flags |= VAR_12;
  } else
   FUNC_10(VAR_23);
 }

 if (VAR_24 & VAR_19) {
  VAR_25 = VAR_23->curcmd->data;
  VAR_27 = VAR_23->sdma_bbufsz;


  VAR_26 = VAR_25->len - VAR_23->offset;
  if (VAR_25->flags & VAR_4) {
   FUNC_5(VAR_23->dmatag, VAR_23->dmamap,
       VAR_0);
   FUNC_6((u_char*)VAR_25->data + VAR_23->offset, VAR_23->dmamem,
       FUNC_12(VAR_26, VAR_27));
  } else {
   FUNC_5(VAR_23->dmatag, VAR_23->dmamap,
       VAR_1);
  }

  VAR_23->offset += VAR_27;
  VAR_26 = VAR_25->len - VAR_23->offset;
  if (VAR_25->flags & VAR_4) {
   FUNC_5(VAR_23->dmatag, VAR_23->dmamap,
       VAR_2);
  } else {
   FUNC_6(VAR_23->dmamem, (u_char*)VAR_25->data + VAR_23->offset,
       FUNC_12(VAR_26, VAR_27));
   FUNC_5(VAR_23->dmatag, VAR_23->dmamap,
       VAR_3);
  }




  if (VAR_26 == VAR_27) {
   VAR_23->intmask &= ~VAR_19;
   FUNC_3(VAR_23, VAR_22, VAR_23->intmask);
  }

  FUNC_3(VAR_23, VAR_13, VAR_23->paddr);
 }

 if (VAR_24 & VAR_16) {
  if (VAR_23->flags & VAR_12) {
   VAR_23->flags &= ~VAR_12;
   FUNC_0(VAR_23->bus, VAR_23);
  } else
   FUNC_9(VAR_23);
 }
done:
 if (VAR_23->curcmd != ((void*)0) && VAR_23->curcmd->error != 0) {
  if (VAR_23->flags & VAR_12) {
   VAR_23->flags &= ~VAR_12;
   FUNC_0(VAR_23->bus, VAR_23);
  } else
   FUNC_9(VAR_23);
 }
}
