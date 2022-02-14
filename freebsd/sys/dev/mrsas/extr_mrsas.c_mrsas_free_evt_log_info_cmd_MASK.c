
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int * el_info_tag; int el_info_dmamap; int * el_info_mem; scalar_t__ el_info_phys_addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(struct mrsas_softc *VAR_0)
{
 if (VAR_0->el_info_phys_addr)
  FUNC_1(VAR_0->el_info_tag, VAR_0->el_info_dmamap);
 if (VAR_0->el_info_mem != ((void*)0))
  FUNC_2(VAR_0->el_info_tag, VAR_0->el_info_mem, VAR_0->el_info_dmamap);
 if (VAR_0->el_info_tag != ((void*)0))
  FUNC_0(VAR_0->el_info_tag);
}
