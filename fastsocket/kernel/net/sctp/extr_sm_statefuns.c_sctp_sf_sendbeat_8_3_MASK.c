
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int param_flags; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; } ;
typedef int sctp_subtype_t ;
typedef scalar_t__ sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_transport*) ;
 int VAR_12 ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;

sctp_disposition_t FUNC_7(const struct sctp_endpoint *VAR_13,
     const struct sctp_association *VAR_14,
     const sctp_subtype_t VAR_15,
     void *VAR_16,
     sctp_cmd_seq_t *VAR_17)
{
 struct sctp_transport *VAR_18 = (struct sctp_transport *) VAR_16;

 if (VAR_14->overall_error_count >= VAR_14->max_retrans) {
  FUNC_5(VAR_17, VAR_3,
    FUNC_1(VAR_0));

  FUNC_5(VAR_17, VAR_1,
    FUNC_3(VAR_9));
  FUNC_2(VAR_10);
  FUNC_0(VAR_11);
  return VAR_7;
 }
 if (VAR_18->param_flags & VAR_12) {
  if (VAR_8 ==
    FUNC_6(VAR_13, VAR_14, VAR_15, VAR_16,
        VAR_17))
   return VAR_8;




  FUNC_5(VAR_17, VAR_4,
    FUNC_4(VAR_18));
 }
 FUNC_5(VAR_17, VAR_5,
   FUNC_4(VAR_18));
 FUNC_5(VAR_17, VAR_2,
   FUNC_4(VAR_18));

 return VAR_6;
}
