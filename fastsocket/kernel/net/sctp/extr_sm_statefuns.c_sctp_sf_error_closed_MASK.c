
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;

sctp_disposition_t FUNC_2(const struct sctp_endpoint *VAR_3,
     const struct sctp_association *VAR_4,
     const sctp_subtype_t VAR_5,
     void *VAR_6,
     sctp_cmd_seq_t *VAR_7)
{
 FUNC_1(VAR_7, VAR_1, FUNC_0(-VAR_0));
 return VAR_2;
}
