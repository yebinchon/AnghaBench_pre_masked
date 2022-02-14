
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_hdr; } ;
struct sctp_chunk {scalar_t__ end_of_packet; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_datahdr_t ;
typedef int sctp_data_chunk_t ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;







 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 int FUNC_6 (struct sctp_association const*,struct sctp_chunk*,int *) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,struct sctp_chunk*,int *,int *,int) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_10 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_11(const struct sctp_endpoint *VAR_6,
         const struct sctp_association *VAR_7,
         const sctp_subtype_t VAR_8,
         void *VAR_9,
         sctp_cmd_seq_t *VAR_10)
{
 struct sctp_chunk *VAR_11 = VAR_9;
 int VAR_12;

 if (!FUNC_10(VAR_11, VAR_7)) {
  FUNC_4(VAR_10, VAR_2,
    FUNC_2());
  return FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }

 if (!FUNC_5(VAR_11, sizeof(sctp_data_chunk_t)))
  return FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10);

 VAR_12 = FUNC_6(VAR_7, VAR_11, VAR_10 );
 switch (VAR_12) {
 case 129:
 case 132:
 case 133:
 case 131:
 case 134:
  break;
 case 130:
  goto consume;
 case 128:
  return FUNC_7(VAR_6, VAR_7, VAR_11, VAR_10,
   (u8 *)VAR_11->subh.data_hdr, sizeof(sctp_datahdr_t));
 default:
  FUNC_0();
 }
 if (VAR_11->end_of_packet) {



  FUNC_4(VAR_10, VAR_1, FUNC_2());
  FUNC_4(VAR_10, VAR_0, FUNC_1());
  FUNC_4(VAR_10, VAR_3,
    FUNC_3(VAR_5));
 }

consume:
 return VAR_4;
}
