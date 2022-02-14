
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,int) ;
 int FUNC_1 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;

sctp_disposition_t FUNC_2(const struct sctp_endpoint *VAR_1,
         const struct sctp_association *VAR_2,
         const sctp_subtype_t VAR_3,
         void *VAR_4,
         sctp_cmd_seq_t *VAR_5)
{
 struct sctp_chunk *VAR_6 = VAR_4;


 if (!FUNC_0(VAR_6, sizeof(sctp_chunkhdr_t)))
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5);

 return VAR_0;
}
