
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int err_str ;


 int FUNC_0 (struct sctp_endpoint const*,struct sctp_association const*,void*,int *,char const*,int) ;
 int FUNC_1 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;

__attribute__((used)) static sctp_disposition_t FUNC_2(
         const struct sctp_endpoint *VAR_0,
         const struct sctp_association *VAR_1,
         const sctp_subtype_t VAR_2,
         void *VAR_3,
         sctp_cmd_seq_t *VAR_4)
{
 static const char VAR_5[]="The following chunk violates protocol:";

 if (!VAR_1)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5,
     sizeof(VAR_5));
}
