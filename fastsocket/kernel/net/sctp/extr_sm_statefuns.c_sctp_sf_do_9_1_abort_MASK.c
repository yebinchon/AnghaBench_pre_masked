
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dest; } ;
struct TYPE_2__ {int bind_addr; } ;
struct sctp_association {TYPE_1__ base; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_abort_chunk_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sctp_chunk*,int) ;
 int FUNC_3 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_4 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_5 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_6(const struct sctp_endpoint *VAR_1,
     const struct sctp_association *VAR_2,
     const sctp_subtype_t VAR_3,
     void *VAR_4,
     sctp_cmd_seq_t *VAR_5)
{
 struct sctp_chunk *VAR_6 = VAR_4;

 if (!FUNC_5(VAR_6, VAR_2))
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (!FUNC_2(VAR_6, sizeof(sctp_abort_chunk_t)))
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);






 if (VAR_0 ==
      FUNC_1(&VAR_2->base.bind_addr, &VAR_6->dest))
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
