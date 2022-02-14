
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sctp_ulpevent*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct sctp_ulpevent* FUNC_2 (struct sctp_association const*,int ) ;

sctp_disposition_t FUNC_3(
 const struct sctp_endpoint *VAR_4,
 const struct sctp_association *VAR_5,
 const sctp_subtype_t VAR_6,
 void *VAR_7,
 sctp_cmd_seq_t *VAR_8)
{
 struct sctp_ulpevent *VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_9)
  return VAR_3;

 FUNC_1(VAR_8, VAR_1, FUNC_0(VAR_9));

 return VAR_2;
}
