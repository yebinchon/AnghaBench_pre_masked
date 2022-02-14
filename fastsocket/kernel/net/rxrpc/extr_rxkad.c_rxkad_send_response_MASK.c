
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rxrpc_header {int serial; scalar_t__ _rsvd; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; int epoch; } ;
struct rxrpc_connection {TYPE_5__* trans; int serial; int out_clientflag; int epoch; } ;
struct rxkad_response {int serial; scalar_t__ _rsvd; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; int epoch; } ;
struct rxkad_key {int ticket_len; scalar_t__ ticket; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int * msg_name; } ;
struct kvec {int iov_len; struct rxrpc_header* iov_base; } ;
struct TYPE_10__ {TYPE_4__* local; TYPE_3__* peer; } ;
struct TYPE_9__ {int socket; } ;
struct TYPE_6__ {int sin; } ;
struct TYPE_7__ {TYPE_1__ transport; } ;
struct TYPE_8__ {TYPE_2__ srx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct msghdr*,struct kvec*,int,size_t) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct rxrpc_connection *VAR_2,
          struct rxrpc_header *VAR_3,
          struct rxkad_response *VAR_4,
          const struct rxkad_key *VAR_5)
{
 struct msghdr VAR_6;
 struct kvec VAR_7[3];
 size_t VAR_8;
 int VAR_9;

 FUNC_1("");

 VAR_6.msg_name = &VAR_2->trans->peer->srx.transport.sin;
 VAR_6.msg_namelen = sizeof(VAR_2->trans->peer->srx.transport.sin);
 VAR_6.msg_control = ((void*)0);
 VAR_6.msg_controllen = 0;
 VAR_6.msg_flags = 0;

 VAR_3->epoch = VAR_2->epoch;
 VAR_3->seq = 0;
 VAR_3->type = VAR_1;
 VAR_3->flags = VAR_2->out_clientflag;
 VAR_3->userStatus = 0;
 VAR_3->_rsvd = 0;

 VAR_7[0].iov_base = VAR_3;
 VAR_7[0].iov_len = sizeof(*VAR_3);
 VAR_7[1].iov_base = VAR_4;
 VAR_7[1].iov_len = sizeof(*VAR_4);
 VAR_7[2].iov_base = (void *) VAR_5->ticket;
 VAR_7[2].iov_len = VAR_5->ticket_len;

 VAR_8 = VAR_7[0].iov_len + VAR_7[1].iov_len + VAR_7[2].iov_len;

 VAR_3->serial = FUNC_5(FUNC_4(&VAR_2->serial));
 FUNC_3("Tx RESPONSE %%%u", FUNC_7(VAR_3->serial));

 VAR_9 = FUNC_6(VAR_2->trans->local->socket, &VAR_6, VAR_7, 3, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0("sendmsg failed: %d", VAR_9);
  return -VAR_0;
 }

 FUNC_2(" = 0");
 return 0;
}
