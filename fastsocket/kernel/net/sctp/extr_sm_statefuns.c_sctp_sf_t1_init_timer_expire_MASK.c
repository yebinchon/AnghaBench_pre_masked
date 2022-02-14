
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_bind_addr {int dummy; } ;
struct TYPE_2__ {int bind_addr; } ;
struct sctp_association {int init_err_counter; int max_init_attempts; TYPE_1__ base; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association const*,struct sctp_bind_addr*,int ,int ) ;

sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_13,
        const struct sctp_association *VAR_14,
        const sctp_subtype_t VAR_15,
        void *VAR_16,
        sctp_cmd_seq_t *VAR_17)
{
 struct sctp_chunk *VAR_18 = ((void*)0);
 struct sctp_bind_addr *VAR_19;
 int VAR_20 = VAR_14->init_err_counter + 1;

 FUNC_1("Timer T1 expired (INIT).\n");
 FUNC_3(VAR_12);

 if (VAR_20 <= VAR_14->max_init_attempts) {
  VAR_19 = (struct sctp_bind_addr *) &VAR_14->base.bind_addr;
  VAR_18 = FUNC_7(VAR_14, VAR_19, VAR_1, 0);
  if (!VAR_18)
   return VAR_9;


  FUNC_6(VAR_17, VAR_2,
    FUNC_0(VAR_18));


  FUNC_6(VAR_17, VAR_4,
    FUNC_5(VAR_11));

  FUNC_6(VAR_17, VAR_5, FUNC_0(VAR_18));
 } else {
  FUNC_1("Giving up on INIT, attempts: %d"
      " max_init_attempts: %d\n",
      VAR_20, VAR_14->max_init_attempts);
  FUNC_6(VAR_17, VAR_6,
    FUNC_2(VAR_0));
  FUNC_6(VAR_17, VAR_3,
    FUNC_4(VAR_10));
  return VAR_8;
 }

 return VAR_7;
}
