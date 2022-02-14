
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_tmp_dcmd {int tmp_dcmd_mem; int tmp_dcmd_phys_addr; int tmp_dcmd_dmamap; int tmp_dcmd_tag; } ;
struct mrsas_softc {int mrsas_dev; int mrsas_parent_tag; } ;


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
FUNC_5(struct mrsas_softc *VAR_6,
    struct mrsas_tmp_dcmd *VAR_7, int VAR_8)
{
 if (FUNC_0(VAR_6->mrsas_parent_tag,
     1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_8,
     1,
     VAR_8,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_7->tmp_dcmd_tag)) {
  FUNC_3(VAR_6->mrsas_dev, "Cannot allocate tmp dcmd tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_7->tmp_dcmd_tag, (void **)&VAR_7->tmp_dcmd_mem,
     VAR_1, &VAR_7->tmp_dcmd_dmamap)) {
  FUNC_3(VAR_6->mrsas_dev, "Cannot allocate tmp dcmd mem\n");
  return (VAR_4);
 }
 if (FUNC_1(VAR_7->tmp_dcmd_tag, VAR_7->tmp_dcmd_dmamap,
     VAR_7->tmp_dcmd_mem, VAR_8, VAR_5,
     &VAR_7->tmp_dcmd_phys_addr, VAR_1)) {
  FUNC_3(VAR_6->mrsas_dev, "Cannot load tmp dcmd mem\n");
  return (VAR_4);
 }
 FUNC_4(VAR_7->tmp_dcmd_mem, 0, VAR_8);
 return (0);
}
