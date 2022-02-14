
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int mrsas_dev; int ioc_init_phys_mem; int ioc_init_mem; int ioc_init_dmamap; int ioc_init_tag; int mrsas_parent_tag; } ;
typedef int MPI2_IOC_INIT_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;

int
FUNC_5(struct mrsas_softc *VAR_6)
{
 int VAR_7;


 VAR_7 = 1024 + sizeof(MPI2_IOC_INIT_REQUEST);
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
     &VAR_6->ioc_init_tag)) {
  FUNC_4(VAR_6->mrsas_dev, "Cannot allocate ioc init tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_6->ioc_init_tag, (void **)&VAR_6->ioc_init_mem,
     VAR_1, &VAR_6->ioc_init_dmamap)) {
  FUNC_4(VAR_6->mrsas_dev, "Cannot allocate ioc init cmd mem\n");
  return (VAR_4);
 }
 FUNC_3(VAR_6->ioc_init_mem, VAR_7);
 if (FUNC_1(VAR_6->ioc_init_tag, VAR_6->ioc_init_dmamap,
     VAR_6->ioc_init_mem, VAR_7, VAR_5,
     &VAR_6->ioc_init_phys_mem, VAR_1)) {
  FUNC_4(VAR_6->mrsas_dev, "Cannot load ioc init cmd mem\n");
  return (VAR_4);
 }
 return (0);
}
