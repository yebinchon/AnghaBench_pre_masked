
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
struct mbuf {int dummy; } ;
struct ether_vlan_header {int dummy; } ;
typedef TYPE_2__* iflib_txq_t ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef TYPE_4__* if_shared_ctx_t ;
typedef TYPE_5__* if_ctx_t ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;
typedef int bus_dmamap_t ;
struct TYPE_10__ {int isc_tx_nsegments; int isc_tx_tso_segments_max; scalar_t__ isc_tx_tso_size_max; int* isc_ntxd; } ;
struct TYPE_12__ {int ifc_ifp; int ifc_dev; TYPE_3__ ifc_softc_ctx; TYPE_4__* ifc_sctx; } ;
struct TYPE_11__ {scalar_t__ isc_tso_maxsize; scalar_t__ isc_tx_maxsize; scalar_t__ isc_tso_maxsegsize; scalar_t__ isc_tx_maxsegsize; } ;
struct TYPE_8__ {int * ifsd_tso_map; int * ifsd_map; struct mbuf** ifsd_m; } ;
struct TYPE_9__ {size_t ift_br_offset; TYPE_1__ ift_sds; int ift_tso_buf_tag; int ift_buf_tag; TYPE_5__* ift_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (int,int ,int) ;

__attribute__((used)) static int
FUNC_8(iflib_txq_t VAR_7)
{
 if_ctx_t VAR_8 = VAR_7->ift_ctx;
 if_shared_ctx_t VAR_9 = VAR_8->ifc_sctx;
 if_softc_ctx_t VAR_10 = &VAR_8->ifc_softc_ctx;
 device_t VAR_11 = VAR_8->ifc_dev;
 bus_size_t VAR_12;
 int VAR_13, VAR_14, VAR_15;
 bool VAR_16;

 VAR_14 = VAR_10->isc_tx_nsegments;
 VAR_15 = VAR_10->isc_tx_tso_segments_max;
 VAR_12 = VAR_10->isc_tx_tso_size_max;
 if (FUNC_5(VAR_8->ifc_ifp) & VAR_3)
  VAR_12 += sizeof(struct ether_vlan_header);
 FUNC_0(VAR_10->isc_ntxd[0] > 0);
 FUNC_0(VAR_10->isc_ntxd[VAR_7->ift_br_offset] > 0);
 FUNC_0(VAR_14 > 0);
 if (FUNC_5(VAR_8->ifc_ifp) & VAR_2) {
  FUNC_0(VAR_15 > 0);
  FUNC_0(VAR_9->isc_tso_maxsize >= VAR_12);
 }




 if ((VAR_13 = FUNC_1(FUNC_3(VAR_11),
          1, 0,
          VAR_0,
          VAR_0,
          ((void*)0), ((void*)0),
          VAR_9->isc_tx_maxsize,
          VAR_14,
          VAR_9->isc_tx_maxsegsize,
          0,
          ((void*)0),
          ((void*)0),
          &VAR_7->ift_buf_tag))) {
  FUNC_4(VAR_11,"Unable to allocate TX DMA tag: %d\n", VAR_13);
  FUNC_4(VAR_11,"maxsize: %ju nsegments: %d maxsegsize: %ju\n",
      (uintmax_t)VAR_9->isc_tx_maxsize, VAR_14, (uintmax_t)VAR_9->isc_tx_maxsegsize);
  goto fail;
 }
 VAR_16 = (FUNC_5(VAR_8->ifc_ifp) & VAR_2) != 0;
 if (VAR_16 && (VAR_13 = FUNC_1(FUNC_3(VAR_11),
          1, 0,
          VAR_0,
          VAR_0,
          ((void*)0), ((void*)0),
          VAR_12,
          VAR_15,
          VAR_9->isc_tso_maxsegsize,
          0,
          ((void*)0),
          ((void*)0),
          &VAR_7->ift_tso_buf_tag))) {
  FUNC_4(VAR_11, "Unable to allocate TSO TX DMA tag: %d\n",
      VAR_13);
  goto fail;
 }


 if (!(VAR_7->ift_sds.ifsd_m =
     (struct mbuf **) FUNC_7(sizeof(struct mbuf *) *
     VAR_10->isc_ntxd[VAR_7->ift_br_offset], VAR_4, VAR_5 | VAR_6))) {
  FUNC_4(VAR_11, "Unable to allocate TX mbuf map memory\n");
  VAR_13 = VAR_1;
  goto fail;
 }




 if ((VAR_7->ift_sds.ifsd_map = (bus_dmamap_t *)FUNC_7(
     sizeof(bus_dmamap_t) * VAR_10->isc_ntxd[VAR_7->ift_br_offset],
     VAR_4, VAR_5 | VAR_6)) == ((void*)0)) {
  FUNC_4(VAR_11,
      "Unable to allocate TX buffer DMA map memory\n");
  VAR_13 = VAR_1;
  goto fail;
 }
 if (VAR_16 && (VAR_7->ift_sds.ifsd_tso_map = (bus_dmamap_t *)FUNC_7(
     sizeof(bus_dmamap_t) * VAR_10->isc_ntxd[VAR_7->ift_br_offset],
     VAR_4, VAR_5 | VAR_6)) == ((void*)0)) {
  FUNC_4(VAR_11,
      "Unable to allocate TSO TX buffer map memory\n");
  VAR_13 = VAR_1;
  goto fail;
 }
 for (int VAR_17 = 0; VAR_17 < VAR_10->isc_ntxd[VAR_7->ift_br_offset]; VAR_17++) {
  VAR_13 = FUNC_2(VAR_7->ift_buf_tag, 0,
      &VAR_7->ift_sds.ifsd_map[VAR_17]);
  if (VAR_13 != 0) {
   FUNC_4(VAR_11, "Unable to create TX DMA map\n");
   goto fail;
  }
  if (!VAR_16)
   continue;
  VAR_13 = FUNC_2(VAR_7->ift_tso_buf_tag, 0,
      &VAR_7->ift_sds.ifsd_tso_map[VAR_17]);
  if (VAR_13 != 0) {
   FUNC_4(VAR_11, "Unable to create TSO TX DMA map\n");
   goto fail;
  }
 }
 return (0);
fail:

 FUNC_6(VAR_8);
 return (VAR_13);
}
