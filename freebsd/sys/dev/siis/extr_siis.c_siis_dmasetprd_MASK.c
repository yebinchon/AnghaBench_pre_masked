
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int nsegs; int data_map; } ;
struct siis_slot {int slot; TYPE_7__* ccb; TYPE_5__ dma; int dev; } ;
struct siis_dma_prd {void* control; void* dbc; int dba; } ;
struct TYPE_11__ {struct siis_dma_prd* prd; } ;
struct TYPE_10__ {struct siis_dma_prd* prd; } ;
struct TYPE_12__ {TYPE_2__ atapi; TYPE_1__ ata; } ;
struct siis_cmd {TYPE_3__ u; } ;
struct TYPE_13__ {int data_tag; scalar_t__ work; } ;
struct siis_channel {TYPE_4__ dma; int sim; int recoverycmd; int mtx; } ;
struct TYPE_17__ {int ds_len; int ds_addr; } ;
typedef TYPE_8__ bus_dma_segment_t ;
struct TYPE_15__ {scalar_t__ func_code; int flags; } ;
struct TYPE_16__ {TYPE_6__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int ,int ) ;
 struct siis_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct siis_slot*,int ) ;
 int FUNC_8 (struct siis_slot*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_10, bus_dma_segment_t *VAR_11, int VAR_12, int VAR_13)
{
 struct siis_slot *VAR_14 = VAR_10;
 struct siis_channel *VAR_15 = FUNC_2(VAR_14->dev);
 struct siis_cmd *VAR_16;
 struct siis_dma_prd *VAR_17;
 int VAR_18;

 FUNC_6(&VAR_15->mtx, VAR_3);
 if (VAR_13) {
  FUNC_3(VAR_14->dev, "DMA load error\n");
  if (!VAR_15->recoverycmd)
   FUNC_9(VAR_15->sim, 1);
  FUNC_7(VAR_14, VAR_6);
  return;
 }
 FUNC_0(VAR_12 <= VAR_8, ("too many DMA segment entries\n"));
 VAR_14->dma.nsegs = VAR_12;
 if (VAR_12 != 0) {

  VAR_16 = (struct siis_cmd *)(VAR_15->dma.work + VAR_4 +
      (VAR_5 * VAR_14->slot));

  if (VAR_14->ccb->ccb_h.func_code == VAR_9)
   VAR_17 = &VAR_16->u.ata.prd[0];
  else
   VAR_17 = &VAR_16->u.atapi.prd[0];
  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
   VAR_17[VAR_18].dba = FUNC_5(VAR_11[VAR_18].ds_addr);
   VAR_17[VAR_18].dbc = FUNC_4(VAR_11[VAR_18].ds_len);
   VAR_17[VAR_18].control = 0;
  }
   VAR_17[VAR_12 - 1].control = FUNC_4(VAR_7);
  FUNC_1(VAR_15->dma.data_tag, VAR_14->dma.data_map,
      ((VAR_14->ccb->ccb_h.flags & VAR_2) ?
      VAR_0 : VAR_1));
 }
 FUNC_8(VAR_14);
}
