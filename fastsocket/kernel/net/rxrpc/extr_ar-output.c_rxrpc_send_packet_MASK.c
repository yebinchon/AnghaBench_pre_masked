
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int head; } ;
struct rxrpc_transport {TYPE_4__* peer; TYPE_3__* local; } ;
struct rxrpc_header {int dummy; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int * msg_name; } ;
struct kvec {int iov_len; int iov_base; } ;
typedef int opt ;
struct TYPE_5__ {int sin; } ;
struct TYPE_6__ {TYPE_1__ transport; } ;
struct TYPE_8__ {int maxdata; TYPE_2__ srx; } ;
struct TYPE_7__ {int defrag_sem; int socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_6 (int ,int ,int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct rxrpc_transport *VAR_5, struct sk_buff *VAR_6)
{
 struct kvec VAR_7[1];
 struct msghdr VAR_8;
 int VAR_9, VAR_10;

 FUNC_1(",{%d}", VAR_6->len);

 VAR_7[0].iov_base = VAR_6->head;
 VAR_7[0].iov_len = VAR_6->len;

 VAR_8.msg_name = &VAR_5->peer->srx.transport.sin;
 VAR_8.msg_namelen = sizeof(VAR_5->peer->srx.transport.sin);
 VAR_8.msg_control = ((void*)0);
 VAR_8.msg_controllen = 0;
 VAR_8.msg_flags = 0;



 if (VAR_6->len - sizeof(struct rxrpc_header) < VAR_5->peer->maxdata) {
  FUNC_3(&VAR_5->local->defrag_sem);






  VAR_9 = FUNC_5(VAR_5->local->socket, &VAR_8, VAR_7, 1,
         VAR_7[0].iov_len);

  FUNC_7(&VAR_5->local->defrag_sem);
  if (VAR_9 == -VAR_0)
   goto send_fragmentable;

  FUNC_2(" = %d [%u]", VAR_9, VAR_5->peer->maxdata);
  return VAR_9;
 }

send_fragmentable:

 FUNC_0("send fragment");

 FUNC_4(&VAR_5->local->defrag_sem);
 VAR_10 = VAR_3;
 VAR_9 = FUNC_6(VAR_5->local->socket, VAR_4, VAR_1,
    (char *) &VAR_10, sizeof(VAR_10));
 if (VAR_9 == 0) {
  VAR_9 = FUNC_5(VAR_5->local->socket, &VAR_8, VAR_7, 1,
         VAR_7[0].iov_len);

  VAR_10 = VAR_2;
  FUNC_6(VAR_5->local->socket, VAR_4,
      VAR_1, (char *) &VAR_10, sizeof(VAR_10));
 }

 FUNC_8(&VAR_5->local->defrag_sem);
 FUNC_2(" = %d [frag %u]", VAR_9, VAR_5->peer->maxdata);
 return VAR_9;
}
