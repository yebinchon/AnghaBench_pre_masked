
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin; } ;
struct sockaddr_rxrpc {TYPE_1__ transport; } ;
struct rxrpc_local {int socket; int debug_id; } ;
struct rxrpc_header {int serial; scalar_t__ _rsvd; scalar_t__ userStatus; scalar_t__ flags; int type; scalar_t__ seq; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int * msg_name; } ;
struct kvec {int iov_len; struct rxrpc_header* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct msghdr*,struct kvec*,int,size_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rxrpc_local *VAR_2, struct sockaddr_rxrpc *VAR_3,
        struct rxrpc_header *VAR_4)
{
 struct msghdr VAR_5;
 struct kvec VAR_6[1];
 size_t VAR_7;
 int VAR_8;

 FUNC_0("%d,,", VAR_2->debug_id);

 VAR_5.msg_name = &VAR_3->transport.sin;
 VAR_5.msg_namelen = sizeof(VAR_3->transport.sin);
 VAR_5.msg_control = ((void*)0);
 VAR_5.msg_controllen = 0;
 VAR_5.msg_flags = 0;

 VAR_4->seq = 0;
 VAR_4->type = VAR_1;
 VAR_4->flags = 0;
 VAR_4->userStatus = 0;
 VAR_4->_rsvd = 0;

 VAR_6[0].iov_base = VAR_4;
 VAR_6[0].iov_len = sizeof(*VAR_4);

 VAR_7 = VAR_6[0].iov_len;

 VAR_4->serial = FUNC_3(1);
 FUNC_2("Tx BUSY %%%u", FUNC_5(VAR_4->serial));

 VAR_8 = FUNC_4(VAR_2->socket, &VAR_5, VAR_6, 1, VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(" = -EAGAIN [sendmsg failed: %d]", VAR_8);
  return -VAR_0;
 }

 FUNC_1(" = 0");
 return 0;
}
