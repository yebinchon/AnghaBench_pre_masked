
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dev; int dmat; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,void*,size_t,int ,int *,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,void*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct adapter *VAR_5, size_t VAR_6, bus_dma_tag_t *VAR_7,
    bus_dmamap_t *VAR_8, bus_addr_t *VAR_9, void **VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_0(VAR_5->dmat, 512, 0, VAR_3,
     VAR_3, ((void*)0), ((void*)0), VAR_6, 1, VAR_6, 0, ((void*)0), ((void*)0), VAR_7);
 if (VAR_11 != 0) {
  FUNC_3(VAR_5->dev, "cannot allocate DMA tag: %d\n", VAR_11);
  goto done;
 }

 VAR_11 = FUNC_2(*VAR_7, VAR_10,
     VAR_1 | VAR_0 | VAR_2, VAR_8);
 if (VAR_11 != 0) {
  FUNC_3(VAR_5->dev, "cannot allocate DMA memory: %d\n", VAR_11);
  goto done;
 }

 VAR_11 = FUNC_1(*VAR_7, *VAR_8, *VAR_10, VAR_6, VAR_4, VAR_9, 0);
 if (VAR_11 != 0) {
  FUNC_3(VAR_5->dev, "cannot load DMA map: %d\n", VAR_11);
  goto done;
 }
done:
 if (VAR_11)
  FUNC_4(VAR_5, *VAR_7, *VAR_8, *VAR_9, *VAR_10);

 return (VAR_11);
}
