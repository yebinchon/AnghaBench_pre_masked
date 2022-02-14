
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int * ioc_init_tag; int ioc_init_dmamap; int * ioc_init_mem; scalar_t__ ioc_init_phys_mem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(struct mrsas_softc *VAR_0)
{
 if (VAR_0->ioc_init_phys_mem)
  FUNC_1(VAR_0->ioc_init_tag, VAR_0->ioc_init_dmamap);
 if (VAR_0->ioc_init_mem != ((void*)0))
  FUNC_2(VAR_0->ioc_init_tag, VAR_0->ioc_init_mem, VAR_0->ioc_init_dmamap);
 if (VAR_0->ioc_init_tag != ((void*)0))
  FUNC_0(VAR_0->ioc_init_tag);
}
