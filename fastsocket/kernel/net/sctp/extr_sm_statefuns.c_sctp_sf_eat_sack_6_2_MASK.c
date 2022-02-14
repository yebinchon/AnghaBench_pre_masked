
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct TYPE_5__ {TYPE_2__* sack_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int next_tsn; int ctsn_ack_point; } ;
typedef int sctp_subtype_t ;
struct TYPE_6__ {int cum_tsn_ack; } ;
typedef TYPE_2__ sctp_sackhdr_t ;
typedef int sctp_sack_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 int FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 TYPE_2__* FUNC_9 (struct sctp_chunk*) ;
 int FUNC_10 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_11(const struct sctp_endpoint *VAR_3,
     const struct sctp_association *VAR_4,
     const sctp_subtype_t VAR_5,
     void *VAR_6,
     sctp_cmd_seq_t *VAR_7)
{
 struct sctp_chunk *VAR_8 = VAR_6;
 sctp_sackhdr_t *VAR_9;
 __u32 VAR_10;

 if (!FUNC_10(VAR_8, VAR_4))
  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 if (!FUNC_5(VAR_8, sizeof(sctp_sack_chunk_t)))
  return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);


 VAR_9 = FUNC_9(VAR_8);

 if (!VAR_9)
  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 VAR_8->subh.sack_hdr = VAR_9;
 VAR_10 = FUNC_3(VAR_9->cum_tsn_ack);







 if (FUNC_2(VAR_10, VAR_4->ctsn_ack_point)) {
  FUNC_0("ctsn %x\n", VAR_10);
  FUNC_0("ctsn_ack_point %x\n", VAR_4->ctsn_ack_point);
  return VAR_2;
 }





 if (!FUNC_2(VAR_10, VAR_4->next_tsn))
  return FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 FUNC_4(VAR_7, VAR_0, FUNC_1(VAR_9));




 return VAR_1;
}
