
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;

sctp_disposition_t FUNC_5(
 const struct sctp_endpoint *VAR_7,
 const struct sctp_association *VAR_8,
 const sctp_subtype_t VAR_9,
 void *VAR_10,
 sctp_cmd_seq_t *VAR_11)
{
 FUNC_4(VAR_11, VAR_2,
   FUNC_3(VAR_4));

 FUNC_4(VAR_11, VAR_1,
   FUNC_2(VAR_6));

 FUNC_0(VAR_5);

 FUNC_4(VAR_11, VAR_0, FUNC_1());

 return VAR_3;
}
