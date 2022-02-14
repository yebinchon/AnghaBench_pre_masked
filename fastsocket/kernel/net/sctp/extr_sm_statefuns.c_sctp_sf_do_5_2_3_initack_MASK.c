
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
struct TYPE_2__ {struct sctp_endpoint const* ep; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_2 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 TYPE_1__* FUNC_3 (int ) ;

sctp_disposition_t FUNC_4(const struct sctp_endpoint *VAR_0,
         const struct sctp_association *VAR_1,
         const sctp_subtype_t VAR_2,
         void *VAR_3, sctp_cmd_seq_t *VAR_4)
{



 if (VAR_0 == FUNC_3((FUNC_0()))->ep)
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
