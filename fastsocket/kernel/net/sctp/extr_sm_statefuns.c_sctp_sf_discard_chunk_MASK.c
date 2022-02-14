
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct TYPE_4__ {int chunk; } ;
typedef TYPE_1__ sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_chunk*,int) ;
 int FUNC_2 (struct sctp_endpoint const*,struct sctp_association const*,TYPE_1__ const,void*,int *) ;

sctp_disposition_t FUNC_3(const struct sctp_endpoint *VAR_1,
      const struct sctp_association *VAR_2,
      const sctp_subtype_t VAR_3,
      void *VAR_4,
      sctp_cmd_seq_t *VAR_5)
{
 struct sctp_chunk *VAR_6 = VAR_4;





 if (!FUNC_1(VAR_6, sizeof(sctp_chunkhdr_t)))
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5);

 FUNC_0("Chunk %d is discarded\n", VAR_3.chunk);
 return VAR_0;
}
