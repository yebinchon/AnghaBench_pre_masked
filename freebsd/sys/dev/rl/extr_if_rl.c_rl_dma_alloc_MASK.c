
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rl_rx_buf_paddr; scalar_t__ rl_rx_buf; scalar_t__ rl_rx_buf_ptr; int ** rl_tx_dmamap; int rl_tx_tag; int ** rl_tx_chain; int rl_rx_dmamap; int rl_rx_tag; } ;
struct rl_softc {TYPE_1__ rl_cdata; int rl_dev; int rl_parent_tag; } ;
struct rl_dmamap_arg {scalar_t__ rl_busaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int ,struct rl_dmamap_arg*,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_6(struct rl_softc *VAR_15)
{
 struct rl_dmamap_arg VAR_16;
 int VAR_17, VAR_18;




 VAR_17 = FUNC_0(FUNC_4(VAR_15->rl_dev),
     1, 0,
     VAR_5,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_6, 0,
     VAR_6,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->rl_parent_tag);
 if (VAR_17) {
                FUNC_5(VAR_15->rl_dev,
      "failed to create parent DMA tag.\n");
  goto fail;
 }

 VAR_17 = FUNC_0(VAR_15->rl_parent_tag,
     VAR_9, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_8 + VAR_10, 1,
     VAR_8 + VAR_10,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->rl_cdata.rl_rx_tag);
 if (VAR_17) {
                FUNC_5(VAR_15->rl_dev,
      "failed to create Rx memory block DMA tag.\n");
  goto fail;
 }

 VAR_17 = FUNC_0(VAR_15->rl_parent_tag,
     VAR_12, 0,
     VAR_4,
     VAR_4,
     ((void*)0), ((void*)0),
     VAR_7, 1,
     VAR_7,
     0,
     ((void*)0), ((void*)0),
     &VAR_15->rl_cdata.rl_tx_tag);
 if (VAR_17) {
                FUNC_5(VAR_15->rl_dev, "failed to create Tx DMA tag.\n");
  goto fail;
 }




 VAR_17 = FUNC_3(VAR_15->rl_cdata.rl_rx_tag,
     (void **)&VAR_15->rl_cdata.rl_rx_buf, VAR_2 |
     VAR_0 | VAR_3, &VAR_15->rl_cdata.rl_rx_dmamap);
 if (VAR_17 != 0) {
  FUNC_5(VAR_15->rl_dev,
      "failed to allocate Rx DMA memory block.\n");
  goto fail;
 }
 VAR_16.rl_busaddr = 0;
 VAR_17 = FUNC_2(VAR_15->rl_cdata.rl_rx_tag,
     VAR_15->rl_cdata.rl_rx_dmamap, VAR_15->rl_cdata.rl_rx_buf,
     VAR_8 + VAR_10, VAR_14, &VAR_16,
     VAR_1);
 if (VAR_17 != 0 || VAR_16.rl_busaddr == 0) {
  FUNC_5(VAR_15->rl_dev,
      "could not load Rx DMA memory block.\n");
  goto fail;
 }
 VAR_15->rl_cdata.rl_rx_buf_paddr = VAR_16.rl_busaddr;


 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
  VAR_15->rl_cdata.rl_tx_chain[VAR_18] = ((void*)0);
  VAR_15->rl_cdata.rl_tx_dmamap[VAR_18] = ((void*)0);
  VAR_17 = FUNC_1(VAR_15->rl_cdata.rl_tx_tag, 0,
      &VAR_15->rl_cdata.rl_tx_dmamap[VAR_18]);
  if (VAR_17 != 0) {
   FUNC_5(VAR_15->rl_dev,
       "could not create Tx dmamap.\n");
   goto fail;
  }
 }


 VAR_15->rl_cdata.rl_rx_buf_ptr = VAR_15->rl_cdata.rl_rx_buf;
 VAR_15->rl_cdata.rl_rx_buf += VAR_11;

fail:
 return (VAR_17);
}
