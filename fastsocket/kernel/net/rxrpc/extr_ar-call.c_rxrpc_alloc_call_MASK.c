
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int acks_winsz; int rx_data_expect; int creation_jif; scalar_t__ rx_data_eaten; scalar_t__ ackr_win_top; scalar_t__ rx_first_oos; int sock_node; int state; int debug_id; int usage; int state_lock; int lock; int tx_waitq; int rx_oos_queue; int rx_queue; int accept_link; int processor; int destroyer; int resend_timer; int ack_timer; int deadspan; int lifetimer; int acks_window; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,struct rxrpc_call*) ;
 struct rxrpc_call* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *,int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct rxrpc_call *FUNC_13(gfp_t VAR_11)
{
 struct rxrpc_call *VAR_12;

 VAR_12 = FUNC_7(VAR_4, VAR_11);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->acks_winsz = 16;
 VAR_12->acks_window = FUNC_5(VAR_12->acks_winsz * sizeof(unsigned long),
        VAR_11);
 if (!VAR_12->acks_window) {
  FUNC_6(VAR_4, VAR_12);
  return ((void*)0);
 }

 FUNC_10(&VAR_12->lifetimer, &VAR_5,
      (unsigned long) VAR_12);
 FUNC_10(&VAR_12->deadspan, &VAR_6,
      (unsigned long) VAR_12);
 FUNC_10(&VAR_12->ack_timer, &VAR_3,
      (unsigned long) VAR_12);
 FUNC_10(&VAR_12->resend_timer, &VAR_10,
      (unsigned long) VAR_12);
 FUNC_1(&VAR_12->destroyer, &VAR_8);
 FUNC_1(&VAR_12->processor, &VAR_9);
 FUNC_0(&VAR_12->accept_link);
 FUNC_11(&VAR_12->rx_queue);
 FUNC_11(&VAR_12->rx_oos_queue);
 FUNC_4(&VAR_12->tx_waitq);
 FUNC_12(&VAR_12->lock);
 FUNC_9(&VAR_12->state_lock);
 FUNC_3(&VAR_12->usage, 1);
 VAR_12->debug_id = FUNC_2(&VAR_7);
 VAR_12->state = VAR_0;

 FUNC_8(&VAR_12->sock_node, 0xed, sizeof(VAR_12->sock_node));

 VAR_12->rx_data_expect = 1;
 VAR_12->rx_data_eaten = 0;
 VAR_12->rx_first_oos = 0;
 VAR_12->ackr_win_top = VAR_12->rx_data_eaten + 1 + VAR_1;
 VAR_12->creation_jif = VAR_2;
 return VAR_12;
}
