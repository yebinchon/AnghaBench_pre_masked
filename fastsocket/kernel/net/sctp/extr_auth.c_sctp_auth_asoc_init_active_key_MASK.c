
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_shared_key {int dummy; } ;
struct sctp_auth_bytes {int dummy; } ;
struct TYPE_2__ {int auth_capable; } ;
struct sctp_association {struct sctp_auth_bytes* asoc_shared_key; int active_key_id; TYPE_1__ peer; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sctp_auth_bytes* FUNC_1 (struct sctp_association*,struct sctp_shared_key*,int ) ;
 int VAR_1 ;
 struct sctp_shared_key* FUNC_2 (struct sctp_association*,int ) ;
 int FUNC_3 (struct sctp_auth_bytes*) ;

int FUNC_4(struct sctp_association *VAR_2, gfp_t VAR_3)
{
 struct sctp_auth_bytes *VAR_4;
 struct sctp_shared_key *VAR_5;




 if (!VAR_1 || !VAR_2->peer.auth_capable)
  return 0;






 VAR_5 = FUNC_2(VAR_2, VAR_2->active_key_id);
 FUNC_0(!VAR_5);

 VAR_4 = FUNC_1(VAR_2, VAR_5, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_2->asoc_shared_key);
 VAR_2->asoc_shared_key = VAR_4;

 return 0;
}
