
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_paramhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_5__ {scalar_t__ addip_hdr; } ;
struct sctp_chunk {TYPE_2__ subh; scalar_t__ chunk_end; TYPE_1__* skb; int auth; } ;
struct sctp_association {scalar_t__ addip_serial; struct sctp_chunk* addip_last_asconf; } ;
typedef int sctp_subtype_t ;
typedef int sctp_paramhdr_t ;
typedef int sctp_errhdr_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_6__ {int serial; scalar_t__ params; } ;
typedef TYPE_3__ sctp_addiphdr_t ;
typedef int sctp_addip_chunk_t ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_16 ;
 int FUNC_10 (struct sctp_chunk*,int) ;
 int FUNC_11 (struct sctp_chunk*,int ,int ) ;
 struct sctp_chunk* FUNC_12 (struct sctp_association const*,struct sctp_chunk*,int) ;
 int FUNC_13 (struct sctp_association*,struct sctp_chunk*) ;
 int FUNC_14 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_15 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_16 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_17 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,void*,int *) ;
 int FUNC_18 (struct sctp_association const*,int *,void*,struct sctp_paramhdr**) ;
 int FUNC_19 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_20(const struct sctp_endpoint *VAR_17,
      const struct sctp_association *VAR_18,
      const sctp_subtype_t VAR_19, void *VAR_20,
      sctp_cmd_seq_t *VAR_21)
{
 struct sctp_chunk *VAR_22 = VAR_20;
 struct sctp_chunk *VAR_23 = VAR_18->addip_last_asconf;
 struct sctp_chunk *VAR_24;
 struct sctp_paramhdr *VAR_25 = ((void*)0);
 sctp_addiphdr_t *VAR_26;
 __u32 VAR_27, VAR_28;

 if (!FUNC_19(VAR_22, VAR_18)) {
  FUNC_9(VAR_21, VAR_4,
    FUNC_5());
  return FUNC_15(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
 }







 if (!VAR_16 && !VAR_22->auth)
  return FUNC_14(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);


 if (!FUNC_10(VAR_22, sizeof(sctp_addip_chunk_t)))
  return FUNC_16(VAR_17, VAR_18, VAR_19, VAR_20,
        VAR_21);

 VAR_26 = (sctp_addiphdr_t *)VAR_22->skb->data;
 VAR_28 = FUNC_8(VAR_26->serial);


 if (!FUNC_18(VAR_18,
     (sctp_paramhdr_t *)VAR_26->params,
     (void *)VAR_22->chunk_end,
     &VAR_25))
  return FUNC_17(VAR_17, VAR_18, VAR_19, VAR_20,
      (void *)VAR_25, VAR_21);

 if (VAR_23) {
  VAR_26 = (sctp_addiphdr_t *)VAR_23->subh.addip_hdr;
  VAR_27 = FUNC_8(VAR_26->serial);
 } else {
  VAR_27 = VAR_18->addip_serial - 1;
 }







 if (FUNC_0(VAR_28, VAR_27 + 1) &&
     !(VAR_18->addip_last_asconf)) {
  VAR_24 = FUNC_12(VAR_18, VAR_22,
     sizeof(sctp_errhdr_t));
  if (VAR_24) {
   FUNC_11(VAR_24, VAR_11, 0);
   FUNC_9(VAR_21, VAR_3,
     FUNC_1(VAR_24));
  }



  FUNC_9(VAR_21, VAR_7,
    FUNC_7(VAR_13));
  FUNC_9(VAR_21, VAR_2,FUNC_5());
  FUNC_9(VAR_21, VAR_6,
    FUNC_3(VAR_0));
  FUNC_9(VAR_21, VAR_1,
    FUNC_6(VAR_11));
  FUNC_4(VAR_14);
  FUNC_2(VAR_15);
  return VAR_8;
 }

 if ((VAR_28 == VAR_27) && VAR_18->addip_last_asconf) {
  FUNC_9(VAR_21, VAR_7,
    FUNC_7(VAR_13));

  if (!FUNC_13((struct sctp_association *)VAR_18,
          VAR_22)) {



   FUNC_9(VAR_21, VAR_5,
     FUNC_5());
   return VAR_9;
  }

  VAR_24 = FUNC_12(VAR_18, VAR_22,
     sizeof(sctp_errhdr_t));
  if (VAR_24) {
   FUNC_11(VAR_24, VAR_12, 0);
   FUNC_9(VAR_21, VAR_3,
     FUNC_1(VAR_24));
  }



  FUNC_9(VAR_21, VAR_2,FUNC_5());
  FUNC_9(VAR_21, VAR_6,
    FUNC_3(VAR_0));
  FUNC_9(VAR_21, VAR_1,
    FUNC_6(VAR_11));
  FUNC_4(VAR_14);
  FUNC_2(VAR_15);
  return VAR_8;
 }

 return VAR_10;
}
