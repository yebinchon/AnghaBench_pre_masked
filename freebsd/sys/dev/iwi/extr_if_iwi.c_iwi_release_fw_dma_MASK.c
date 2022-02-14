
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int fw_flags; int * fw_virtaddr; scalar_t__ fw_physaddr; int * fw_map; int * fw_dmat; scalar_t__ fw_dma_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct iwi_softc *VAR_3)
{
 if (VAR_3->fw_flags & VAR_2)
  FUNC_1(VAR_3->fw_dmat, VAR_3->fw_map);
 if (VAR_3->fw_flags & VAR_1)
  FUNC_2(VAR_3->fw_dmat, VAR_3->fw_virtaddr, VAR_3->fw_map);
 if (VAR_3->fw_flags & VAR_0)
  FUNC_0(VAR_3->fw_dmat);

 VAR_3->fw_flags = 0;
 VAR_3->fw_dma_size = 0;
 VAR_3->fw_dmat = ((void*)0);
 VAR_3->fw_map = ((void*)0);
 VAR_3->fw_physaddr = 0;
 VAR_3->fw_virtaddr = ((void*)0);
}
