
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int sc_dev; } ;
struct bwi_ring_data {int rdata_txrx_ctrl; int * rdata_desc; int rdata_dmap; int rdata_paddr; } ;
typedef int bus_size_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ,int ,int *,int ) ;
 int FUNC_1 (int ,int **,int,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct bwi_softc *VAR_4, bus_dma_tag_t VAR_5,
     struct bwi_ring_data *VAR_6, bus_size_t VAR_7,
     uint32_t VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_6->rdata_desc,
     VAR_1 | VAR_2,
     &VAR_6->rdata_dmap);
 if (VAR_9) {
  FUNC_3(VAR_4->sc_dev, "can't allocate DMA mem\n");
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_6->rdata_dmap, VAR_6->rdata_desc, VAR_7,
    VAR_3, &VAR_6->rdata_paddr,
    VAR_0);
 if (VAR_9) {
  FUNC_3(VAR_4->sc_dev, "can't load DMA mem\n");
  FUNC_2(VAR_5, VAR_6->rdata_desc, VAR_6->rdata_dmap);
  VAR_6->rdata_desc = ((void*)0);
  return VAR_9;
 }

 VAR_6->rdata_txrx_ctrl = VAR_8;
 return 0;
}
