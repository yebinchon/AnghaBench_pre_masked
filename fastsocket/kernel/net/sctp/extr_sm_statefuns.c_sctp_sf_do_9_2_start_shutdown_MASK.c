
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ autoclose; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,int *) ;

sctp_disposition_t FUNC_6(
 const struct sctp_endpoint *VAR_13,
 const struct sctp_association *VAR_14,
 const sctp_subtype_t VAR_15,
 void *VAR_16,
 sctp_cmd_seq_t *VAR_17)
{
 struct sctp_chunk *VAR_18;






 VAR_18 = FUNC_5(VAR_14, ((void*)0));
 if (!VAR_18)
  goto nomem;




 FUNC_4(VAR_17, VAR_3, FUNC_0(VAR_18));


 FUNC_4(VAR_17, VAR_5,
   FUNC_3(VAR_10));





 FUNC_4(VAR_17, VAR_4,
   FUNC_3(VAR_11));

 if (VAR_14->autoclose)
  FUNC_4(VAR_17, VAR_6,
    FUNC_3(VAR_9));


 FUNC_4(VAR_17, VAR_1,
   FUNC_2(VAR_12));






 FUNC_4(VAR_17, VAR_0, FUNC_1());

 FUNC_4(VAR_17, VAR_2, FUNC_0(VAR_18));

 return VAR_7;

nomem:
 return VAR_8;
}
