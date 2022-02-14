
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;

sctp_disposition_t FUNC_3(
 const struct sctp_endpoint *VAR_2,
 const struct sctp_association *VAR_3,
 const sctp_subtype_t VAR_4,
 void *VAR_5,
 sctp_cmd_seq_t *VAR_6)
{

 FUNC_1(VAR_6, VAR_0,
   FUNC_0(VAR_1));

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
