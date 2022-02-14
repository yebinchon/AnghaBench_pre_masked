
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_protocol; int sk_timer; int sk_state; int sk_allocation; int sk_sndtimeo; int sk_destruct; } ;
struct TYPE_2__ {int lock; int list; } ;
struct iucv_sock {int transport; int src_user_id; int sk_txnotify; int * path; int msg_recv; int msg_sent; scalar_t__ msglimit; scalar_t__ flags; int pendings; scalar_t__ send_tag; int backlog_skb_q; TYPE_1__ message_q; int send_skb_q; int accept_q_lock; int accept_q; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct iucv_sock* FUNC_2 (struct sock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,struct sock*) ;
 int VAR_12 ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int *,int ,unsigned long) ;
 struct sock* FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct socket*,struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct sock *FUNC_11(struct socket *VAR_14, int VAR_15, gfp_t VAR_16)
{
 struct sock *VAR_17;
 struct iucv_sock *VAR_18;

 VAR_17 = FUNC_6(&VAR_8, VAR_5, VAR_16, &VAR_9);
 if (!VAR_17)
  return ((void*)0);
 VAR_18 = FUNC_2(VAR_17);

 FUNC_8(VAR_14, VAR_17);
 FUNC_0(&VAR_18->accept_q);
 FUNC_10(&VAR_18->accept_q_lock);
 FUNC_7(&VAR_18->send_skb_q);
 FUNC_0(&VAR_18->message_q.list);
 FUNC_10(&VAR_18->message_q.lock);
 FUNC_7(&VAR_18->backlog_skb_q);
 VAR_18->send_tag = 0;
 FUNC_1(&VAR_18->pendings, 0);
 VAR_18->flags = 0;
 VAR_18->msglimit = 0;
 FUNC_1(&VAR_18->msg_sent, 0);
 FUNC_1(&VAR_18->msg_recv, 0);
 VAR_18->path = ((void*)0);
 VAR_18->sk_txnotify = VAR_7;
 FUNC_4(&VAR_18->src_user_id , 0, 32);
 if (VAR_13)
  VAR_18->transport = VAR_1;
 else
  VAR_18->transport = VAR_0;

 VAR_17->sk_destruct = VAR_11;
 VAR_17->sk_sndtimeo = VAR_3;
 VAR_17->sk_allocation = VAR_2;

 FUNC_9(VAR_17, VAR_6);

 VAR_17->sk_protocol = VAR_15;
 VAR_17->sk_state = VAR_4;

 FUNC_5(&VAR_17->sk_timer, VAR_12, (unsigned long)VAR_17);

 FUNC_3(&VAR_10, VAR_17);
 return VAR_17;
}
