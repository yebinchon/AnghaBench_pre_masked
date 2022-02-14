
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_errhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {TYPE_1__* skb; scalar_t__ chunk_end; TYPE_4__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
struct TYPE_6__ {int cause; } ;
typedef TYPE_2__ sctp_errhdr_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int __be16 ;
struct TYPE_7__ {int length; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_7,
     const struct sctp_association *VAR_8,
     const sctp_subtype_t VAR_9,
     void *VAR_10,
     sctp_cmd_seq_t *VAR_11)
{
 struct sctp_chunk *VAR_12 = VAR_10;
 unsigned VAR_13;
 __be16 VAR_14 = VAR_4;


 VAR_13 = FUNC_4(VAR_12->chunk_hdr->length);
 if (VAR_13 >= sizeof(struct sctp_chunkhdr) + sizeof(struct sctp_errhdr)) {

  sctp_errhdr_t *VAR_15;
  FUNC_7(VAR_15, VAR_12->chunk_hdr);
  if ((void *)VAR_15 != (void *)VAR_12->chunk_end)
   return FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

  VAR_14 = ((sctp_errhdr_t *)VAR_12->skb->data)->cause;
 }

 FUNC_5(VAR_11, VAR_2, FUNC_1(VAR_0));

 FUNC_5(VAR_11, VAR_1, FUNC_3(VAR_14));
 FUNC_2(VAR_5);
 FUNC_0(VAR_6);

 return VAR_3;
}
