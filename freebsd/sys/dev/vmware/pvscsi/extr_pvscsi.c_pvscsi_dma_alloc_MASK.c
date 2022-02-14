
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int dev; int parent_dmat; } ;
struct pvscsi_dma {int size; int paddr; int vaddr; int map; int tag; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int) ;
 int FUNC_2 (int ,int *,int,int *) ;
 int FUNC_3 (struct pvscsi_dma*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct pvscsi_softc*,struct pvscsi_dma*) ;

__attribute__((used)) static int
FUNC_6(struct pvscsi_softc *VAR_5, struct pvscsi_dma *VAR_6,
    bus_size_t VAR_7, bus_size_t VAR_8)
{
 int VAR_9;

 FUNC_3(VAR_6, sizeof(*VAR_6));

 VAR_9 = FUNC_0(VAR_5->parent_dmat, VAR_8, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0), VAR_7, 1, VAR_7,
     VAR_0, ((void*)0), ((void*)0), &VAR_6->tag);
 if (VAR_9) {
  FUNC_4(VAR_5->dev, "error creating dma tag, error %d\n",
      VAR_9);
  goto fail;
 }

 VAR_9 = FUNC_2(VAR_6->tag, &VAR_6->vaddr,
     VAR_1 | VAR_2, &VAR_6->map);
 if (VAR_9) {
  FUNC_4(VAR_5->dev, "error allocating dma mem, error %d\n",
      VAR_9);
  goto fail;
 }

 VAR_9 = FUNC_1(VAR_6->tag, VAR_6->map, VAR_6->vaddr, VAR_7,
     VAR_4, &VAR_6->paddr, VAR_1);
 if (VAR_9) {
  FUNC_4(VAR_5->dev, "error mapping dma mam, error %d\n",
      VAR_9);
  goto fail;
 }

 VAR_6->size = VAR_7;

fail:
 if (VAR_9) {
  FUNC_5(VAR_5, VAR_6);
 }
 return (VAR_9);
}
