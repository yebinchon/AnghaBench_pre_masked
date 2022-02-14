
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; int state; scalar_t__ shutdown_last_sent_to; int shutdown_retries; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ) ;


 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_10 (struct sctp_association const*,int *) ;
 struct sctp_chunk* FUNC_11 (struct sctp_association const*,int *) ;

sctp_disposition_t FUNC_12(const struct sctp_endpoint *VAR_15,
        const struct sctp_association *VAR_16,
        const sctp_subtype_t VAR_17,
        void *VAR_18,
        sctp_cmd_seq_t *VAR_19)
{
 struct sctp_chunk *VAR_20 = ((void*)0);

 FUNC_2("Timer T2 expired.\n");
 FUNC_5(VAR_14);

 ((struct sctp_association *)VAR_16)->shutdown_retries++;

 if (VAR_16->overall_error_count >= VAR_16->max_retrans) {
  FUNC_9(VAR_19, VAR_4,
    FUNC_4(VAR_0));

  FUNC_9(VAR_19, VAR_1,
    FUNC_6(VAR_10));
  FUNC_5(VAR_12);
  FUNC_3(VAR_13);
  return VAR_8;
 }

 switch (VAR_16->state) {
 case 128:
  VAR_20 = FUNC_10(VAR_16, ((void*)0));
  break;

 case 129:
  VAR_20 = FUNC_11(VAR_16, ((void*)0));
  break;

 default:
  FUNC_0();
  break;
 }

 if (!VAR_20)
  goto nomem;





 if (VAR_16->shutdown_last_sent_to)
  FUNC_9(VAR_19, VAR_5,
    FUNC_8(VAR_16->shutdown_last_sent_to));




 FUNC_9(VAR_19, VAR_3, FUNC_1(VAR_20));


 FUNC_9(VAR_19, VAR_6,
   FUNC_7(VAR_11));
 FUNC_9(VAR_19, VAR_2, FUNC_1(VAR_20));
 return VAR_7;

nomem:
 return VAR_9;
}
