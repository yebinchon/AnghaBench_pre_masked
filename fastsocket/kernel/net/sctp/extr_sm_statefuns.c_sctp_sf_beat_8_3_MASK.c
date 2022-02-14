
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct TYPE_7__ {int * hb_hdr; } ;
struct sctp_chunk {TYPE_6__* skb; TYPE_2__* chunk_hdr; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
struct TYPE_9__ {int length; } ;
typedef TYPE_3__ sctp_paramhdr_t ;
typedef int sctp_heartbeathdr_t ;
typedef int sctp_heartbeat_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_8__ {int length; } ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,size_t) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,struct sctp_chunk*,TYPE_3__*,size_t) ;
 int FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,TYPE_3__*,int *) ;
 int FUNC_9 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_10(const struct sctp_endpoint *VAR_3,
        const struct sctp_association *VAR_4,
        const sctp_subtype_t VAR_5,
        void *VAR_6,
        sctp_cmd_seq_t *VAR_7)
{
 sctp_paramhdr_t *VAR_8;
 struct sctp_chunk *VAR_9 = VAR_6;
 struct sctp_chunk *VAR_10;
 size_t VAR_11 = 0;

 if (!FUNC_9(VAR_9, VAR_4))
  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 if (!FUNC_4(VAR_9, sizeof(sctp_heartbeat_chunk_t)))
  return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);





 VAR_9->subh.hb_hdr = (sctp_heartbeathdr_t *) VAR_9->skb->data;
 VAR_8 = (sctp_paramhdr_t *) VAR_9->subh.hb_hdr;
 VAR_11 = FUNC_1(VAR_9->chunk_hdr->length) - sizeof(sctp_chunkhdr_t);

 if (FUNC_1(VAR_8->length) > VAR_11)
  return FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_8, VAR_7);

 if (!FUNC_2(VAR_9->skb, VAR_11))
  goto nomem;

 VAR_10 = FUNC_5(VAR_4, VAR_9, VAR_8, VAR_11);
 if (!VAR_10)
  goto nomem;

 FUNC_3(VAR_7, VAR_0, FUNC_0(VAR_10));
 return VAR_1;

nomem:
 return VAR_2;
}
