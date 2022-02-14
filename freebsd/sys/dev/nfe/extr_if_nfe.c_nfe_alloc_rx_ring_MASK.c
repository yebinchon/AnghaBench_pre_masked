
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfe_rx_data* data; } ;
struct nfe_softc {int nfe_flags; int nfe_dev; TYPE_1__ rxq; int nfe_parent_tag; } ;
struct nfe_rx_ring {int rx_data_tag; int * rx_spare_map; scalar_t__ physaddr; int rx_desc_map; int rx_desc_tag; void* desc32; void* desc64; scalar_t__ next; scalar_t__ cur; } ;
struct nfe_rx_data {int * rx_data_map; int * m; } ;
struct nfe_dmamap_arg {scalar_t__ nfe_busaddr; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,void*,int,int ,struct nfe_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_5(struct nfe_softc *VAR_9, struct nfe_rx_ring *VAR_10)
{
 struct nfe_dmamap_arg VAR_11;
 struct nfe_rx_data *VAR_12;
 void *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (VAR_9->nfe_flags & VAR_5) {
  VAR_13 = VAR_10->desc64;
  VAR_16 = sizeof (struct nfe_desc64);
 } else {
  VAR_13 = VAR_10->desc32;
  VAR_16 = sizeof (struct nfe_desc32);
 }

 VAR_10->cur = VAR_10->next = 0;

 VAR_15 = FUNC_0(VAR_9->nfe_parent_tag,
     VAR_6, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_7 * VAR_16, 1,
     VAR_7 * VAR_16,
     0,
     ((void*)0), ((void*)0),
     &VAR_10->rx_desc_tag);
 if (VAR_15 != 0) {
  FUNC_4(VAR_9->nfe_dev, "could not create desc DMA tag\n");
  goto fail;
 }


 VAR_15 = FUNC_3(VAR_10->rx_desc_tag, &VAR_13, VAR_1 |
     VAR_0 | VAR_2, &VAR_10->rx_desc_map);
 if (VAR_15 != 0) {
  FUNC_4(VAR_9->nfe_dev, "could not create desc DMA map\n");
  goto fail;
 }
 if (VAR_9->nfe_flags & VAR_5)
  VAR_10->desc64 = VAR_13;
 else
  VAR_10->desc32 = VAR_13;


 VAR_11.nfe_busaddr = 0;
 VAR_15 = FUNC_2(VAR_10->rx_desc_tag, VAR_10->rx_desc_map, VAR_13,
     VAR_7 * VAR_16, VAR_8, &VAR_11, 0);
 if (VAR_15 != 0) {
  FUNC_4(VAR_9->nfe_dev, "could not load desc DMA map\n");
  goto fail;
 }
 VAR_10->physaddr = VAR_11.nfe_busaddr;

 VAR_15 = FUNC_0(VAR_9->nfe_parent_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_4, 1,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_10->rx_data_tag);
 if (VAR_15 != 0) {
  FUNC_4(VAR_9->nfe_dev, "could not create Rx DMA tag\n");
  goto fail;
 }

 VAR_15 = FUNC_1(VAR_10->rx_data_tag, 0, &VAR_10->rx_spare_map);
 if (VAR_15 != 0) {
  FUNC_4(VAR_9->nfe_dev,
      "could not create Rx DMA spare map\n");
  goto fail;
 }




 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_12 = &VAR_9->rxq.data[VAR_14];
  VAR_12->rx_data_map = ((void*)0);
  VAR_12->m = ((void*)0);
  VAR_15 = FUNC_1(VAR_10->rx_data_tag, 0,
      &VAR_12->rx_data_map);
  if (VAR_15 != 0) {
   FUNC_4(VAR_9->nfe_dev,
       "could not create Rx DMA map\n");
   goto fail;
  }
 }

fail:
 return (VAR_15);
}
