
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_3__* iflib_rxq_t ;
typedef TYPE_4__* iflib_fl_t ;
typedef TYPE_5__* if_rxsd_t ;
typedef TYPE_6__* if_rxd_info_t ;
typedef TYPE_7__* if_rxd_frag_t ;
typedef int caddr_t ;
typedef int * bus_dmamap_t ;
struct TYPE_19__ {int irf_flid; int irf_idx; } ;
struct TYPE_18__ {int iri_pad; int iri_len; int iri_ifp; } ;
struct TYPE_17__ {int ifsd_cidx; int * ifsd_cl; TYPE_4__* ifsd_fl; } ;
struct TYPE_14__ {struct mbuf** ifsd_m; int ** ifsd_map; int * ifsd_cl; } ;
struct TYPE_16__ {int ifl_size; int ifl_cidx; int ifl_rx_bitmap; scalar_t__ ifl_gen; int ifl_buf_tag; TYPE_2__ ifl_sds; int ifl_m_dequeued; int ifl_credits; } ;
struct TYPE_15__ {int * pfil; TYPE_1__* ifr_ctx; TYPE_4__* ifr_fl; } ;
struct TYPE_13__ {int ifc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;


 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 struct mbuf* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int,int *) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (TYPE_4__*,int) ;

__attribute__((used)) static struct mbuf *
FUNC_10(iflib_rxq_t VAR_6, if_rxd_frag_t VAR_7, bool VAR_8, if_rxsd_t VAR_9,
    int *VAR_10, if_rxd_info_t VAR_11)
{
 bus_dmamap_t VAR_12;
 iflib_fl_t VAR_13;
 caddr_t VAR_14;
 struct mbuf *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_12 = ((void*)0);
 VAR_16 = VAR_7->irf_flid;
 VAR_17 = VAR_7->irf_idx;
 VAR_13 = &VAR_6->ifr_fl[VAR_16];
 VAR_9->ifsd_fl = VAR_13;
 VAR_9->ifsd_cidx = VAR_17;
 VAR_15 = VAR_13->ifl_sds.ifsd_m[VAR_17];
 VAR_9->ifsd_cl = &VAR_13->ifl_sds.ifsd_cl[VAR_17];
 VAR_13->ifl_credits--;



 if (VAR_6->ifr_ctx->ifc_flags & VAR_3)
  FUNC_9(VAR_13, VAR_17);
 VAR_19 = (VAR_17 + VAR_2) & (VAR_13->ifl_size-1);
 FUNC_8(&VAR_13->ifl_sds.ifsd_map[VAR_19]);
 VAR_12 = VAR_13->ifl_sds.ifsd_map[VAR_17];
 VAR_19 = (VAR_17 + VAR_1) & (VAR_13->ifl_size-1);


 FUNC_0(VAR_13->ifl_cidx == VAR_17);
 FUNC_4(VAR_13->ifl_buf_tag, VAR_12, VAR_0);

 if (VAR_6->pfil != ((void*)0) && FUNC_1(VAR_6->pfil) && VAR_10 != ((void*)0)) {
  VAR_14 = *VAR_9->ifsd_cl;
  VAR_14 += VAR_11->iri_pad;
  VAR_18 = VAR_11->iri_len - VAR_11->iri_pad;
  *VAR_10 = FUNC_7(VAR_6->pfil, VAR_14, VAR_11->iri_ifp,
      VAR_18 | VAR_5 | VAR_4, ((void*)0));
  switch (*VAR_10) {
  case 130:
  case 131:



   VAR_15 = ((void*)0);
   VAR_8 = 0;
   break;
  case 128:



   VAR_15 = FUNC_6(VAR_14);
   VAR_8 = 0;
   break;
  case 129:




   VAR_13->ifl_sds.ifsd_m[VAR_17] = ((void*)0);
   break;
  default:
   FUNC_0(0);
  }
 } else {
  VAR_13->ifl_sds.ifsd_m[VAR_17] = ((void*)0);
  *VAR_10 = 129;
 }

 if (VAR_8)
  FUNC_5(VAR_13->ifl_buf_tag, VAR_12);
 VAR_13->ifl_cidx = (VAR_13->ifl_cidx + 1) & (VAR_13->ifl_size-1);
 if (FUNC_2(VAR_13->ifl_cidx == 0))
  VAR_13->ifl_gen = 0;
 FUNC_3(VAR_13->ifl_rx_bitmap, VAR_17);
 return (VAR_15);
}
