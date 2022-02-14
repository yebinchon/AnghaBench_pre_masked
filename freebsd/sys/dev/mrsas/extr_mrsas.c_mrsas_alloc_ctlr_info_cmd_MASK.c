
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int ctlr_info_mem; int mrsas_dev; int ctlr_info_phys_addr; int ctlr_info_dmamap; int ctlr_info_tag; int mrsas_parent_tag; } ;
struct mrsas_ctrl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_5 ;

int
FUNC_5(struct mrsas_softc *VAR_6)
{
 int VAR_7;


 VAR_7 = sizeof(struct mrsas_ctrl_info);
 if (FUNC_0(VAR_6->mrsas_parent_tag,
     1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_7,
     1,
     VAR_7,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_6->ctlr_info_tag)) {
  FUNC_3(VAR_6->mrsas_dev, "Cannot allocate ctlr info tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_6->ctlr_info_tag, (void **)&VAR_6->ctlr_info_mem,
     VAR_1, &VAR_6->ctlr_info_dmamap)) {
  FUNC_3(VAR_6->mrsas_dev, "Cannot allocate ctlr info cmd mem\n");
  return (VAR_4);
 }
 if (FUNC_1(VAR_6->ctlr_info_tag, VAR_6->ctlr_info_dmamap,
     VAR_6->ctlr_info_mem, VAR_7, VAR_5,
     &VAR_6->ctlr_info_phys_addr, VAR_1)) {
  FUNC_3(VAR_6->mrsas_dev, "Cannot load ctlr info cmd mem\n");
  return (VAR_4);
 }
 FUNC_4(VAR_6->ctlr_info_mem, 0, VAR_7);
 return (0);
}
