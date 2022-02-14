
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tx_bd_long_hi {void* lflags; int cfa_meta; scalar_t__ cfa_action; void* hdr_size; void* mss; } ;
struct tx_bd_long {int opaque; void* flags_type; void* addr; void* len; } ;
struct bnxt_softc {struct bnxt_ring* tx_rings; } ;
struct bnxt_ring {scalar_t__ vaddr; } ;
typedef TYPE_2__* if_pkt_info_t ;
struct TYPE_5__ {size_t ipi_qsidx; int ipi_csum_flags; int ipi_mflags; size_t ipi_new_pidx; size_t ipi_pidx; int ipi_nsegs; int ipi_len; int ipi_tso_segsz; int ipi_ehdrlen; int ipi_ip_hlen; int ipi_tcp_hlen; int ipi_vtag; TYPE_1__* ipi_segs; scalar_t__ ipi_ndescs; } ;
struct TYPE_4__ {int ds_len; int ds_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct bnxt_ring*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_17, if_pkt_info_t VAR_18)
{
 struct bnxt_softc *VAR_19 = (struct bnxt_softc *)VAR_17;
 struct bnxt_ring *VAR_20 = &VAR_19->tx_rings[VAR_18->ipi_qsidx];
 struct tx_bd_long *VAR_21;
 struct tx_bd_long_hi *VAR_22;
 bool VAR_23 = 0;
 uint16_t VAR_24;
 uint16_t VAR_25;
 uint32_t VAR_26;
 int VAR_27 = 0;


 if ((VAR_18->ipi_csum_flags & (VAR_1 | VAR_2 | VAR_0)) ||
     VAR_18->ipi_mflags & VAR_3)
  VAR_23 = 1;


 VAR_23 = 1;

 VAR_18->ipi_new_pidx = VAR_18->ipi_pidx;
 VAR_21 = &((struct tx_bd_long *)VAR_20->vaddr)[VAR_18->ipi_new_pidx];
 VAR_18->ipi_ndescs = 0;

 VAR_21->opaque = ((VAR_18->ipi_nsegs + VAR_23) << 24) | VAR_18->ipi_new_pidx;
 VAR_21->len = FUNC_1(VAR_18->ipi_segs[VAR_27].ds_len);
 VAR_21->addr = FUNC_3(VAR_18->ipi_segs[VAR_27++].ds_addr);
 VAR_24 = ((VAR_18->ipi_nsegs + VAR_23) <<
     VAR_12) & VAR_11;
 if (VAR_18->ipi_len >= 2048)
  VAR_24 |= VAR_13;
 else
  VAR_24 |= VAR_16[VAR_18->ipi_len >> 9];

 if (VAR_23) {
  VAR_24 |= VAR_10;

  VAR_18->ipi_new_pidx = FUNC_0(VAR_20, VAR_18->ipi_new_pidx);
  VAR_22 = &((struct tx_bd_long_hi *)VAR_20->vaddr)[VAR_18->ipi_new_pidx];
  VAR_22->mss = FUNC_1(VAR_18->ipi_tso_segsz);
  VAR_22->hdr_size = FUNC_1((VAR_18->ipi_ehdrlen + VAR_18->ipi_ip_hlen +
      VAR_18->ipi_tcp_hlen) >> 1);
  VAR_22->cfa_action = 0;
  VAR_25 = 0;
  VAR_26 = 0;
  if (VAR_18->ipi_mflags & VAR_3) {

   VAR_26 = VAR_4 |
       VAR_18->ipi_vtag;
   VAR_26 |= VAR_5;
  }
  VAR_22->cfa_meta = FUNC_2(VAR_26);
  if (VAR_18->ipi_csum_flags & VAR_2) {
   VAR_25 |= VAR_7 |
       VAR_9;
  }
  else if(VAR_18->ipi_csum_flags & VAR_1) {
   VAR_25 |= VAR_8 |
       VAR_6;
  }
  else if(VAR_18->ipi_csum_flags & VAR_0) {
   VAR_25 |= VAR_6;
  }
  VAR_22->lflags = FUNC_1(VAR_25);
 }
 else {
  VAR_24 |= VAR_15;
 }

 for (; VAR_27 < VAR_18->ipi_nsegs; VAR_27++) {
  VAR_21->flags_type = FUNC_1(VAR_24);
  VAR_18->ipi_new_pidx = FUNC_0(VAR_20, VAR_18->ipi_new_pidx);
  VAR_21 = &((struct tx_bd_long *)VAR_20->vaddr)[VAR_18->ipi_new_pidx];
  VAR_21->len = FUNC_1(VAR_18->ipi_segs[VAR_27].ds_len);
  VAR_21->addr = FUNC_3(VAR_18->ipi_segs[VAR_27].ds_addr);
  VAR_24 = VAR_15;
 }
 VAR_24 |= VAR_14;
 VAR_21->flags_type = FUNC_1(VAR_24);
 VAR_18->ipi_new_pidx = FUNC_0(VAR_20, VAR_18->ipi_new_pidx);

 return 0;
}
