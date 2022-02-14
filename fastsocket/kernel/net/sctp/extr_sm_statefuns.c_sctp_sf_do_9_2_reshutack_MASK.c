
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_5 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;

sctp_disposition_t FUNC_6(const struct sctp_endpoint *VAR_6,
        const struct sctp_association *VAR_7,
        const sctp_subtype_t VAR_8,
        void *VAR_9,
        sctp_cmd_seq_t *VAR_10)
{
 struct sctp_chunk *VAR_11 = (struct sctp_chunk *) VAR_9;
 struct sctp_chunk *VAR_12;


 if (!FUNC_3(VAR_11, sizeof(sctp_chunkhdr_t)))
  return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10);





 VAR_12 = FUNC_4(VAR_7, VAR_11);
 if (((void*)0) == VAR_12)
  goto nomem;




 FUNC_2(VAR_10, VAR_1, FUNC_0(VAR_12));


 FUNC_2(VAR_10, VAR_2,
   FUNC_1(VAR_5));

 FUNC_2(VAR_10, VAR_0, FUNC_0(VAR_12));

 return VAR_3;
nomem:
 return VAR_4;
}
