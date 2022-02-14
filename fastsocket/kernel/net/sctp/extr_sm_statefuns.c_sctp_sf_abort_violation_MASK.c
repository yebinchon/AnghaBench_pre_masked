
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sctp_packet {void* vtag; } ;
struct TYPE_15__ {int sk; } ;
struct sctp_endpoint {TYPE_7__ base; } ;
struct sctp_chunk {TYPE_6__* skb; TYPE_5__* sctp_hdr; TYPE_3__* chunk_hdr; } ;
struct TYPE_9__ {int init_tag; } ;
struct TYPE_10__ {TYPE_1__ i; } ;
struct sctp_association {scalar_t__ state; TYPE_2__ peer; } ;
struct TYPE_12__ {int init_tag; } ;
struct TYPE_16__ {TYPE_4__ init_hdr; } ;
typedef TYPE_8__ sctp_initack_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int __u8 ;
struct TYPE_14__ {int sk; } ;
struct TYPE_13__ {int vtag; } ;
struct TYPE_11__ {scalar_t__ type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct sctp_packet*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned int) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int ,struct sctp_association const*) ;
 int FUNC_12 (struct sctp_chunk*) ;
 int FUNC_13 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_14 (struct sctp_association const*,struct sctp_chunk*,int const*,size_t const) ;
 struct sctp_packet* FUNC_15 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_16 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_17 (struct sctp_endpoint const*,struct sctp_association const*,int ,void*,int *) ;
 scalar_t__ FUNC_18 (struct sctp_chunk*) ;

__attribute__((used)) static sctp_disposition_t FUNC_19(
         const struct sctp_endpoint *VAR_20,
         const struct sctp_association *VAR_21,
         void *VAR_22,
         sctp_cmd_seq_t *VAR_23,
         const __u8 *VAR_24,
         const size_t VAR_25)
{
 struct sctp_packet *VAR_26 = ((void*)0);
 struct sctp_chunk *VAR_27 = VAR_22;
 struct sctp_chunk *VAR_28 = ((void*)0);
 if (FUNC_11(VAR_3, VAR_21))
  goto discard;


 VAR_28 = FUNC_14(VAR_21, VAR_27, VAR_24, VAR_25);
 if (!VAR_28)
  goto nomem;

 if (VAR_21) {

  if (VAR_27->chunk_hdr->type == VAR_4 &&
      !VAR_21->peer.i.init_tag) {
   sctp_initack_chunk_t *VAR_29;

   VAR_29 = (sctp_initack_chunk_t *)VAR_27->chunk_hdr;
   if (!FUNC_13(VAR_27,
           sizeof(sctp_initack_chunk_t)))
    VAR_28->chunk_hdr->flags |= VAR_2;
   else {
    unsigned int VAR_30;

    VAR_30 = FUNC_9(VAR_29->init_hdr.init_tag);
    FUNC_10(VAR_23, VAR_11,
      FUNC_8(VAR_30));
   }
  }

  FUNC_10(VAR_23, VAR_7, FUNC_0(VAR_28));
  FUNC_3(VAR_18);

  if (VAR_21->state <= VAR_19) {
   FUNC_10(VAR_23, VAR_10,
     FUNC_7(VAR_15));
   FUNC_10(VAR_23, VAR_9,
     FUNC_2(VAR_1));
   FUNC_10(VAR_23, VAR_6,
     FUNC_5(VAR_14));
  } else {
   FUNC_10(VAR_23, VAR_9,
     FUNC_2(VAR_0));
   FUNC_10(VAR_23, VAR_5,
     FUNC_5(VAR_14));
   FUNC_1(VAR_17);
  }
 } else {
  VAR_26 = FUNC_15(VAR_21, VAR_27);

  if (!VAR_26)
   goto nomem_pkt;

  if (FUNC_18(VAR_28))
   VAR_26->vtag = FUNC_9(VAR_27->sctp_hdr->vtag);

  VAR_28->skb->sk = VAR_20->base.sk;

  FUNC_16(VAR_26, VAR_28);

  FUNC_10(VAR_23, VAR_8,
   FUNC_4(VAR_26));

  FUNC_3(VAR_18);
 }

 FUNC_3(VAR_16);

discard:
 FUNC_17(VAR_20, VAR_21, FUNC_6(0), VAR_22, VAR_23);
 return VAR_12;

nomem_pkt:
 FUNC_12(VAR_28);
nomem:
 return VAR_13;
}
