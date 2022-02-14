
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_chunks; int auth_capable; } ;
struct sctp_association {TYPE_1__ peer; } ;
typedef int sctp_cid_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

int FUNC_1(sctp_cid_t VAR_1, const struct sctp_association *VAR_2)
{
 if (!VAR_0 || !VAR_2 || !VAR_2->peer.auth_capable)
  return 0;

 return FUNC_0(VAR_1, VAR_2->peer.peer_chunks);
}
