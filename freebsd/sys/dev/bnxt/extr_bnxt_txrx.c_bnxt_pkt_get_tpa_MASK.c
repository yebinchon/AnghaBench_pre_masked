
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rx_tpa_end_cmpl {size_t agg_id; size_t agg_bufs_v1; int opaque; int len; } ;
struct rx_abuf_cmpl {int opaque; int len; } ;
struct bnxt_softc {TYPE_1__* rx_rings; } ;
struct TYPE_12__ {int metadata; int flags2; } ;
struct TYPE_11__ {int opaque; int len; int rss_hash_type; int rss_hash; int flags_type; } ;
struct bnxt_full_tpa_start {TYPE_3__ high; TYPE_2__ low; } ;
struct TYPE_15__ {scalar_t__ vaddr; } ;
struct bnxt_cp_ring {size_t cons; TYPE_8__ ring; int v_bit; } ;
typedef TYPE_5__* if_rxd_info_t ;
struct TYPE_14__ {size_t iri_qsidx; int iri_flowid; size_t iri_nfrags; int iri_len; int iri_vtag; int iri_csum_data; TYPE_4__* iri_frags; void* iri_cidx; int iri_csum_flags; int iri_flags; int iri_rsstype; } ;
struct TYPE_13__ {int irf_flid; int irf_idx; int irf_len; } ;
struct TYPE_10__ {struct bnxt_full_tpa_start* tpa_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_8__*,size_t,int ) ;
 void* FUNC_1 (TYPE_8__*,void*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct bnxt_softc *VAR_18, if_rxd_info_t VAR_19,
    struct bnxt_cp_ring *VAR_20, uint16_t VAR_21)
{
 struct rx_tpa_end_cmpl *VAR_22 =
     &((struct rx_tpa_end_cmpl *)VAR_20->ring.vaddr)[VAR_20->cons];
 struct rx_abuf_cmpl *VAR_23;
 struct bnxt_full_tpa_start *VAR_24;
 uint32_t VAR_25;
 uint8_t VAR_26;
 uint8_t VAR_27;
 int VAR_28;


 VAR_27 = (VAR_22->agg_id & VAR_8) >>
     VAR_9;
 VAR_24 = &(VAR_18->rx_rings[VAR_19->iri_qsidx].tpa_start[VAR_27]);


 if (FUNC_3(VAR_24->low.flags_type) & VAR_14) {
  VAR_19->iri_flowid = FUNC_4(VAR_24->low.rss_hash);
  FUNC_2(VAR_19, VAR_24->low.rss_hash_type);
 }
 else {
  VAR_19->iri_rsstype = VAR_4;
 }
 VAR_26 = (VAR_22->agg_bufs_v1 & VAR_6) >>
     VAR_7;
 VAR_19->iri_nfrags = VAR_26 + 1;

 VAR_19->iri_frags[0].irf_flid = ((VAR_24->low.opaque >> 16) & 0xff);
 VAR_19->iri_frags[0].irf_idx = (VAR_24->low.opaque & 0xffff);
 VAR_19->iri_frags[0].irf_len = FUNC_3(VAR_24->low.len);
 VAR_19->iri_len = FUNC_3(VAR_24->low.len);


 FUNC_0(&VAR_20->ring, VAR_20->cons, VAR_20->v_bit);
 VAR_19->iri_cidx = FUNC_1(&VAR_20->ring, VAR_19->iri_cidx);

 VAR_25 = FUNC_4(VAR_24->high.flags2);
 if ((VAR_25 & VAR_12) ==
     VAR_13) {
  VAR_19->iri_flags |= VAR_5;

  VAR_19->iri_vtag = FUNC_4(VAR_24->high.metadata) &
      (VAR_17 |
      VAR_15 |
      VAR_16);
 }
 if (VAR_25 & VAR_10) {
  VAR_19->iri_csum_flags |= VAR_0;
  VAR_19->iri_csum_flags |= VAR_1;
 }
 if (VAR_25 & VAR_11) {
  VAR_19->iri_csum_flags |= VAR_2;
  VAR_19->iri_csum_flags |= VAR_3;
  VAR_19->iri_csum_data = 0xffff;
 }


 for (VAR_28=1; VAR_28 < VAR_19->iri_nfrags; VAR_28++) {
  FUNC_0(&VAR_20->ring, VAR_20->cons, VAR_20->v_bit);
  VAR_19->iri_cidx = FUNC_1(&VAR_20->ring, VAR_19->iri_cidx);
  VAR_23 = &((struct rx_abuf_cmpl *)VAR_20->ring.vaddr)[VAR_20->cons];


  VAR_19->iri_frags[VAR_28].irf_flid = ((VAR_23->opaque >> 16) & 0xff);
  VAR_19->iri_frags[VAR_28].irf_idx = (VAR_23->opaque & 0xffff);
  VAR_19->iri_frags[VAR_28].irf_len = FUNC_3(VAR_23->len);
  VAR_19->iri_len += FUNC_3(VAR_23->len);
 }


 VAR_19->iri_nfrags++;

 VAR_19->iri_frags[VAR_28].irf_flid = ((VAR_22->opaque >> 16) & 0xff);
 VAR_19->iri_frags[VAR_28].irf_idx = (VAR_22->opaque & 0xffff);
 VAR_19->iri_frags[VAR_28].irf_len = FUNC_3(VAR_22->len);
 VAR_19->iri_len += FUNC_3(VAR_22->len);

 return 0;
}
