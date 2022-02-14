
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int fw_dma_size; int fw_flags; int sc_dev; int fw_physaddr; int fw_virtaddr; int fw_map; int fw_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (struct iwi_softc*) ;

__attribute__((used)) static int
FUNC_6(struct iwi_softc *VAR_6, int VAR_7)
{
 if (VAR_6->fw_dma_size >= VAR_7)
  return 0;
 if (FUNC_0(FUNC_3(VAR_6->sc_dev), 4, 0,
     VAR_1, VAR_0, ((void*)0), ((void*)0),
     VAR_7, 1, VAR_7, 0, ((void*)0), ((void*)0), &VAR_6->fw_dmat) != 0) {
  FUNC_4(VAR_6->sc_dev,
      "could not create firmware DMA tag\n");
  goto error;
 }
 VAR_6->fw_flags |= VAR_2;
 if (FUNC_2(VAR_6->fw_dmat, &VAR_6->fw_virtaddr, 0,
     &VAR_6->fw_map) != 0) {
  FUNC_4(VAR_6->sc_dev,
      "could not allocate firmware DMA memory\n");
  goto error;
 }
 VAR_6->fw_flags |= VAR_3;
 if (FUNC_1(VAR_6->fw_dmat, VAR_6->fw_map, VAR_6->fw_virtaddr,
     VAR_7, VAR_5, &VAR_6->fw_physaddr, 0) != 0) {
  FUNC_4(VAR_6->sc_dev, "could not load firmware DMA map\n");
  goto error;
 }
 VAR_6->fw_flags |= VAR_4;
 VAR_6->fw_dma_size = VAR_7;
 return 0;

error:
 FUNC_5(VAR_6);
 return 1;
}
