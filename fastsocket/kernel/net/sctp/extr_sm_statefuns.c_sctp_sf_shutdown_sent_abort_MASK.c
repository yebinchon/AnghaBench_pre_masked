
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sctp_chunk*,int) ;
 int FUNC_5 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_7 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_4,
     const struct sctp_association *VAR_5,
     const sctp_subtype_t VAR_6,
     void *VAR_7,
     sctp_cmd_seq_t *VAR_8)
{
 struct sctp_chunk *VAR_9 = VAR_7;

 if (!FUNC_7(VAR_9, VAR_5))
  return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (!FUNC_4(VAR_9, sizeof(sctp_abort_chunk_t)))
  return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);






 if (VAR_0 ==
      FUNC_3(&VAR_5->base.bind_addr, &VAR_9->dest))
  return FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);


 FUNC_2(VAR_8, VAR_1,
   FUNC_0(VAR_2));


 FUNC_2(VAR_8, VAR_1,
   FUNC_0(VAR_3));

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
