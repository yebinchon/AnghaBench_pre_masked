
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_chunk {struct sctp_transport* transport; } ;
struct sctp_association {scalar_t__ overall_error_count; scalar_t__ max_retrans; struct sctp_chunk* addip_last_asconf; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_transport*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct sctp_chunk*) ;

sctp_disposition_t FUNC_9(
 const struct sctp_endpoint *VAR_15,
 const struct sctp_association *VAR_16,
 const sctp_subtype_t VAR_17,
 void *VAR_18,
 sctp_cmd_seq_t *VAR_19)
{
 struct sctp_chunk *VAR_20 = VAR_16->addip_last_asconf;
 struct sctp_transport *VAR_21 = VAR_20->transport;

 FUNC_3(VAR_14);





 if (VAR_21)
  FUNC_7(VAR_19, VAR_5,
    FUNC_6(VAR_21));


 FUNC_7(VAR_19, VAR_3, FUNC_0(VAR_20));






 if (VAR_16->overall_error_count >= VAR_16->max_retrans) {
  FUNC_7(VAR_19, VAR_7,
    FUNC_5(VAR_11));
  FUNC_7(VAR_19, VAR_4,
    FUNC_2(VAR_0));
  FUNC_7(VAR_19, VAR_1,
    FUNC_4(VAR_10));
  FUNC_3(VAR_12);
  FUNC_1(VAR_13);
  return VAR_8;
 }
 FUNC_8(VAR_16->addip_last_asconf);
 FUNC_7(VAR_19, VAR_2,
   FUNC_0(VAR_16->addip_last_asconf));





 FUNC_7(VAR_19, VAR_6,
   FUNC_5(VAR_11));

 return VAR_9;
}
