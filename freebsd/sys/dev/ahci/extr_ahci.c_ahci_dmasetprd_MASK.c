
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nsegs; int data_map; } ;
struct ahci_slot {int slot; TYPE_4__* ccb; TYPE_2__ dma; struct ahci_channel* ch; } ;
struct ahci_dma_prd {int dbc; int dba; } ;
struct ahci_cmd_tab {struct ahci_dma_prd* prd_tab; } ;
struct TYPE_7__ {int data_tag; scalar_t__ work; } ;
struct ahci_channel {TYPE_1__ dma; int dev; } ;
struct TYPE_11__ {int ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_3__ ccb_h; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ahci_slot*,int ) ;
 int FUNC_2 (struct ahci_slot*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8, bus_dma_segment_t *VAR_9, int VAR_10, int VAR_11)
{
 struct ahci_slot *VAR_12 = VAR_8;
 struct ahci_channel *VAR_13 = VAR_12->ch;
 struct ahci_cmd_tab *VAR_14;
 struct ahci_dma_prd *VAR_15;
 int VAR_16;

 if (VAR_11) {
  FUNC_4(VAR_13->dev, "DMA load error\n");
  FUNC_1(VAR_12, VAR_2);
  return;
 }
 FUNC_0(VAR_10 <= VAR_4, ("too many DMA segment entries\n"));

 VAR_14 = (struct ahci_cmd_tab *)
  (VAR_13->dma.work + VAR_0 + (VAR_1 * VAR_12->slot));

 VAR_15 = &VAR_14->prd_tab[0];
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_15[VAR_16].dba = FUNC_6(VAR_9[VAR_16].ds_addr);
  VAR_15[VAR_16].dbc = FUNC_5((VAR_9[VAR_16].ds_len - 1) & VAR_3);
 }
 VAR_12->dma.nsegs = VAR_10;
 FUNC_3(VAR_13->dma.data_tag, VAR_12->dma.data_map,
     ((VAR_12->ccb->ccb_h.flags & VAR_7) ?
     VAR_5 : VAR_6));
 FUNC_2(VAR_12);
}
