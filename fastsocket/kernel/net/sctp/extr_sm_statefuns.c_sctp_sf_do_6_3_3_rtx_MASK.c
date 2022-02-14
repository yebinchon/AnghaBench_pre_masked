
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; scalar_t__ state; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_transport*) ;
 int FUNC_6 (int *,int ,int ) ;

sctp_disposition_t FUNC_7(const struct sctp_endpoint *VAR_14,
     const struct sctp_association *VAR_15,
     const sctp_subtype_t VAR_16,
     void *VAR_17,
     sctp_cmd_seq_t *VAR_18)
{
 struct sctp_transport *VAR_19 = VAR_17;

 FUNC_2(VAR_12);

 if (VAR_15->overall_error_count >= VAR_15->max_retrans) {
  if (VAR_15->state == VAR_13) {
   FUNC_6(VAR_18, VAR_5,
    FUNC_4(VAR_9));
  } else {
   FUNC_6(VAR_18, VAR_3,
     FUNC_1(VAR_0));

   FUNC_6(VAR_18, VAR_1,
     FUNC_3(VAR_8));
   FUNC_2(VAR_10);
   FUNC_0(VAR_11);
   return VAR_7;
  }
 }
 FUNC_6(VAR_18, VAR_4, FUNC_5(VAR_19));


 FUNC_6(VAR_18, VAR_2, FUNC_5(VAR_19));

 return VAR_6;
}
