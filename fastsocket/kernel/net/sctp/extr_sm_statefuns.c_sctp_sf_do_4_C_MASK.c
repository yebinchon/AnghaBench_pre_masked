
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {int singleton; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;
typedef int sctp_chunkhdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct sctp_chunk*,int) ;
 int FUNC_8 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 int FUNC_10 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;
 struct sctp_ulpevent* FUNC_11 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_12 (struct sctp_chunk*,struct sctp_association const*) ;

sctp_disposition_t FUNC_13(const struct sctp_endpoint *VAR_12,
      const struct sctp_association *VAR_13,
      const sctp_subtype_t VAR_14,
      void *VAR_15,
      sctp_cmd_seq_t *VAR_16)
{
 struct sctp_chunk *VAR_17 = VAR_15;
 struct sctp_ulpevent *VAR_18;

 if (!FUNC_12(VAR_17, VAR_13))
  return FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);






 if (!VAR_17->singleton)
  return FUNC_9(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);


 if (!FUNC_7(VAR_17, sizeof(sctp_chunkhdr_t)))
  return FUNC_10(VAR_12, VAR_13, VAR_14, VAR_15,
        VAR_16);
 VAR_18 = FUNC_11(VAR_13, 0, VAR_10,
          0, 0, 0, ((void*)0), VAR_0);
 if (VAR_18)
  FUNC_6(VAR_16, VAR_2,
    FUNC_5(VAR_18));
 FUNC_6(VAR_16, VAR_4,
   FUNC_4(VAR_6));

 FUNC_6(VAR_16, VAR_4,
   FUNC_4(VAR_7));

 FUNC_6(VAR_16, VAR_3,
   FUNC_3(VAR_11));

 FUNC_1(VAR_9);
 FUNC_0(VAR_8);

 FUNC_6(VAR_16, VAR_1, FUNC_2());

 return VAR_5;
}
