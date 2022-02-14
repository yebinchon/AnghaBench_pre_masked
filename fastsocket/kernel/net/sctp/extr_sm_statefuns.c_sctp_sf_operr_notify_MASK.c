
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {scalar_t__ chunk_end; int chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_operr_chunk_t ;
typedef int sctp_errhdr_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct sctp_chunk*,int) ;
 int FUNC_3 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_4 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_5 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,void*,int *) ;
 int FUNC_6 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_7 (int *,int ) ;

sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_2,
     const struct sctp_association *VAR_3,
     const sctp_subtype_t VAR_4,
     void *VAR_5,
     sctp_cmd_seq_t *VAR_6)
{
 struct sctp_chunk *VAR_7 = VAR_5;
 sctp_errhdr_t *VAR_8;

 if (!FUNC_6(VAR_7, VAR_3))
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);


 if (!FUNC_2(VAR_7, sizeof(sctp_operr_chunk_t)))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6);
 FUNC_7(VAR_8, VAR_7->chunk_hdr);
 if ((void *)VAR_8 != (void *)VAR_7->chunk_end)
  return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5,
        (void *)VAR_8, VAR_6);

 FUNC_1(VAR_6, VAR_0,
   FUNC_0(VAR_7));

 return VAR_1;
}
