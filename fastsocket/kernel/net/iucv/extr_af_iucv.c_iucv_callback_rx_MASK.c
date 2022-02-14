
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iucv_message {int dummy; } ;
struct sock_msg_q {int list; struct iucv_message msg; struct iucv_path* path; } ;
struct sock {int sk_shutdown; int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int lock; int list; } ;
struct iucv_sock {TYPE_1__ message_q; int backlog_skb_q; } ;
struct iucv_path {struct sock* private; } ;
struct TYPE_4__ {int (* message_reject ) (struct iucv_path*,struct iucv_message*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct iucv_message*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,struct iucv_path*,struct iucv_message*) ;
 struct iucv_sock* FUNC_4 (struct sock*) ;
 struct sock_msg_q* FUNC_5 (int,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct iucv_path*,struct iucv_message*) ;

__attribute__((used)) static void FUNC_12(struct iucv_path *VAR_4, struct iucv_message *VAR_5)
{
 struct sock *VAR_6 = VAR_4->private;
 struct iucv_sock *VAR_7 = FUNC_4(VAR_6);
 struct sk_buff *VAR_8;
 struct sock_msg_q *VAR_9;
 int VAR_10;

 if (VAR_6->sk_shutdown & VAR_2) {
  VAR_3->message_reject(VAR_4, VAR_5);
  return;
 }

 FUNC_9(&VAR_7->message_q.lock);

 if (!FUNC_7(&VAR_7->message_q.list) ||
     !FUNC_8(&VAR_7->backlog_skb_q))
  goto save_message;

 VAR_10 = FUNC_1(&VAR_6->sk_rmem_alloc);
 VAR_10 += FUNC_2(VAR_5) + sizeof(struct sk_buff);
 if (VAR_10 > VAR_6->sk_rcvbuf)
  goto save_message;

 VAR_8 = FUNC_0(FUNC_2(VAR_5), VAR_0 | VAR_1);
 if (!VAR_8)
  goto save_message;

 FUNC_3(VAR_6, VAR_8, VAR_4, VAR_5);
 goto out_unlock;

save_message:
 VAR_9 = FUNC_5(sizeof(struct sock_msg_q), VAR_0 | VAR_1);
 if (!VAR_9)
  goto out_unlock;
 VAR_9->path = VAR_4;
 VAR_9->msg = *VAR_5;

 FUNC_6(&VAR_9->list, &VAR_7->message_q.list);

out_unlock:
 FUNC_10(&VAR_7->message_q.lock);
}
