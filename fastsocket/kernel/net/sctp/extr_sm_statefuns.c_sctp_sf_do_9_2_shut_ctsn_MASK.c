
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_shutdown_chunk_t {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {TYPE_1__* skb; } ;
struct sctp_association {int next_tsn; int ctsn_ack_point; } ;
typedef int sctp_subtype_t ;
struct TYPE_4__ {int cum_tsn_ack; } ;
typedef TYPE_2__ sctp_shutdownhdr_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int __u32 ;
struct TYPE_3__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 int FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_9 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_10(const struct sctp_endpoint *VAR_3,
        const struct sctp_association *VAR_4,
        const sctp_subtype_t VAR_5,
        void *VAR_6,
        sctp_cmd_seq_t *VAR_7)
{
 struct sctp_chunk *VAR_8 = VAR_6;
 sctp_shutdownhdr_t *VAR_9;
 __u32 VAR_10;

 if (!FUNC_9(VAR_8, VAR_4))
  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 if (!FUNC_5(VAR_8,
          sizeof(struct sctp_shutdown_chunk_t)))
  return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);

 VAR_9 = (sctp_shutdownhdr_t *)VAR_8->skb->data;
 VAR_10 = FUNC_3(VAR_9->cum_tsn_ack);

 if (FUNC_2(VAR_10, VAR_4->ctsn_ack_point)) {
  FUNC_1("ctsn %x\n", VAR_10);
  FUNC_1("ctsn_ack_point %x\n", VAR_4->ctsn_ack_point);
  return VAR_2;
 }





 if (!FUNC_2(VAR_10, VAR_4->next_tsn))
  return FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);





 FUNC_4(VAR_7, VAR_0,
   FUNC_0(VAR_9->cum_tsn_ack));

 return VAR_1;
}
