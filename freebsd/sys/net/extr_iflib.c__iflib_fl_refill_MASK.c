
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


struct TYPE_11__ {int ds_addr; } ;
struct rxq_refill_cb_arg {TYPE_3__ seg; scalar_t__ error; } ;
struct mbuf {int dummy; } ;
struct if_rxd_update {int iru_pidx; int iru_count; } ;
typedef void* qidx_t ;
typedef TYPE_4__* iflib_fl_t ;
typedef TYPE_5__* if_ctx_t ;
typedef int * caddr_t ;
typedef int bus_dmamap_t ;
typedef int bus_addr_t ;
struct TYPE_14__ {int ifr_id; } ;
struct TYPE_13__ {int ifc_softc; int (* isc_rxd_flush ) (int ,int ,int ,int) ;int (* isc_rxd_refill ) (int ,struct if_rxd_update*) ;} ;
struct TYPE_10__ {int * ifsd_ba; int ** ifsd_cl; int * ifsd_map; struct mbuf** ifsd_m; } ;
struct TYPE_12__ {int ifl_pidx; int ifl_fragidx; void* ifl_size; int ifl_cidx; int ifl_gen; scalar_t__ ifl_zone; int* ifl_rxd_idxs; int ifl_id; TYPE_6__* ifl_rxq; TYPE_1__* ifl_ifdi; void* ifl_credits; int ** ifl_vm_addrs; int * ifl_bus_addrs; int ifl_m_enqueued; int ifl_rx_bitmap; int ifl_buf_tag; int ifl_cl_enqueued; int ifl_buf_size; TYPE_2__ ifl_sds; } ;
struct TYPE_9__ {int idi_map; int idi_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int,int,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int *,int ,int ,struct rxq_refill_cb_arg*,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct if_rxd_update*,TYPE_6__*,int ) ;
 int * FUNC_8 (int *,int ,int ) ;
 struct mbuf* FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,struct if_rxd_update*) ;
 int FUNC_11 (int ,struct if_rxd_update*) ;
 int FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (scalar_t__,int *) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_14(if_ctx_t VAR_12, iflib_fl_t VAR_13, int VAR_14)
{
 struct if_rxd_update VAR_15;
 struct rxq_refill_cb_arg VAR_16;
 struct mbuf *VAR_17;
 caddr_t VAR_18, *VAR_19;
 struct mbuf **VAR_20;
 bus_dmamap_t *VAR_21;
 bus_addr_t VAR_22, *VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 qidx_t VAR_30;

 VAR_20 = VAR_13->ifl_sds.ifsd_m;
 VAR_21 = VAR_13->ifl_sds.ifsd_map;
 VAR_19 = VAR_13->ifl_sds.ifsd_cl;
 VAR_23 = VAR_13->ifl_sds.ifsd_ba;
 VAR_29 = VAR_13->ifl_pidx;
 VAR_27 = VAR_29;
 VAR_25 = VAR_13->ifl_fragidx;
 VAR_30 = VAR_13->ifl_credits;

 VAR_26 = 0;
 VAR_28 = VAR_14;
 FUNC_1(VAR_28 > 0);
 FUNC_1(VAR_30 + VAR_28 <= VAR_13->ifl_size);

 if (VAR_29 < VAR_13->ifl_cidx)
  FUNC_1(VAR_29 + VAR_28 <= VAR_13->ifl_cidx);
 if (VAR_29 == VAR_13->ifl_cidx && (VAR_30 < VAR_13->ifl_size))
  FUNC_1(VAR_13->ifl_gen == 0);
 if (VAR_29 > VAR_13->ifl_cidx)
  FUNC_1(VAR_28 <= VAR_13->ifl_size - VAR_29 + VAR_13->ifl_cidx);

 FUNC_0(VAR_7);
 if (VAR_28 > 8)
  FUNC_0(VAR_8);
 FUNC_7(&VAR_15, VAR_13->ifl_rxq, VAR_13->ifl_id);
 while (VAR_28--) {






  FUNC_3(VAR_13->ifl_rx_bitmap, VAR_25, VAR_13->ifl_size,
      &VAR_25);
  if (VAR_25 < 0)
   FUNC_2(VAR_13->ifl_rx_bitmap, VAR_13->ifl_size, &VAR_25);
  FUNC_1(VAR_25 >= 0);
  if ((VAR_18 = VAR_19[VAR_25]) == ((void*)0)) {
   if ((VAR_18 = FUNC_8(((void*)0), VAR_5, VAR_13->ifl_buf_size)) == ((void*)0))
    break;

   VAR_16.error = 0;
   FUNC_1(VAR_21 != ((void*)0));
   VAR_24 = FUNC_5(VAR_13->ifl_buf_tag, VAR_21[VAR_25],
       VAR_18, VAR_13->ifl_buf_size, VAR_6, &VAR_16,
       VAR_2);
   if (VAR_24 != 0 || VAR_16.error) {



    if (VAR_13->ifl_zone == VAR_11)
     FUNC_13(VAR_13->ifl_zone, VAR_18);
    break;
   }

   VAR_23[VAR_25] = VAR_22 = VAR_16.seg.ds_addr;
   VAR_19[VAR_25] = VAR_18;



  } else {
   VAR_22 = VAR_23[VAR_25];
  }
  FUNC_6(VAR_13->ifl_buf_tag, VAR_21[VAR_25],
      VAR_0);

  if (VAR_20[VAR_25] == ((void*)0)) {
   if ((VAR_17 = FUNC_9(VAR_5, VAR_4)) == ((void*)0)) {
    break;
   }
   VAR_20[VAR_25] = VAR_17;
  }
  FUNC_4(VAR_13->ifl_rx_bitmap, VAR_25);




  FUNC_0(VAR_9);
  VAR_13->ifl_rxd_idxs[VAR_26] = VAR_25;
  VAR_13->ifl_bus_addrs[VAR_26] = VAR_22;
  VAR_13->ifl_vm_addrs[VAR_26] = VAR_18;
  VAR_30++;
  VAR_26++;
  FUNC_1(VAR_30 <= VAR_13->ifl_size);
  if (++VAR_27 == VAR_13->ifl_size) {
   VAR_13->ifl_gen = 1;
   VAR_27 = 0;
  }
  if (VAR_28 == 0 || VAR_26 == VAR_3) {
   VAR_15.iru_pidx = VAR_29;
   VAR_15.iru_count = VAR_26;
   VAR_12->isc_rxd_refill(VAR_12->ifc_softc, &VAR_15);
   VAR_26 = 0;
   VAR_29 = VAR_27;
   VAR_13->ifl_pidx = VAR_27;
   VAR_13->ifl_credits = VAR_30;
  }
 }

 if (VAR_26) {
  VAR_15.iru_pidx = VAR_29;
  VAR_15.iru_count = VAR_26;
  VAR_12->isc_rxd_refill(VAR_12->ifc_softc, &VAR_15);
  VAR_13->ifl_pidx = VAR_27;
  VAR_13->ifl_credits = VAR_30;
 }
 FUNC_0(VAR_10);
 if (VAR_13->ifl_pidx == 0)
  VAR_29 = VAR_13->ifl_size - 1;
 else
  VAR_29 = VAR_13->ifl_pidx - 1;

 FUNC_6(VAR_13->ifl_ifdi->idi_tag, VAR_13->ifl_ifdi->idi_map,
     VAR_0 | VAR_1);
 VAR_12->isc_rxd_flush(VAR_12->ifc_softc, VAR_13->ifl_rxq->ifr_id, VAR_13->ifl_id, VAR_29);
 VAR_13->ifl_fragidx = VAR_25;
}
