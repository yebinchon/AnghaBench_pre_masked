
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_datamsg {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_datamsg*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;

sctp_disposition_t FUNC_2(const struct sctp_endpoint *VAR_2,
           const struct sctp_association *VAR_3,
           const sctp_subtype_t VAR_4,
           void *VAR_5,
           sctp_cmd_seq_t *VAR_6)
{
 struct sctp_datamsg *VAR_7 = VAR_5;

 FUNC_1(VAR_6, VAR_0, FUNC_0(VAR_7));
 return VAR_1;
}
