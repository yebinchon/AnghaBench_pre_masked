
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int sc_dev; } ;
struct iwi_cmd_ring {int count; int physaddr; int desc; int desc_map; int desc_dmat; scalar_t__ next; scalar_t__ cur; scalar_t__ queued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (struct iwi_softc*,struct iwi_cmd_ring*) ;

__attribute__((used)) static int
FUNC_6(struct iwi_softc *VAR_6, struct iwi_cmd_ring *VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_7->count = VAR_8;
 VAR_7->queued = 0;
 VAR_7->cur = VAR_7->next = 0;

 VAR_9 = FUNC_0(FUNC_3(VAR_6->sc_dev), 4, 0,
     VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_8 * VAR_4, 1, VAR_8 * VAR_4, 0,
     ((void*)0), ((void*)0), &VAR_7->desc_dmat);
 if (VAR_9 != 0) {
  FUNC_4(VAR_6->sc_dev, "could not create desc DMA tag\n");
  goto fail;
 }

 VAR_9 = FUNC_2(VAR_7->desc_dmat, (void **)&VAR_7->desc,
     VAR_0 | VAR_1, &VAR_7->desc_map);
 if (VAR_9 != 0) {
  FUNC_4(VAR_6->sc_dev, "could not allocate DMA memory\n");
  goto fail;
 }

 VAR_9 = FUNC_1(VAR_7->desc_dmat, VAR_7->desc_map, VAR_7->desc,
     VAR_8 * VAR_4, VAR_5, &VAR_7->physaddr, 0);
 if (VAR_9 != 0) {
  FUNC_4(VAR_6->sc_dev, "could not load desc DMA map\n");
  goto fail;
 }

 return 0;

fail: FUNC_5(VAR_6, VAR_7);
 return VAR_9;
}
