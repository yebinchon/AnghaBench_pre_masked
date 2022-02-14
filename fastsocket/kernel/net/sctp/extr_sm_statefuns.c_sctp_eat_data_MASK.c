
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sock {TYPE_5__* sk_prot_creator; } ;
struct sctp_tsnmap {int dummy; } ;
struct TYPE_21__ {TYPE_11__* data_hdr; } ;
struct sctp_chunk {int ecn_ce_done; int data_accepted; TYPE_8__* asoc; TYPE_6__* chunk_hdr; TYPE_12__* skb; TYPE_2__ subh; } ;
struct TYPE_28__ {scalar_t__ sinit_max_instreams; } ;
struct TYPE_23__ {int pd_mode; } ;
struct TYPE_22__ {int tsn_map; scalar_t__ ecn_capable; } ;
struct TYPE_20__ {struct sock* sk; } ;
struct sctp_association {size_t rwnd; size_t frag_point; TYPE_10__* ssnmap; TYPE_9__ c; scalar_t__ rwnd_over; TYPE_4__ ulpq; TYPE_3__ peer; TYPE_1__ base; } ;
struct sctp_af {scalar_t__ (* is_ce ) (TYPE_12__*) ;} ;
typedef int sctp_verb_t ;
struct TYPE_17__ {int ssn; int stream; int tsn; } ;
typedef TYPE_11__ sctp_datahdr_t ;
typedef int sctp_data_chunk_t ;
typedef int sctp_cmd_seq_t ;
typedef scalar_t__ __u32 ;
struct TYPE_26__ {int iodchunks; int iuodchunks; int outofseqtsns; } ;
struct TYPE_27__ {TYPE_7__ stats; } ;
struct TYPE_25__ {int flags; int length; } ;
struct TYPE_24__ {scalar_t__* memory_pressure; } ;
struct TYPE_19__ {int version; } ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_16__ {int in; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 TYPE_14__* FUNC_9 (TYPE_12__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int ) ;
 struct sctp_af* FUNC_14 (int ) ;
 struct sctp_chunk* FUNC_15 (struct sctp_association const*,struct sctp_chunk*,scalar_t__) ;
 struct sctp_chunk* FUNC_16 (struct sctp_association const*,struct sctp_chunk*,int ,int *,int,int) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,scalar_t__) ;
 scalar_t__ FUNC_19 (struct sctp_tsnmap*) ;
 scalar_t__ FUNC_20 (struct sctp_tsnmap*) ;
 int FUNC_21 (TYPE_12__*,int) ;
 scalar_t__ FUNC_22 (TYPE_12__*) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(const struct sctp_association *VAR_25,
    struct sctp_chunk *VAR_26,
    sctp_cmd_seq_t *VAR_27)
{
 sctp_datahdr_t *VAR_28;
 struct sctp_chunk *VAR_29;
 size_t VAR_30;
 sctp_verb_t VAR_31;
 int VAR_32;
 __u32 VAR_33;
 struct sctp_tsnmap *VAR_34 = (struct sctp_tsnmap *)&VAR_25->peer.tsn_map;
 struct sock *VAR_35 = VAR_25->base.sk;
 u16 VAR_36;
 u16 VAR_37;
 u8 VAR_38 = 0;

 VAR_28 = VAR_26->subh.data_hdr = (sctp_datahdr_t *)VAR_26->skb->data;
 FUNC_21(VAR_26->skb, sizeof(sctp_datahdr_t));

 VAR_33 = FUNC_11(VAR_28->tsn);
 FUNC_1("eat_data: TSN 0x%x.\n", VAR_33);
 if (!VAR_26->ecn_ce_done) {
  struct sctp_af *VAR_39;
  VAR_26->ecn_ce_done = 1;

  VAR_39 = FUNC_14(
   FUNC_10(FUNC_9(VAR_26->skb)->version));

  if (VAR_39 && VAR_39->is_ce(VAR_26->skb) && VAR_25->peer.ecn_capable) {

   FUNC_13(VAR_27, VAR_4,
     FUNC_7(VAR_33));
  }
 }

 VAR_32 = FUNC_18(&VAR_25->peer.tsn_map, VAR_33);
 if (VAR_32 < 0) {



  if (VAR_26->asoc)
   VAR_26->asoc->stats.outofseqtsns++;
  return VAR_16;
 } else if (VAR_32 > 0) {

  FUNC_13(VAR_27, VAR_8, FUNC_7(VAR_33));
  return VAR_15;
 }






 VAR_30 = FUNC_12(VAR_26->chunk_hdr->length);
 VAR_30 -= sizeof(sctp_data_chunk_t);

 VAR_31 = VAR_2;


 if ((VAR_30 >= VAR_25->rwnd) && (!VAR_25->ulpq.pd_mode)) {




  FUNC_13(VAR_27, VAR_5, FUNC_5());
 }






 if ((!VAR_26->data_accepted) && (!VAR_25->rwnd || VAR_25->rwnd_over ||
     (VAR_30 > VAR_25->rwnd + VAR_25->frag_point))) {







  if (FUNC_20(VAR_34) &&
      (FUNC_19(VAR_34) + 1) == VAR_33) {
   FUNC_1("Reneging for tsn:%u\n", VAR_33);
   VAR_31 = VAR_6;
  } else {
   FUNC_1("Discard tsn: %u len: %Zd, "
       "rwnd: %d\n", VAR_33, VAR_30,
       VAR_25->rwnd);
   return VAR_17;
  }
 }
 if (*VAR_35->sk_prot_creator->memory_pressure) {
  if (FUNC_20(VAR_34) &&
            (FUNC_19(VAR_34) + 1) == VAR_33) {
   FUNC_1("Under Pressure! Reneging for tsn:%u\n", VAR_33);
   VAR_31 = VAR_6;
   }
 }
 if (FUNC_23(0 == VAR_30)) {
  VAR_29 = FUNC_15(VAR_25, VAR_26, VAR_33);
  if (VAR_29) {
   FUNC_13(VAR_27, VAR_7,
     FUNC_0(VAR_29));
  }



  FUNC_13(VAR_27, VAR_3,FUNC_5());
  FUNC_13(VAR_27, VAR_10,
    FUNC_3(VAR_0));
  FUNC_13(VAR_27, VAR_1,
    FUNC_6(VAR_13));
  FUNC_4(VAR_21);
  FUNC_2(VAR_22);
  return VAR_18;
 }

 VAR_26->data_accepted = 1;




 if (VAR_26->chunk_hdr->flags & VAR_11) {
  FUNC_4(VAR_24);
  if (VAR_26->asoc)
   VAR_26->asoc->stats.iuodchunks++;
 } else {
  FUNC_4(VAR_23);
  if (VAR_26->asoc)
   VAR_26->asoc->stats.iodchunks++;
  VAR_38 = 1;
 }
 VAR_37 = FUNC_12(VAR_28->stream);
 if (VAR_37 >= VAR_25->c.sinit_max_instreams) {

  FUNC_13(VAR_27, VAR_9, FUNC_7(VAR_33));

  VAR_29 = FUNC_16(VAR_25, VAR_26, VAR_12,
      &VAR_28->stream,
      sizeof(VAR_28->stream),
      sizeof(u16));
  if (VAR_29)
   FUNC_13(VAR_27, VAR_7,
     FUNC_0(VAR_29));
  return VAR_14;
 }
 VAR_36 = FUNC_12(VAR_28->ssn);
 if (VAR_38 && FUNC_8(VAR_36, FUNC_17(&VAR_25->ssnmap->in, VAR_37))) {
  return VAR_20;
 }





 FUNC_13(VAR_27, VAR_31, FUNC_0(VAR_26));

 return VAR_19;
}
