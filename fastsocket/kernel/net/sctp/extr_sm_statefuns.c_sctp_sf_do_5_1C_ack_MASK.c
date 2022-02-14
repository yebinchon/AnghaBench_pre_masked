
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_packet {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_6__ {int v; } ;
struct TYPE_5__ {int * init_hdr; } ;
struct sctp_chunk {TYPE_3__* chunk_hdr; TYPE_4__* skb; TYPE_2__ param_hdr; int transport; TYPE_1__ subh; int singleton; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_inithdr_t ;
typedef int sctp_initack_chunk_t ;
typedef int sctp_init_chunk_t ;
typedef int sctp_error_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;
typedef int __u8 ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int length; int type; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 (struct sctp_packet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_17 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct sctp_packet* FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,void*,int *,scalar_t__) ;
 int FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int ,struct sctp_association const*) ;
 int FUNC_11 (struct sctp_chunk*) ;
 int FUNC_12 (struct sctp_chunk*,int) ;
 int FUNC_13 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_14 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_15 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_16 (int *,int ,int ,struct sctp_association const*,int ) ;
 int FUNC_17 (struct sctp_association const*,int ,int *,struct sctp_chunk*,struct sctp_chunk**) ;
 int FUNC_18 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_19 (TYPE_4__*,int) ;

sctp_disposition_t FUNC_20(const struct sctp_endpoint *VAR_18,
           const struct sctp_association *VAR_19,
           const sctp_subtype_t VAR_20,
           void *VAR_21,
           sctp_cmd_seq_t *VAR_22)
{
 struct sctp_chunk *VAR_23 = VAR_21;
 sctp_init_chunk_t *VAR_24;
 struct sctp_chunk *VAR_25;
 struct sctp_packet *VAR_26;

 if (!FUNC_18(VAR_23, VAR_19))
  return FUNC_13(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);





 if (!VAR_23->singleton)
  return FUNC_14(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);


 if (!FUNC_12(VAR_23, sizeof(sctp_initack_chunk_t)))
  return FUNC_15(VAR_18, VAR_19, VAR_20, VAR_21,
        VAR_22);

 VAR_23->subh.init_hdr = (sctp_inithdr_t *) VAR_23->skb->data;


 VAR_25 = ((void*)0);
 if (!FUNC_17(VAR_19, VAR_23->chunk_hdr->type,
         (sctp_init_chunk_t *)VAR_23->chunk_hdr, VAR_23,
         &VAR_25)) {

  sctp_error_t VAR_27 = VAR_12;






  if (VAR_25) {
   VAR_26 = FUNC_8(VAR_18, VAR_19, VAR_21,
     (__u8 *)(VAR_25->chunk_hdr) +
     sizeof(sctp_chunkhdr_t),
     FUNC_7(VAR_25->chunk_hdr->length) -
     sizeof(sctp_chunkhdr_t));

   FUNC_11(VAR_25);

   if (VAR_26) {
    FUNC_9(VAR_22, VAR_7,
      FUNC_3(VAR_26));
    FUNC_1(VAR_16);
    VAR_27 = VAR_11;
   }
  }
  if (FUNC_10(VAR_1, VAR_19))
   return FUNC_13(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);

  FUNC_1(VAR_15);
  return FUNC_16(VAR_22, VAR_27, VAR_0,
      VAR_19, VAR_23->transport);
 }




 VAR_23->param_hdr.v = FUNC_19(VAR_23->skb, sizeof(sctp_inithdr_t));

 VAR_24 = (sctp_init_chunk_t *) VAR_23->chunk_hdr;

 FUNC_9(VAR_22, VAR_6,
   FUNC_4(VAR_24));


 FUNC_9(VAR_22, VAR_4, FUNC_2());





 FUNC_9(VAR_22, VAR_9,
   FUNC_6(VAR_14));
 FUNC_9(VAR_22, VAR_8,
   FUNC_6(VAR_13));
 FUNC_9(VAR_22, VAR_5,
   FUNC_5(VAR_17));




 FUNC_9(VAR_22, VAR_2, FUNC_2());







 FUNC_9(VAR_22, VAR_3,
   FUNC_0(VAR_25));

 return VAR_10;
}
