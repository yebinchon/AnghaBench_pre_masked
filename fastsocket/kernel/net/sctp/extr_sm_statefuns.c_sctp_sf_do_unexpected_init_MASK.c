
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_packet {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_8__ {int v; } ;
struct TYPE_7__ {int * init_hdr; } ;
struct sctp_chunk {TYPE_4__* chunk_hdr; TYPE_5__* skb; TYPE_3__ param_hdr; TYPE_2__ subh; TYPE_1__* sctp_hdr; int singleton; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_unrecognized_param_t ;
typedef int sctp_subtype_t ;
typedef int sctp_inithdr_t ;
typedef int sctp_init_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;
typedef int __u8 ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int length; int type; } ;
struct TYPE_6__ {scalar_t__ vtag; } ;


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
 int FUNC_2 (int ) ;
 int VAR_8 ;
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
 struct sctp_chunk* FUNC_13 (struct sctp_association*,struct sctp_chunk*,int ,int) ;
 struct sctp_association* FUNC_14 (struct sctp_endpoint const*,struct sctp_chunk*,int ) ;
 int FUNC_15 (struct sctp_association*,struct sctp_chunk*,int ,int *,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sctp_association*,struct sctp_association const*,struct sctp_chunk*,int *) ;
 int FUNC_18 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_19 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_20 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_21 (struct sctp_chunk*) ;
 int FUNC_22 (struct sctp_association const*,int ) ;
 int FUNC_23 (struct sctp_association*,struct sctp_association const*) ;
 int FUNC_24 (struct sctp_association const*,int ,int *,struct sctp_chunk*,struct sctp_chunk**) ;
 int FUNC_25 (TYPE_5__*,int) ;

__attribute__((used)) static sctp_disposition_t FUNC_26(
 const struct sctp_endpoint *VAR_9,
 const struct sctp_association *VAR_10,
 const sctp_subtype_t VAR_11,
 void *VAR_12, sctp_cmd_seq_t *VAR_13)
{
 sctp_disposition_t VAR_14;
 struct sctp_chunk *VAR_15 = VAR_12;
 struct sctp_chunk *VAR_16;
 struct sctp_association *VAR_17;
 struct sctp_chunk *VAR_18;
 struct sctp_packet *VAR_19;
 sctp_unrecognized_param_t *VAR_20;
 int VAR_21;
 if (!VAR_15->singleton)
  return FUNC_18(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);




 if (VAR_15->sctp_hdr->vtag != 0)
  return FUNC_19(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);





 if (!FUNC_12(VAR_15, sizeof(sctp_init_chunk_t)))
  return FUNC_20(VAR_9, VAR_10, VAR_11, VAR_12,
        VAR_13);

 VAR_15->subh.init_hdr = (sctp_inithdr_t *) VAR_15->skb->data;


 VAR_15->param_hdr.v = FUNC_25(VAR_15->skb, sizeof(sctp_inithdr_t));


 VAR_18 = ((void*)0);
 if (!FUNC_24(VAR_10, VAR_15->chunk_hdr->type,
         (sctp_init_chunk_t *)VAR_15->chunk_hdr, VAR_15,
         &VAR_18)) {



  if (VAR_18) {
   VAR_19 = FUNC_6(VAR_9, VAR_10, VAR_12,
     (__u8 *)(VAR_18->chunk_hdr) +
     sizeof(sctp_chunkhdr_t),
     FUNC_5(VAR_18->chunk_hdr->length) -
     sizeof(sctp_chunkhdr_t));

   if (VAR_19) {
    FUNC_7(VAR_13, VAR_5,
      FUNC_4(VAR_19));
    FUNC_2(VAR_8);
    VAR_14 = VAR_6;
   } else {
    VAR_14 = VAR_7;
   }
   goto cleanup;
  } else {
   return FUNC_19(VAR_9, VAR_10, VAR_11, VAR_12,
          VAR_13);
  }
 }
 VAR_17 = FUNC_14(VAR_9, VAR_15, VAR_1);
 if (!VAR_17)
  goto nomem;

 if (FUNC_9(VAR_17,
    FUNC_16(FUNC_21(VAR_15)), VAR_1) < 0)
  goto nomem;





 if (!FUNC_15(VAR_17, VAR_15, FUNC_21(VAR_15),
          (sctp_init_chunk_t *)VAR_15->chunk_hdr,
          VAR_1))
  goto nomem;






 if (!FUNC_22(VAR_10, VAR_0)) {
  if (!FUNC_17(VAR_17, VAR_10, VAR_15,
       VAR_13)) {
   VAR_14 = VAR_6;
   goto nomem_retval;
  }
 }

 FUNC_23(VAR_17, VAR_10);






 VAR_21 = 0;
 if (VAR_18) {
  VAR_21 = FUNC_5(VAR_18->chunk_hdr->length) -
   sizeof(sctp_chunkhdr_t);
 }

 VAR_16 = FUNC_13(VAR_17, VAR_15, VAR_1, VAR_21);
 if (!VAR_16)
  goto nomem;





 if (VAR_18) {







  VAR_20 = (sctp_unrecognized_param_t *)
       ((__u8 *)(VAR_18->chunk_hdr) +
       sizeof(sctp_chunkhdr_t));



  FUNC_8(VAR_16, VAR_21, VAR_20);
 }

 FUNC_7(VAR_13, VAR_3, FUNC_0(VAR_17));
 FUNC_7(VAR_13, VAR_4, FUNC_1(VAR_16));






 FUNC_7(VAR_13, VAR_2, FUNC_3());
 VAR_14 = VAR_6;

 return VAR_14;

nomem:
 VAR_14 = VAR_7;
nomem_retval:
 if (VAR_17)
  FUNC_10(VAR_17);
cleanup:
 if (VAR_18)
  FUNC_11(VAR_18);
 return VAR_14;
}
