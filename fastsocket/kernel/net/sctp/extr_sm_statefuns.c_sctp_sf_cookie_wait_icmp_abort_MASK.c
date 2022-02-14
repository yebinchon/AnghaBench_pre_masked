
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct sctp_association const*,struct sctp_transport*) ;

sctp_disposition_t FUNC_1(const struct sctp_endpoint *VAR_2,
     const struct sctp_association *VAR_3,
     const sctp_subtype_t VAR_4,
     void *VAR_5,
     sctp_cmd_seq_t *VAR_6)
{
 return FUNC_0(VAR_6, VAR_1,
          VAR_0, VAR_3,
          (struct sctp_transport *)VAR_5);
}
