
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef scalar_t__ sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct sctp_endpoint const*,struct sctp_association const*,int const,struct sctp_transport*,int *) ;

sctp_disposition_t FUNC_3(
     const struct sctp_endpoint *VAR_3,
     const struct sctp_association *VAR_4,
     const sctp_subtype_t VAR_5,
     void *VAR_6,
     sctp_cmd_seq_t *VAR_7)
{
 if (VAR_2 == FUNC_2(VAR_3, VAR_4, VAR_5,
          (struct sctp_transport *)VAR_6, VAR_7))
  return VAR_2;
 FUNC_1(VAR_7, VAR_0,
   FUNC_0(VAR_6));
 return VAR_1;
}
