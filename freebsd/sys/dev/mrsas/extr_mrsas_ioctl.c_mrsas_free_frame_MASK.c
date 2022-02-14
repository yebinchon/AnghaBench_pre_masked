
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int mficmd_frame_tag; } ;
struct mrsas_mfi_cmd {int frame_dmamap; int * frame_mem; scalar_t__ frame_phys_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;

void
FUNC_2(struct mrsas_softc *VAR_0, struct mrsas_mfi_cmd *VAR_1)
{
 if (VAR_1->frame_phys_addr)
  FUNC_0(VAR_0->mficmd_frame_tag, VAR_1->frame_dmamap);
 if (VAR_1->frame_mem != ((void*)0))
  FUNC_1(VAR_0->mficmd_frame_tag, VAR_1->frame_mem, VAR_1->frame_dmamap);
}
