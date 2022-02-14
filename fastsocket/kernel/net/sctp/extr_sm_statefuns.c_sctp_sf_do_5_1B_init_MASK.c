
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sctp_packet {int dummy; } ;
struct TYPE_9__ {int sk; } ;
struct sctp_endpoint {TYPE_2__ base; } ;
struct TYPE_11__ {int v; } ;
struct TYPE_10__ {int * init_hdr; } ;
struct sctp_chunk {TYPE_5__* chunk_hdr; TYPE_6__* skb; TYPE_4__ param_hdr; TYPE_3__ subh; TYPE_1__* sctp_hdr; int singleton; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_unrecognized_param_t ;
typedef int sctp_subtype_t ;
typedef int sctp_inithdr_t ;
typedef int sctp_init_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;
typedef int __u8 ;
struct TYPE_14__ {struct sctp_endpoint const* ep; } ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {int length; int type; } ;
struct TYPE_8__ {scalar_t__ vtag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (struct sctp_packet*) ;
 int FUNC_5 (int ) ;
 struct sctp_packet* FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,void*,int *,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct sctp_chunk*,int,int *) ;
 scalar_t__ FUNC_9 (struct sctp_association*,int ,int ) ;
 int FUNC_10 (struct sctp_association*) ;
 int FUNC_11 (struct sctp_chunk*) ;
 int FUNC_12 (struct sctp_chunk*,int) ;
 int FUNC_13 () ;
 struct sctp_chunk* FUNC_14 (struct sctp_association*,struct sctp_chunk*,int ,int) ;
 struct sctp_association* FUNC_15 (struct sctp_endpoint const*,struct sctp_chunk*,int ) ;
 int FUNC_16 (struct sctp_association*,struct sctp_chunk*,int ,int *,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_19 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 TYPE_7__* FUNC_20 (int ) ;
 int FUNC_21 (struct sctp_chunk*) ;
 scalar_t__ FUNC_22 (int ,int ) ;
 int FUNC_23 (struct sctp_association const*,int ,int *,struct sctp_chunk*,struct sctp_chunk**) ;
 int FUNC_24 (TYPE_6__*,int) ;

sctp_disposition_t FUNC_25(const struct sctp_endpoint *VAR_11,
     const struct sctp_association *VAR_12,
     const sctp_subtype_t VAR_13,
     void *VAR_14,
     sctp_cmd_seq_t *VAR_15)
{
 struct sctp_chunk *VAR_16 = VAR_14;
 struct sctp_chunk *VAR_17;
 struct sctp_association *VAR_18;
 struct sctp_chunk *VAR_19;
 struct sctp_packet *VAR_20;
 sctp_unrecognized_param_t *VAR_21;
 int VAR_22;
 if (!VAR_16->singleton)
  return FUNC_18(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);




 if (VAR_11 == FUNC_20((FUNC_13()))->ep) {
  FUNC_2(VAR_10);
  return FUNC_19(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
 }




 if (VAR_16->sctp_hdr->vtag != 0)
  return FUNC_19(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);






 if (!FUNC_12(VAR_16, sizeof(sctp_init_chunk_t)))
  return FUNC_18(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);







 if (FUNC_22(VAR_11->base.sk, VAR_0))
  return FUNC_19(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);


 VAR_19 = ((void*)0);
 if (!FUNC_23(VAR_12, VAR_16->chunk_hdr->type,
         (sctp_init_chunk_t *)VAR_16->chunk_hdr, VAR_16,
         &VAR_19)) {



  if (VAR_19) {
   VAR_20 = FUNC_6(VAR_11, VAR_12, VAR_14,
     (__u8 *)(VAR_19->chunk_hdr) +
     sizeof(sctp_chunkhdr_t),
     FUNC_5(VAR_19->chunk_hdr->length) -
     sizeof(sctp_chunkhdr_t));

   FUNC_11(VAR_19);

   if (VAR_20) {
    FUNC_7(VAR_15, VAR_5,
      FUNC_4(VAR_20));
    FUNC_2(VAR_9);
    return VAR_6;
   } else {
    return VAR_8;
   }
  } else {
   return FUNC_19(VAR_11, VAR_12, VAR_13, VAR_14,
          VAR_15);
  }
 }


 VAR_16->subh.init_hdr = (sctp_inithdr_t *)VAR_16->skb->data;


 VAR_16->param_hdr.v = FUNC_24(VAR_16->skb, sizeof(sctp_inithdr_t));

 VAR_18 = FUNC_15(VAR_11, VAR_16, VAR_1);
 if (!VAR_18)
  goto nomem;

 if (FUNC_9(VAR_18,
          FUNC_17(FUNC_21(VAR_16)),
          VAR_1) < 0)
  goto nomem_init;


 if (!FUNC_16(VAR_18, VAR_16, FUNC_21(VAR_16),
          (sctp_init_chunk_t *)VAR_16->chunk_hdr,
          VAR_1))
  goto nomem_init;






 VAR_22 = 0;
 if (VAR_19)
  VAR_22 = FUNC_5(VAR_19->chunk_hdr->length) -
   sizeof(sctp_chunkhdr_t);

 VAR_17 = FUNC_14(VAR_18, VAR_16, VAR_1, VAR_22);
 if (!VAR_17)
  goto nomem_init;





 if (VAR_19) {







  VAR_21 = (sctp_unrecognized_param_t *)
       ((__u8 *)(VAR_19->chunk_hdr) +
       sizeof(sctp_chunkhdr_t));



  FUNC_8(VAR_17, VAR_22, VAR_21);
  FUNC_11(VAR_19);
 }

 FUNC_7(VAR_15, VAR_3, FUNC_0(VAR_18));

 FUNC_7(VAR_15, VAR_4, FUNC_1(VAR_17));







 FUNC_7(VAR_15, VAR_2, FUNC_3());

 return VAR_7;

nomem_init:
 FUNC_10(VAR_18);
nomem:
 if (VAR_19)
  FUNC_11(VAR_19);
 return VAR_8;
}
