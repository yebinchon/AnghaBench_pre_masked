
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


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;

sctp_disposition_t FUNC_6(
 const struct sctp_endpoint *VAR_8,
 const struct sctp_association *VAR_9,
 const sctp_subtype_t VAR_10,
 void *VAR_11,
 sctp_cmd_seq_t *VAR_12)
{
 struct sctp_chunk *VAR_13 = VAR_11;
 sctp_disposition_t VAR_14;

 VAR_14 = VAR_4;

 FUNC_5(VAR_12, VAR_2, FUNC_0(VAR_13));





 FUNC_5(VAR_12, VAR_3,
   FUNC_2(VAR_0));

 FUNC_5(VAR_12, VAR_1,
   FUNC_4(VAR_5));

 FUNC_3(VAR_6);
 FUNC_1(VAR_7);

 return VAR_14;
}
