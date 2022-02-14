
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {TYPE_2__* skb; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
struct TYPE_3__ {int lowest_tsn; } ;
typedef TYPE_1__ sctp_ecnehdr_t ;
typedef int sctp_ecne_chunk_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct sctp_chunk*,int) ;
 int FUNC_4 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_5 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_6 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_7 (TYPE_2__*,int) ;

sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_2,
       const struct sctp_association *VAR_3,
       const sctp_subtype_t VAR_4,
       void *VAR_5,
       sctp_cmd_seq_t *VAR_6)
{
 sctp_ecnehdr_t *VAR_7;
 struct sctp_chunk *VAR_8 = VAR_5;

 if (!FUNC_6(VAR_8, VAR_3))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 if (!FUNC_3(VAR_8, sizeof(sctp_ecne_chunk_t)))
  return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6);

 VAR_7 = (sctp_ecnehdr_t *) VAR_8->skb->data;
 FUNC_7(VAR_8->skb, sizeof(sctp_ecnehdr_t));


 FUNC_2(VAR_6, VAR_0,
   FUNC_0(FUNC_1(VAR_7->lowest_tsn)));

 return VAR_1;
}
