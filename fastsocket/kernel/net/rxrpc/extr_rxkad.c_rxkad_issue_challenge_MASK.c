
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rxrpc_header {void* serial; int serviceId; scalar_t__ _rsvd; int securityIndex; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; scalar_t__ callNumber; int cid; int epoch; scalar_t__ __padding; void* min_level; void* nonce; void* version; } ;
struct rxrpc_connection {int security_nonce; TYPE_5__* trans; int serial; int service_id; int security_ix; int out_clientflag; int cid; int epoch; int key; int debug_id; } ;
struct rxkad_challenge {void* serial; int serviceId; scalar_t__ _rsvd; int securityIndex; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; scalar_t__ callNumber; int cid; int epoch; scalar_t__ __padding; void* min_level; void* nonce; void* version; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int * msg_name; } ;
struct kvec {int iov_len; struct rxrpc_header* iov_base; } ;
typedef int hdr ;
typedef int challenge ;
struct TYPE_10__ {TYPE_4__* local; TYPE_3__* peer; } ;
struct TYPE_9__ {int socket; } ;
struct TYPE_6__ {int sin; } ;
struct TYPE_7__ {TYPE_1__ transport; } ;
struct TYPE_8__ {TYPE_2__ srx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ,struct msghdr*,struct kvec*,int,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(struct rxrpc_connection *VAR_2)
{
 struct rxkad_challenge VAR_3;
 struct rxrpc_header VAR_4;
 struct msghdr VAR_5;
 struct kvec VAR_6[2];
 size_t VAR_7;
 int VAR_8;

 FUNC_1("{%d,%x}", VAR_2->debug_id, FUNC_8(VAR_2->key));

 VAR_8 = FUNC_9(VAR_2->key);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_5(&VAR_2->security_nonce, sizeof(VAR_2->security_nonce));

 VAR_3.version = FUNC_6(2);
 VAR_3.nonce = FUNC_6(VAR_2->security_nonce);
 VAR_3.min_level = FUNC_6(0);
 VAR_3.__padding = 0;

 VAR_5.msg_name = &VAR_2->trans->peer->srx.transport.sin;
 VAR_5.msg_namelen = sizeof(VAR_2->trans->peer->srx.transport.sin);
 VAR_5.msg_control = ((void*)0);
 VAR_5.msg_controllen = 0;
 VAR_5.msg_flags = 0;

 VAR_4.epoch = VAR_2->epoch;
 VAR_4.cid = VAR_2->cid;
 VAR_4.callNumber = 0;
 VAR_4.seq = 0;
 VAR_4.type = VAR_1;
 VAR_4.flags = VAR_2->out_clientflag;
 VAR_4.userStatus = 0;
 VAR_4.securityIndex = VAR_2->security_ix;
 VAR_4._rsvd = 0;
 VAR_4.serviceId = VAR_2->service_id;

 VAR_6[0].iov_base = &VAR_4;
 VAR_6[0].iov_len = sizeof(VAR_4);
 VAR_6[1].iov_base = &VAR_3;
 VAR_6[1].iov_len = sizeof(VAR_3);

 VAR_7 = VAR_6[0].iov_len + VAR_6[1].iov_len;

 VAR_4.serial = FUNC_6(FUNC_4(&VAR_2->serial));
 FUNC_3("Tx CHALLENGE %%%u", FUNC_10(VAR_4.serial));

 VAR_8 = FUNC_7(VAR_2->trans->local->socket, &VAR_5, VAR_6, 2, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0("sendmsg failed: %d", VAR_8);
  return -VAR_0;
 }

 FUNC_2(" = 0");
 return 0;
}
