
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef TYPE_5__* if_shared_ctx_t ;
typedef TYPE_6__* if_ctx_t ;
typedef int device_t ;
typedef int caddr_t ;
typedef int bus_dmamap_t ;
typedef int bus_addr_t ;
struct TYPE_12__ {int* isc_nrxd; } ;
struct TYPE_14__ {int ifc_dev; TYPE_4__ ifc_softc_ctx; TYPE_5__* ifc_sctx; } ;
struct TYPE_13__ {int isc_rx_maxsegsize; int isc_rx_nsegments; int isc_rx_maxsize; } ;
struct TYPE_9__ {int * ifsd_map; int * ifsd_ba; int * ifsd_cl; struct mbuf** ifsd_m; } ;
struct TYPE_11__ {int ifl_size; TYPE_1__ ifl_sds; int ifl_buf_tag; } ;
struct TYPE_10__ {size_t ifr_fl_offset; int ifr_nfl; TYPE_3__* ifr_fl; TYPE_6__* ifr_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(iflib_rxq_t VAR_5)
{
 if_ctx_t VAR_6 = VAR_5->ifr_ctx;
 if_shared_ctx_t VAR_7 = VAR_6->ifc_sctx;
 if_softc_ctx_t VAR_8 = &VAR_6->ifc_softc_ctx;
 device_t VAR_9 = VAR_6->ifc_dev;
 iflib_fl_t VAR_10;
 int VAR_11;

 FUNC_0(VAR_8->isc_nrxd[0] > 0);
 FUNC_0(VAR_8->isc_nrxd[VAR_5->ifr_fl_offset] > 0);

 VAR_10 = VAR_5->ifr_fl;
 for (int VAR_12 = 0; VAR_12 < VAR_5->ifr_nfl; VAR_12++, VAR_10++) {
  VAR_10->ifl_size = VAR_8->isc_nrxd[VAR_5->ifr_fl_offset];

  VAR_11 = FUNC_1(FUNC_3(VAR_9),
      1, 0,
      VAR_0,
      VAR_0,
      ((void*)0), ((void*)0),
      VAR_7->isc_rx_maxsize,
      VAR_7->isc_rx_nsegments,
      VAR_7->isc_rx_maxsegsize,
      0,
      ((void*)0),
      ((void*)0),
      &VAR_10->ifl_buf_tag);
  if (VAR_11) {
   FUNC_4(VAR_9,
       "Unable to allocate RX DMA tag: %d\n", VAR_11);
   goto fail;
  }


  if (!(VAR_10->ifl_sds.ifsd_m =
        (struct mbuf **) FUNC_6(sizeof(struct mbuf *) *
           VAR_8->isc_nrxd[VAR_5->ifr_fl_offset], VAR_2, VAR_3 | VAR_4))) {
   FUNC_4(VAR_9,
       "Unable to allocate RX mbuf map memory\n");
   VAR_11 = VAR_1;
   goto fail;
  }


  if (!(VAR_10->ifl_sds.ifsd_cl =
        (caddr_t *) FUNC_6(sizeof(caddr_t) *
           VAR_8->isc_nrxd[VAR_5->ifr_fl_offset], VAR_2, VAR_3 | VAR_4))) {
   FUNC_4(VAR_9,
       "Unable to allocate RX cluster map memory\n");
   VAR_11 = VAR_1;
   goto fail;
  }


  if (!(VAR_10->ifl_sds.ifsd_ba =
        (bus_addr_t *) FUNC_6(sizeof(bus_addr_t) *
           VAR_8->isc_nrxd[VAR_5->ifr_fl_offset], VAR_2, VAR_3 | VAR_4))) {
   FUNC_4(VAR_9,
       "Unable to allocate RX bus address map memory\n");
   VAR_11 = VAR_1;
   goto fail;
  }




  if (!(VAR_10->ifl_sds.ifsd_map =
        (bus_dmamap_t *) FUNC_6(sizeof(bus_dmamap_t) * VAR_8->isc_nrxd[VAR_5->ifr_fl_offset], VAR_2, VAR_3 | VAR_4))) {
   FUNC_4(VAR_9,
       "Unable to allocate RX buffer DMA map memory\n");
   VAR_11 = VAR_1;
   goto fail;
  }
  for (int VAR_13 = 0; VAR_13 < VAR_8->isc_nrxd[VAR_5->ifr_fl_offset]; VAR_13++) {
   VAR_11 = FUNC_2(VAR_10->ifl_buf_tag, 0,
       &VAR_10->ifl_sds.ifsd_map[VAR_13]);
   if (VAR_11 != 0) {
    FUNC_4(VAR_9, "Unable to create RX buffer DMA map\n");
    goto fail;
   }
  }
 }
 return (0);

fail:
 FUNC_5(VAR_6);
 return (VAR_11);
}
