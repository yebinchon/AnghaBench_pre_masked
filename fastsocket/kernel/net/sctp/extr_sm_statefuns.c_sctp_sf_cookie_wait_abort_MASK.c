
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_errhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {int transport; TYPE_2__* skb; TYPE_1__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
struct TYPE_6__ {int cause; } ;
typedef TYPE_3__ sctp_errhdr_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_abort_chunk_t ;
typedef int __be16 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int) ;
 int FUNC_2 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_3 (int *,int ,int ,struct sctp_association const*,int ) ;
 int FUNC_4 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_5(const struct sctp_endpoint *VAR_2,
         const struct sctp_association *VAR_3,
         const sctp_subtype_t VAR_4,
         void *VAR_5,
         sctp_cmd_seq_t *VAR_6)
{
 struct sctp_chunk *VAR_7 = VAR_5;
 unsigned VAR_8;
 __be16 VAR_9 = VAR_1;

 if (!FUNC_4(VAR_7, VAR_3))
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!FUNC_1(VAR_7, sizeof(sctp_abort_chunk_t)))
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);


 VAR_8 = FUNC_0(VAR_7->chunk_hdr->length);
 if (VAR_8 >= sizeof(struct sctp_chunkhdr) + sizeof(struct sctp_errhdr))
  VAR_9 = ((sctp_errhdr_t *)VAR_7->skb->data)->cause;

 return FUNC_3(VAR_6, VAR_9, VAR_0, VAR_3,
          VAR_7->transport);
}
