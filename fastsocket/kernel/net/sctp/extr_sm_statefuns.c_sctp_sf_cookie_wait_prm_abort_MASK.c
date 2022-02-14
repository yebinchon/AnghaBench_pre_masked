
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;

sctp_disposition_t FUNC_7(
 const struct sctp_endpoint *VAR_11,
 const struct sctp_association *VAR_12,
 const sctp_subtype_t VAR_13,
 void *VAR_14,
 sctp_cmd_seq_t *VAR_15)
{
 struct sctp_chunk *VAR_16 = VAR_14;
 sctp_disposition_t VAR_17;


 FUNC_6(VAR_15, VAR_5,
   FUNC_5(VAR_8));
 VAR_17 = VAR_6;

 FUNC_6(VAR_15, VAR_3, FUNC_0(VAR_16));

 FUNC_6(VAR_15, VAR_2,
   FUNC_4(VAR_10));

 FUNC_2(VAR_9);





 FUNC_6(VAR_15, VAR_4,
   FUNC_1(VAR_0));

 FUNC_6(VAR_15, VAR_1,
   FUNC_3(VAR_7));

 return VAR_17;
}
