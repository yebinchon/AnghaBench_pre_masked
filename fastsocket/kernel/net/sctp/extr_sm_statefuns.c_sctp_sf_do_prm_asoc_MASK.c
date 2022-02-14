
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int bind_addr; } ;
struct sctp_association {TYPE_1__ base; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,int *,int ,int ) ;

sctp_disposition_t FUNC_6(const struct sctp_endpoint *VAR_10,
           const struct sctp_association *VAR_11,
           const sctp_subtype_t VAR_12,
           void *VAR_13,
           sctp_cmd_seq_t *VAR_14)
{
 struct sctp_chunk *VAR_15;
 struct sctp_association* VAR_16;





 FUNC_4(VAR_14, VAR_3,
   FUNC_2(VAR_9));
 VAR_15 = FUNC_5(VAR_11, &VAR_11->base.bind_addr, VAR_0, 0);
 if (!VAR_15)
  goto nomem;




 VAR_16 = (struct sctp_association *)VAR_11;
 FUNC_4(VAR_14, VAR_2, FUNC_0(VAR_16));


 FUNC_4(VAR_14, VAR_1,
   FUNC_1(VAR_15));




 FUNC_4(VAR_14, VAR_5,
   FUNC_3(VAR_8));
 FUNC_4(VAR_14, VAR_4, FUNC_1(VAR_15));
 return VAR_6;

nomem:
 return VAR_7;
}
