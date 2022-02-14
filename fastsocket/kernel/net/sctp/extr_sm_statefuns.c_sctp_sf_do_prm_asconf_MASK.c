
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


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

sctp_disposition_t FUNC_3(const struct sctp_endpoint *VAR_5,
     const struct sctp_association *VAR_6,
     const sctp_subtype_t VAR_7,
     void *VAR_8,
     sctp_cmd_seq_t *VAR_9)
{
 struct sctp_chunk *VAR_10 = VAR_8;

 FUNC_2(VAR_9, VAR_1, FUNC_0(VAR_10));
 FUNC_2(VAR_9, VAR_2,
   FUNC_1(VAR_4));
 FUNC_2(VAR_9, VAR_0, FUNC_0(VAR_10));
 return VAR_3;
}
