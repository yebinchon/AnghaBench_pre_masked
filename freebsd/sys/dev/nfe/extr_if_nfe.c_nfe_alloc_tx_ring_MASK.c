
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfe_tx_ring {TYPE_1__* data; int tx_data_tag; scalar_t__ physaddr; int tx_desc_map; int tx_desc_tag; void* desc32; void* desc64; scalar_t__ next; scalar_t__ cur; scalar_t__ queued; } ;
struct nfe_softc {int nfe_flags; int nfe_dev; int nfe_parent_tag; } ;
struct nfe_dmamap_arg {scalar_t__ nfe_busaddr; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;
struct TYPE_2__ {int tx_data_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,void*,int,int ,struct nfe_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_5(struct nfe_softc *VAR_11, struct nfe_tx_ring *VAR_12)
{
 struct nfe_dmamap_arg VAR_13;
 int VAR_14, VAR_15;
 void *VAR_16;
 int VAR_17;

 if (VAR_11->nfe_flags & VAR_4) {
  VAR_16 = VAR_12->desc64;
  VAR_17 = sizeof (struct nfe_desc64);
 } else {
  VAR_16 = VAR_12->desc32;
  VAR_17 = sizeof (struct nfe_desc32);
 }

 VAR_12->queued = 0;
 VAR_12->cur = VAR_12->next = 0;

 VAR_15 = FUNC_0(VAR_11->nfe_parent_tag,
     VAR_6, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_9 * VAR_17, 1,
     VAR_9 * VAR_17,
     0,
     ((void*)0), ((void*)0),
     &VAR_12->tx_desc_tag);
 if (VAR_15 != 0) {
  FUNC_4(VAR_11->nfe_dev, "could not create desc DMA tag\n");
  goto fail;
 }

 VAR_15 = FUNC_3(VAR_12->tx_desc_tag, &VAR_16, VAR_1 |
     VAR_0 | VAR_2, &VAR_12->tx_desc_map);
 if (VAR_15 != 0) {
  FUNC_4(VAR_11->nfe_dev, "could not create desc DMA map\n");
  goto fail;
 }
 if (VAR_11->nfe_flags & VAR_4)
  VAR_12->desc64 = VAR_16;
 else
  VAR_12->desc32 = VAR_16;

 VAR_13.nfe_busaddr = 0;
 VAR_15 = FUNC_2(VAR_12->tx_desc_tag, VAR_12->tx_desc_map, VAR_16,
     VAR_9 * VAR_17, VAR_10, &VAR_13, 0);
 if (VAR_15 != 0) {
  FUNC_4(VAR_11->nfe_dev, "could not load desc DMA map\n");
  goto fail;
 }
 VAR_12->physaddr = VAR_13.nfe_busaddr;

 VAR_15 = FUNC_0(VAR_11->nfe_parent_tag,
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_8,
     VAR_5,
     VAR_7,
     0,
     ((void*)0), ((void*)0),
     &VAR_12->tx_data_tag);
 if (VAR_15 != 0) {
  FUNC_4(VAR_11->nfe_dev, "could not create Tx DMA tag\n");
  goto fail;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_15 = FUNC_1(VAR_12->tx_data_tag, 0,
      &VAR_12->data[VAR_14].tx_data_map);
  if (VAR_15 != 0) {
   FUNC_4(VAR_11->nfe_dev,
       "could not create Tx DMA map\n");
   goto fail;
  }
 }

fail:
 return (VAR_15);
}
