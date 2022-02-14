
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mrsas_softc {int mrsas_dev; int mficmd_frame_tag; } ;
struct mrsas_mfi_cmd {void* frame_mem; int frame_phys_addr; int frame_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,void*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,void**,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

void *
FUNC_3(struct mrsas_softc *VAR_3, struct mrsas_mfi_cmd *VAR_4)
{
 u_int32_t VAR_5 = VAR_1;

 if (FUNC_1(VAR_3->mficmd_frame_tag, (void **)&VAR_4->frame_mem,
     VAR_0, &VAR_4->frame_dmamap)) {
  FUNC_2(VAR_3->mrsas_dev, "Cannot alloc MFI frame memory\n");
  return (((void*)0));
 }
 if (FUNC_0(VAR_3->mficmd_frame_tag, VAR_4->frame_dmamap,
     VAR_4->frame_mem, VAR_5, VAR_2,
     &VAR_4->frame_phys_addr, VAR_0)) {
  FUNC_2(VAR_3->mrsas_dev, "Cannot load IO request memory\n");
  return (((void*)0));
 }
 return (VAR_4->frame_mem);
}
