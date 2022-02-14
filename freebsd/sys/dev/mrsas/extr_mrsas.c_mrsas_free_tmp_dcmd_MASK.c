
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_tmp_dcmd {int * tmp_dcmd_tag; int tmp_dcmd_dmamap; int * tmp_dcmd_mem; scalar_t__ tmp_dcmd_phys_addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(struct mrsas_tmp_dcmd *VAR_0)
{
 if (VAR_0->tmp_dcmd_phys_addr)
  FUNC_1(VAR_0->tmp_dcmd_tag, VAR_0->tmp_dcmd_dmamap);
 if (VAR_0->tmp_dcmd_mem != ((void*)0))
  FUNC_2(VAR_0->tmp_dcmd_tag, VAR_0->tmp_dcmd_mem, VAR_0->tmp_dcmd_dmamap);
 if (VAR_0->tmp_dcmd_tag != ((void*)0))
  FUNC_0(VAR_0->tmp_dcmd_tag);
}
