
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_shutdown_chunk_t {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_4__ {TYPE_2__* shutdown_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; TYPE_3__* skb; } ;
struct sctp_association {int outqueue; int next_tsn; int ctsn_ack_point; } ;
typedef int sctp_subtype_t ;
struct TYPE_5__ {int cum_tsn_ack; } ;
typedef TYPE_2__ sctp_shutdownhdr_t ;
typedef scalar_t__ sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int __u32 ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct sctp_ulpevent*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct sctp_chunk*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 scalar_t__ FUNC_10 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 scalar_t__ FUNC_11 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 scalar_t__ FUNC_12 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 struct sctp_ulpevent* FUNC_13 (struct sctp_association const*,int ,int ) ;
 int FUNC_14 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_15 (TYPE_3__*,int) ;

sctp_disposition_t FUNC_16(const struct sctp_endpoint *VAR_8,
        const struct sctp_association *VAR_9,
        const sctp_subtype_t VAR_10,
        void *VAR_11,
        sctp_cmd_seq_t *VAR_12)
{
 struct sctp_chunk *VAR_13 = VAR_11;
 sctp_shutdownhdr_t *VAR_14;
 sctp_disposition_t VAR_15;
 struct sctp_ulpevent *VAR_16;
 __u32 VAR_17;

 if (!FUNC_14(VAR_13, VAR_9))
  return FUNC_10(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);


 if (!FUNC_7(VAR_13,
          sizeof(struct sctp_shutdown_chunk_t)))
  return FUNC_11(VAR_8, VAR_9, VAR_10, VAR_11,
        VAR_12);


 VAR_14 = (sctp_shutdownhdr_t *)VAR_13->skb->data;
 FUNC_15(VAR_13->skb, sizeof(sctp_shutdownhdr_t));
 VAR_13->subh.shutdown_hdr = VAR_14;
 VAR_17 = FUNC_5(VAR_14->cum_tsn_ack);

 if (FUNC_4(VAR_17, VAR_9->ctsn_ack_point)) {
  FUNC_1("ctsn %x\n", VAR_17);
  FUNC_1("ctsn_ack_point %x\n", VAR_9->ctsn_ack_point);
  return VAR_5;
 }





 if (!FUNC_4(VAR_17, VAR_9->next_tsn))
  return FUNC_12(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);





 VAR_16 = FUNC_13(VAR_9, 0, VAR_0);
 if (!VAR_16) {
  VAR_15 = VAR_6;
  goto out;
 }
 FUNC_6(VAR_12, VAR_1, FUNC_3(VAR_16));







 FUNC_6(VAR_12, VAR_2,
   FUNC_2(VAR_7));
 VAR_15 = VAR_4;

 if (FUNC_8(&VAR_9->outqueue)) {
  VAR_15 = FUNC_9(VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12);
 }

 if (VAR_6 == VAR_15)
  goto out;





 FUNC_6(VAR_12, VAR_3,
   FUNC_0(VAR_13->subh.shutdown_hdr->cum_tsn_ack));

out:
 return VAR_15;
}
