
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_paramhdr {int dummy; } ;
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
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int ,struct sctp_association const*) ;
 struct sctp_chunk* FUNC_8 (struct sctp_association const*,struct sctp_chunk*,struct sctp_paramhdr*) ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,int ,void*,int *) ;

__attribute__((used)) static sctp_disposition_t FUNC_10(
         const struct sctp_endpoint *VAR_11,
         const struct sctp_association *VAR_12,
         const sctp_subtype_t VAR_13,
         void *VAR_14, void *VAR_15,
         sctp_cmd_seq_t *VAR_16)
{
 struct sctp_chunk *VAR_17 = VAR_14;
 struct sctp_paramhdr *VAR_18 = VAR_15;
 struct sctp_chunk *VAR_19 = ((void*)0);

 if (FUNC_7(VAR_1, VAR_12))
  goto discard;


 VAR_19 = FUNC_8(VAR_12, VAR_17, VAR_18);
 if (!VAR_19)
  goto nomem;

 FUNC_6(VAR_16, VAR_3, FUNC_0(VAR_19));
 FUNC_3(VAR_10);

 FUNC_6(VAR_16, VAR_4,
   FUNC_2(VAR_0));
 FUNC_6(VAR_16, VAR_2,
   FUNC_4(VAR_7));
 FUNC_1(VAR_9);
 FUNC_3(VAR_8);

discard:
 FUNC_9(VAR_11, VAR_12, FUNC_5(0), VAR_14, VAR_16);
 return VAR_5;
nomem:
 return VAR_6;
}
