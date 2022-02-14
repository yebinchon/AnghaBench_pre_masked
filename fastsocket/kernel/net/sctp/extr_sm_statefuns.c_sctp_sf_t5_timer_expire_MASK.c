
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


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association const*,int *,int ) ;

sctp_disposition_t FUNC_8(const struct sctp_endpoint *VAR_10,
        const struct sctp_association *VAR_11,
        const sctp_subtype_t VAR_12,
        void *VAR_13,
        sctp_cmd_seq_t *VAR_14)
{
 struct sctp_chunk *VAR_15 = ((void*)0);

 FUNC_1("Timer T5 expired.\n");
 FUNC_4(VAR_9);

 VAR_15 = FUNC_7(VAR_11, ((void*)0), 0);
 if (!VAR_15)
  goto nomem;

 FUNC_6(VAR_14, VAR_2, FUNC_0(VAR_15));
 FUNC_6(VAR_14, VAR_3,
   FUNC_3(VAR_0));
 FUNC_6(VAR_14, VAR_1,
   FUNC_5(VAR_6));

 FUNC_4(VAR_7);
 FUNC_2(VAR_8);

 return VAR_4;
nomem:
 return VAR_5;
}
