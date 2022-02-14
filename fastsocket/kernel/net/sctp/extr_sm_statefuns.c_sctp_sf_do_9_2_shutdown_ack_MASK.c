
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_shutdown_chunk_t {int dummy; } ;
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
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_7 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_9 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_10(
 const struct sctp_endpoint *VAR_11,
 const struct sctp_association *VAR_12,
 const sctp_subtype_t VAR_13,
 void *VAR_14,
 sctp_cmd_seq_t *VAR_15)
{
 struct sctp_chunk *VAR_16 = (struct sctp_chunk *) VAR_14;
 struct sctp_chunk *VAR_17;
 if (VAR_16) {
  if (!FUNC_9(VAR_16, VAR_12))
   return FUNC_7(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);


  if (!FUNC_5(VAR_16, sizeof(struct sctp_shutdown_chunk_t)))
   return FUNC_8(VAR_11, VAR_12, VAR_13, VAR_14,
         VAR_15);
 }




 VAR_17 = FUNC_6(VAR_12, VAR_16);
 if (!VAR_17)
  goto nomem;




 FUNC_4(VAR_15, VAR_3, FUNC_0(VAR_17));


 FUNC_4(VAR_15, VAR_4,
   FUNC_3(VAR_9));

 if (VAR_12->autoclose)
  FUNC_4(VAR_15, VAR_5,
    FUNC_3(VAR_8));


 FUNC_4(VAR_15, VAR_1,
   FUNC_2(VAR_10));






 FUNC_4(VAR_15, VAR_0, FUNC_1());

 FUNC_4(VAR_15, VAR_2, FUNC_0(VAR_17));

 return VAR_6;

nomem:
 return VAR_7;
}
