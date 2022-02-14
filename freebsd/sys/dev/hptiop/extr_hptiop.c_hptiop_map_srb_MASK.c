
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct hpt_iop_srb {int index; int phy_addr; int timeout; int srb_flag; struct hpt_iop_hba* hba; int dma_map; } ;
struct hpt_iop_hba {scalar_t__ ctlcfg_ptr; int pcidev; struct hpt_iop_srb** srb; int lock; int io_dmat; scalar_t__ uncached_ptr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct hpt_iop_srb*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hpt_iop_hba*,struct hpt_iop_srb*) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, bus_dma_segment_t *VAR_5,
    int VAR_6, int VAR_7)
{
 struct hpt_iop_hba * VAR_8 = (struct hpt_iop_hba *)VAR_4;
 bus_addr_t VAR_9 = (VAR_5->ds_addr + 0x1F) & ~(bus_addr_t)0x1F;
 struct hpt_iop_srb *VAR_10, *VAR_11;
 int VAR_12;

 if (VAR_7 || VAR_6 == 0) {
  FUNC_3(VAR_8->pcidev, "hptiop_map_srb error");
  return;
 }


 VAR_10 = (struct hpt_iop_srb *)
  (((unsigned long)VAR_8->uncached_ptr + 0x1F)
  & ~(unsigned long)0x1F);

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_11 = (struct hpt_iop_srb *)
     ((char *)VAR_10 + VAR_12 * VAR_2);
  if (((unsigned long)VAR_11 & 0x1F) == 0) {
   if (FUNC_0(VAR_8->io_dmat,
      0, &VAR_11->dma_map)) {
    FUNC_3(VAR_8->pcidev, "dmamap create failed");
    return;
   }

   FUNC_1(VAR_11, sizeof(struct hpt_iop_srb));
   VAR_11->hba = VAR_8;
   VAR_11->index = VAR_12;
   if (VAR_8->ctlcfg_ptr == 0) {
    VAR_11->phy_addr = (u_int64_t)(u_int32_t)
       (VAR_9 >> 5);
    if (VAR_9 & VAR_3)
     VAR_11->srb_flag =
      VAR_0;
   } else {
    VAR_11->phy_addr = VAR_9;
   }

   FUNC_2(&VAR_11->timeout, &VAR_8->lock, 0);
   FUNC_4(VAR_8, VAR_11);
   VAR_8->srb[VAR_12] = VAR_11;
   VAR_9 += VAR_2;
  }
  else {
   FUNC_3(VAR_8->pcidev, "invalid alignment");
   return;
  }
 }
}
