
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {TYPE_2__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
struct TYPE_7__ {int chunk; } ;
typedef TYPE_1__ sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_8__ {int length; } ;
typedef TYPE_2__ sctp_chunkhdr_t ;


 int FUNC_0 (struct sctp_chunk*) ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association const*,struct sctp_chunk*,int ,TYPE_2__*,int ,int ) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,TYPE_1__ const,void*,int *) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,TYPE_1__ const,void*,int *) ;
 int FUNC_9 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_10(const struct sctp_endpoint *VAR_5,
         const struct sctp_association *VAR_6,
         const sctp_subtype_t VAR_7,
         void *VAR_8,
         sctp_cmd_seq_t *VAR_9)
{
 struct sctp_chunk *VAR_10 = VAR_8;
 struct sctp_chunk *VAR_11;
 sctp_chunkhdr_t *VAR_12;

 FUNC_1("Processing the unknown chunk id %d.\n", VAR_7.chunk);

 if (!FUNC_9(VAR_10, VAR_6))
  return FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);





 if (!FUNC_5(VAR_10, sizeof(sctp_chunkhdr_t)))
  return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8,
        VAR_9);

 switch (VAR_7.chunk & VAR_0) {
 case 131:

  return FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  break;
 case 130:

  VAR_12 = VAR_10->chunk_hdr;
  VAR_11 = FUNC_6(VAR_6, VAR_10,
            VAR_4, VAR_12,
            FUNC_2(FUNC_3(VAR_12->length)),
            0);
  if (VAR_11) {
   FUNC_4(VAR_9, VAR_1,
     FUNC_0(VAR_11));
  }


  FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  return VAR_2;
  break;
 case 129:

  return VAR_3;
  break;
 case 128:

  VAR_12 = VAR_10->chunk_hdr;
  VAR_11 = FUNC_6(VAR_6, VAR_10,
            VAR_4, VAR_12,
            FUNC_2(FUNC_3(VAR_12->length)),
            0);
  if (VAR_11) {
   FUNC_4(VAR_9, VAR_1,
     FUNC_0(VAR_11));
  }

  return VAR_2;
  break;
 default:
  break;
 }

 return VAR_3;
}
