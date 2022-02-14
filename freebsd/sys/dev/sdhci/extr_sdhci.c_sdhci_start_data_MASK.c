
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sdhci_slot {int data_done; int quirks; int timeout_clk; int opt; int flags; int sdma_bbufsz; int sdma_boundary; scalar_t__ offset; int intmask; int paddr; int dmamap; int dmatag; int dmamem; TYPE_1__* curcmd; } ;
struct mmc_data {int len; int flags; int block_count; int block_size; int data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct sdhci_slot*,int ,int) ;
 int FUNC_2 (struct sdhci_slot*,int ,int) ;
 int FUNC_3 (struct sdhci_slot*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_17 ;
 int FUNC_8 (struct sdhci_slot*,char*,int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(struct sdhci_slot *VAR_18, const struct mmc_data *VAR_19)
{
 uint32_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 uint8_t VAR_25;

 if (VAR_19 == ((void*)0) && (VAR_18->curcmd->flags & VAR_4) == 0) {
  VAR_18->data_done = 1;
  return;
 }

 VAR_18->data_done = 0;



 if (VAR_18->quirks & VAR_11) {
  VAR_25 = 0xE;
 } else {
  VAR_24 = 1000000;
  VAR_25 = 0;
  VAR_22 = (1 << 13) * 1000 / VAR_18->timeout_clk;
  while (VAR_22 < VAR_24 && VAR_25 < 0xE) {
   ++VAR_25;
   VAR_22 <<= 1;
  }

  if (VAR_25 < 0xE &&
      (VAR_18->quirks & VAR_13)) {
   ++VAR_25;
  }
 }
 FUNC_1(VAR_18, VAR_15, VAR_25);

 if (VAR_19 == ((void*)0))
  return;


 if ((VAR_18->opt & VAR_8))
  VAR_18->flags |= VAR_16;

 if ((VAR_18->quirks & VAR_12) &&
     (VAR_19->len <= 512))
  VAR_18->flags &= ~VAR_16;

 if ((VAR_18->quirks & VAR_10) &&
     ((VAR_19->len) & 0x3))
  VAR_18->flags &= ~VAR_16;

 if (VAR_18->flags & VAR_16) {
  VAR_23 = VAR_18->sdma_bbufsz;
  if (VAR_19->flags & VAR_3)
   FUNC_5(VAR_18->dmatag, VAR_18->dmamap,
       VAR_0);
  else {
   FUNC_7(VAR_18->dmamem, VAR_19->data, FUNC_9(VAR_19->len,
       VAR_23));
   FUNC_5(VAR_18->dmatag, VAR_18->dmamap,
       VAR_1);
  }
  FUNC_3(VAR_18, VAR_7, VAR_18->paddr);




  if (VAR_19->len == VAR_23)
   VAR_18->intmask &= ~VAR_9;
  else
   VAR_18->intmask |= VAR_9;
  FUNC_3(VAR_18, VAR_14, VAR_18->intmask);
 }

 VAR_18->offset = 0;
 {

  VAR_21 = FUNC_0(VAR_18->sdma_boundary, FUNC_9(VAR_19->len, 512));
  VAR_20 = FUNC_6(VAR_19->len, 512);
 }

 FUNC_2(VAR_18, VAR_6, VAR_21);
 FUNC_2(VAR_18, VAR_5, VAR_20);
 if (FUNC_4(VAR_17 > 1))
  FUNC_8(VAR_18, "Blk size: 0x%08x | Blk cnt:  0x%08x\n",
      VAR_21, VAR_20);
}
