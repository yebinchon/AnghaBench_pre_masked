
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; int wait; int type; } ;
struct sock {size_t sk_family; int sk_rcvlowat; int sk_drops; int sk_refcnt; int sk_stamp; void* sk_sndtimeo; void* sk_rcvtimeo; scalar_t__ sk_write_pending; scalar_t__ sk_sndmsg_off; int * sk_sndmsg_page; int sk_destruct; int sk_error_report; int sk_write_space; int sk_data_ready; int sk_state_change; int sk_callback_lock; int sk_dst_lock; int * sk_sleep; int sk_type; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_allocation; int sk_timer; int * sk_send_head; int sk_async_wait_queue; int sk_error_queue; int sk_write_queue; int sk_receive_queue; } ;
struct TYPE_2__ {int * sk_peer_cred; int * sk_peer_pid; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (long,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct socket*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct sock*,int ) ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_10(struct socket *VAR_13, struct sock *VAR_14)
{
 FUNC_7(&VAR_14->sk_receive_queue);
 FUNC_7(&VAR_14->sk_write_queue);
 FUNC_7(&VAR_14->sk_error_queue);




 VAR_14->sk_send_head = ((void*)0);

 FUNC_1(&VAR_14->sk_timer);

 VAR_14->sk_allocation = VAR_0;
 VAR_14->sk_rcvbuf = VAR_11;
 VAR_14->sk_sndbuf = VAR_12;
 VAR_14->sk_state = VAR_3;
 FUNC_6(VAR_14, VAR_13);

 FUNC_9(VAR_14, VAR_2);

 if (VAR_13) {
  VAR_14->sk_type = VAR_13->type;
  VAR_14->sk_sleep = &VAR_13->wait;
  VAR_13->sk = VAR_14;
 } else
  VAR_14->sk_sleep = ((void*)0);

 FUNC_4(&VAR_14->sk_dst_lock);
 FUNC_4(&VAR_14->sk_callback_lock);
 FUNC_3(&VAR_14->sk_callback_lock,
   VAR_4 + VAR_14->sk_family,
   VAR_5[VAR_14->sk_family]);

 VAR_14->sk_state_change = VAR_9;
 VAR_14->sk_data_ready = VAR_8;
 VAR_14->sk_write_space = VAR_10;
 VAR_14->sk_error_report = VAR_7;
 VAR_14->sk_destruct = VAR_6;

 VAR_14->sk_sndmsg_page = ((void*)0);
 VAR_14->sk_sndmsg_off = 0;

 FUNC_5(VAR_14)->sk_peer_pid = ((void*)0);
 FUNC_5(VAR_14)->sk_peer_cred = ((void*)0);
 VAR_14->sk_write_pending = 0;
 VAR_14->sk_rcvlowat = 1;
 VAR_14->sk_rcvtimeo = VAR_1;
 VAR_14->sk_sndtimeo = VAR_1;

 VAR_14->sk_stamp = FUNC_2(-1L, 0);





 FUNC_8();
 FUNC_0(&VAR_14->sk_refcnt, 1);
 FUNC_0(&VAR_14->sk_drops, 0);
}
