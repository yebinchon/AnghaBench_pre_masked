
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct tcphdr {int th_flags; int th_seq; } ;
struct sfxge_txq {size_t n_pend_desc; unsigned int ptr_mask; int tso_packets; int common; int * pend_desc; int packet_dma_tag; int tso_long_headers; struct sfxge_tx_mapping* stmp; TYPE_1__* tsoh_buffer; } ;
struct TYPE_4__ {unsigned int heap_buf; } ;
struct sfxge_tx_mapping {scalar_t__ flags; TYPE_2__ u; int map; } ;
struct sfxge_tso_state {int fw_assisted; unsigned int seqnum; unsigned int seg_size; int tcp_flags; unsigned int out_len; unsigned int header_len; unsigned int tcph_off; unsigned int nh_off; void* protocol; unsigned int packet_space; void* segs_space; int mbuf; int header_desc; int packet_id; } ;
struct ip6_hdr {void* ip6_plen; } ;
struct ip {void* ip_len; } ;
typedef int efx_desc_t ;
typedef unsigned int caddr_t ;
typedef int bus_dmamap_t ;
struct TYPE_3__ {unsigned int esm_base; scalar_t__ esm_addr; int esm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__,unsigned int,int ,int *) ;
 int FUNC_7 (int ,int ,int ,unsigned int,unsigned int,int *,unsigned int) ;
 int FUNC_8 (int ,int ,unsigned int,int,int ) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (unsigned int) ;
 void* FUNC_11 (unsigned int) ;
 int FUNC_12 (int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_13 (unsigned int,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_14(struct sfxge_txq *VAR_17,
    struct sfxge_tso_state *VAR_18,
    unsigned int *VAR_19)
{
 unsigned int VAR_20 = *VAR_19;
 struct tcphdr *VAR_21;
 unsigned VAR_22;
 caddr_t VAR_23;
 uint64_t VAR_24;
 bus_dmamap_t VAR_25;
 efx_desc_t *VAR_26;
 int VAR_27;

 if (VAR_18->fw_assisted) {
  if (VAR_18->fw_assisted & VAR_9) {

   VAR_26 = &VAR_17->pend_desc[VAR_17->n_pend_desc];
   FUNC_7(VAR_17->common,
       VAR_18->packet_id,
       0,
       VAR_18->seqnum,
       VAR_18->seg_size,
       VAR_26,
       VAR_3);
   VAR_26 += VAR_3;
   VAR_17->n_pend_desc += VAR_3;
   FUNC_0(VAR_17->stmp[VAR_20].flags == 0, ("stmp flags are not 0"));
   VAR_20 = (VAR_20 + VAR_3) & VAR_17->ptr_mask;

   VAR_18->segs_space =
       VAR_2 - 1;
  } else {
   uint8_t VAR_28 = VAR_18->tcp_flags;

   if (VAR_18->out_len > VAR_18->seg_size)
    VAR_28 &= ~(VAR_10 | VAR_11);


   VAR_26 = &VAR_17->pend_desc[VAR_17->n_pend_desc++];
   FUNC_8(VAR_17->common,
      VAR_18->packet_id,
      VAR_18->seqnum,
      VAR_28,
      VAR_26++);
   FUNC_0(VAR_17->stmp[VAR_20].flags == 0, ("stmp flags are not 0"));
   VAR_20 = (VAR_20 + 1) & VAR_17->ptr_mask;

   VAR_18->seqnum += VAR_18->seg_size;
   VAR_18->segs_space = VAR_15;
  }


  *VAR_26 = VAR_18->header_desc;
  VAR_17->n_pend_desc++;
  FUNC_0(VAR_17->stmp[VAR_20].flags == 0, ("stmp flags are not 0"));
  VAR_20 = (VAR_20 + 1) & VAR_17->ptr_mask;
 } else {

  if (FUNC_2(VAR_18->header_len <= VAR_13)) {
   unsigned int VAR_29 = (VAR_20 / 2) / VAR_12;
   unsigned int VAR_30 = (VAR_20 / 2) % VAR_12;

   VAR_23 = (VAR_17->tsoh_buffer[VAR_29].esm_base +
      VAR_30 * VAR_13);
   VAR_24 = (VAR_17->tsoh_buffer[VAR_29].esm_addr +
        VAR_30 * VAR_13);
   VAR_25 = VAR_17->tsoh_buffer[VAR_29].esm_map;

   FUNC_0(VAR_17->stmp[VAR_20].flags == 0,
    ("stmp flags are not 0"));
  } else {
   struct sfxge_tx_mapping *VAR_31 = &VAR_17->stmp[VAR_20];


   VAR_23 = FUNC_13(VAR_18->header_len, VAR_8, VAR_7);
   if (FUNC_1(!VAR_23))
    return (VAR_5);
   VAR_27 = FUNC_3(VAR_17->packet_dma_tag, VAR_31->map,
          VAR_23, VAR_18->header_len,
          VAR_16, &VAR_24,
          VAR_1);
   if (FUNC_1(VAR_24 == 0)) {
    if (VAR_27 == 0) {

     FUNC_5(VAR_17->packet_dma_tag,
         VAR_31->map);
     VAR_27 = VAR_4;
    }
    FUNC_9(VAR_23, VAR_8);
    return (VAR_27);
   }
   VAR_25 = VAR_31->map;

   VAR_17->tso_long_headers++;
   VAR_31->u.heap_buf = VAR_23;
   VAR_31->flags = VAR_14;
  }

  VAR_21 = (struct tcphdr *)(VAR_23 + VAR_18->tcph_off);


  FUNC_12(VAR_18->mbuf, 0, VAR_18->header_len, VAR_23);

  VAR_21->th_seq = FUNC_10(VAR_18->seqnum);
  VAR_18->seqnum += VAR_18->seg_size;
  if (VAR_18->out_len > VAR_18->seg_size) {

   VAR_22 = VAR_18->header_len - VAR_18->nh_off + VAR_18->seg_size;
   VAR_21->th_flags &= ~(VAR_10 | VAR_11);
  } else {

   VAR_22 = VAR_18->header_len - VAR_18->nh_off + VAR_18->out_len;
  }

  if (VAR_18->protocol == FUNC_11(VAR_6)) {
   struct ip *VAR_32 = (struct ip *)(VAR_23 + VAR_18->nh_off);
   VAR_32->ip_len = FUNC_11(VAR_22);



  } else {
   struct ip6_hdr *VAR_33 =
    (struct ip6_hdr *)(VAR_23 + VAR_18->nh_off);
   VAR_33->ip6_plen = FUNC_11(VAR_22 - sizeof(*VAR_33));
  }


  FUNC_4(VAR_17->packet_dma_tag, VAR_25, VAR_0);


  VAR_26 = &VAR_17->pend_desc[VAR_17->n_pend_desc++];
  FUNC_6(VAR_17->common,
     VAR_24,
     VAR_18->header_len,
     0,
     VAR_26);
  VAR_20 = (VAR_20 + 1) & VAR_17->ptr_mask;

  VAR_18->segs_space = VAR_15;
 }
 VAR_18->packet_space = VAR_18->seg_size;
 VAR_17->tso_packets++;
 *VAR_19 = VAR_20;

 return (0);
}
