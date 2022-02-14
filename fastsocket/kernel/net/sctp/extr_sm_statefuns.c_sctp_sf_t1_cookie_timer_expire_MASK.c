
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int init_err_counter; int max_init_attempts; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association const*,int *) ;

sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_12,
        const struct sctp_association *VAR_13,
        const sctp_subtype_t VAR_14,
        void *VAR_15,
        sctp_cmd_seq_t *VAR_16)
{
 struct sctp_chunk *VAR_17 = ((void*)0);
 int VAR_18 = VAR_13->init_err_counter + 1;

 FUNC_1("Timer T1 expired (COOKIE-ECHO).\n");
 FUNC_3(VAR_11);

 if (VAR_18 <= VAR_13->max_init_attempts) {
  VAR_17 = FUNC_7(VAR_13, ((void*)0));
  if (!VAR_17)
   return VAR_8;

  FUNC_6(VAR_16, VAR_2,
    FUNC_0(VAR_17));

  FUNC_6(VAR_16, VAR_1,
    FUNC_5(VAR_10));

  FUNC_6(VAR_16, VAR_4, FUNC_0(VAR_17));
 } else {
  FUNC_6(VAR_16, VAR_5,
    FUNC_2(VAR_0));
  FUNC_6(VAR_16, VAR_3,
    FUNC_4(VAR_9));
  return VAR_7;
 }

 return VAR_6;
}
