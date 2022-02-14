
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mge_softc {int tx_desc_curr; int tx_desc_used_count; int mge_desc_dtag; int mge_tx_dtag; struct mge_desc_wrapper* mge_tx_desc; struct ifnet* ifp; } ;
struct mge_desc_wrapper {int desc_dmap; TYPE_1__* mge_desc; struct mbuf* buffer; int buffer_dmap; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int bus_dmamap_t ;
struct TYPE_5__ {int ds_addr; int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int cmd_status; int buffer; int byte_count; } ;


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
 int FUNC_0 (int ,int ,struct mbuf*,TYPE_2__*,int*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mge_softc*,struct mge_desc_wrapper*) ;

__attribute__((used)) static int
FUNC_5(struct mge_softc *VAR_10, struct mbuf *VAR_11)
{
 struct mge_desc_wrapper *VAR_12 = ((void*)0);
 struct ifnet *VAR_13;
 bus_dma_segment_t VAR_14[VAR_4];
 bus_dmamap_t VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_13 = VAR_10->ifp;


 VAR_19 = VAR_10->tx_desc_curr;
 VAR_12 = &VAR_10->mge_tx_desc[VAR_19];
 VAR_15 = VAR_12->buffer_dmap;


 VAR_16 = FUNC_0(VAR_10->mge_tx_dtag, VAR_15, VAR_11, VAR_14, &VAR_18,
     VAR_2);
 if (VAR_16 != 0) {
  FUNC_3(VAR_11);
  return (VAR_16);
 }


 if (VAR_18 != 1) {
  FUNC_2(VAR_10->mge_tx_dtag, VAR_15);
  FUNC_3(VAR_11);
  return (-1);
 }

 FUNC_1(VAR_10->mge_tx_dtag, VAR_15, VAR_1);


 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  VAR_12->mge_desc->byte_count = VAR_14[VAR_17].ds_len;
  VAR_12->mge_desc->buffer = VAR_14[VAR_17].ds_addr;
  VAR_12->buffer = VAR_11;
  VAR_12->mge_desc->cmd_status = 0;
  if (VAR_17 == 0)
   FUNC_4(VAR_10, VAR_12);
  VAR_12->mge_desc->cmd_status |= VAR_8 | VAR_7 |
      VAR_6 | VAR_5 | VAR_9 |
      VAR_3;
 }

 FUNC_1(VAR_10->mge_desc_dtag, VAR_12->desc_dmap,
     VAR_0 | VAR_1);

 VAR_10->tx_desc_curr = (++VAR_10->tx_desc_curr) % VAR_4;
 VAR_10->tx_desc_used_count++;
 return (0);
}
