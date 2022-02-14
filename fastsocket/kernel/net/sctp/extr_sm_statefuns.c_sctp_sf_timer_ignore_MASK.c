
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
struct TYPE_3__ {int chunk; } ;
typedef TYPE_1__ sctp_subtype_t ;
typedef int sctp_disposition_t ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

sctp_disposition_t FUNC_1(const struct sctp_endpoint *VAR_1,
     const struct sctp_association *VAR_2,
     const sctp_subtype_t VAR_3,
     void *VAR_4,
     sctp_cmd_seq_t *VAR_5)
{
 FUNC_0("Timer %d ignored.\n", VAR_3.chunk);
 return VAR_0;
}
