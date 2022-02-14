
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpt_iop_hba {scalar_t__ ctlcfg_dmat; int ctlcfg_dmamap; int ctlcfg_ptr; int pcidev; int parent_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ,int ,struct hpt_iop_hba*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,void**,int,int *) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct hpt_iop_hba *VAR_8)
{
 if (FUNC_0(VAR_8->parent_dmat,
    1,
    0,
    VAR_4,
    VAR_3,
    ((void*)0), ((void*)0),
    0x800 - 0x8,
    1,
    VAR_5,
    VAR_0,
    ((void*)0),
    ((void*)0),
    &VAR_8->ctlcfg_dmat)) {
  FUNC_5(VAR_8->pcidev, "alloc ctlcfg_dmat failed\n");
  return -1;
 }

 if (FUNC_3(VAR_8->ctlcfg_dmat, (void **)&VAR_8->ctlcfg_ptr,
  VAR_2 | VAR_1,
  &VAR_8->ctlcfg_dmamap) != 0) {
   FUNC_5(VAR_8->pcidev,
     "bus_dmamem_alloc failed!\n");
   FUNC_1(VAR_8->ctlcfg_dmat);
   return -1;
 }

 if (FUNC_2(VAR_8->ctlcfg_dmat,
   VAR_8->ctlcfg_dmamap, VAR_8->ctlcfg_ptr,
   VAR_6,
   VAR_7, VAR_8, 0)) {
  FUNC_5(VAR_8->pcidev, "bus_dmamap_load failed!\n");
  if (VAR_8->ctlcfg_dmat) {
   FUNC_4(VAR_8->ctlcfg_dmat,
    VAR_8->ctlcfg_ptr, VAR_8->ctlcfg_dmamap);
   FUNC_1(VAR_8->ctlcfg_dmat);
  }
  return -1;
 }

 return 0;
}
