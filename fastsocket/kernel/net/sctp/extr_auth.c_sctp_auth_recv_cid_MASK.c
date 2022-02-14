
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunks_param {int dummy; } ;
struct TYPE_2__ {scalar_t__ auth_chunks; } ;
struct sctp_association {TYPE_1__ c; } ;
typedef int sctp_cid_t ;


 int FUNC_0 (int ,struct sctp_chunks_param*) ;
 int VAR_0 ;

int FUNC_1(sctp_cid_t VAR_1, const struct sctp_association *VAR_2)
{
 if (!VAR_0 || !VAR_2)
  return 0;

 return FUNC_0(VAR_1,
         (struct sctp_chunks_param *)VAR_2->c.auth_chunks);
}
