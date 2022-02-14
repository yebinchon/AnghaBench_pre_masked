
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int dummy; } ;
struct sctp_association {int outqueue; } ;
typedef int sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sctp_endpoint const*,struct sctp_association const*,int const,void*,int *) ;

sctp_disposition_t FUNC_5(
 const struct sctp_endpoint *VAR_4,
 const struct sctp_association *VAR_5,
 const sctp_subtype_t VAR_6,
 void *VAR_7,
 sctp_cmd_seq_t *VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_2);
 FUNC_2(VAR_8, VAR_0,
   FUNC_1(VAR_3));

 VAR_9 = VAR_1;
 if (FUNC_3(&VAR_5->outqueue)) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6,
           VAR_7, VAR_8);
 }
 return VAR_9;
}
