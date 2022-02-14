
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_userlocks; int (* sk_error_report ) (struct sock*) ;scalar_t__ sk_shutdown; int * sk_send_head; int sk_write_queue; int sk_receive_queue; void* sk_err; } ;
struct inet_sock {scalar_t__ num; scalar_t__ dport; } ;
struct inet_connection_sock {int icsk_bind_hash; scalar_t__ icsk_backoff; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int const) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,int const) ;
 struct inet_connection_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 struct inet_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int ) ;
 int FUNC_14 (struct sock*) ;

int FUNC_15(struct sock *VAR_7, int VAR_8)
{
 struct inet_connection_sock *VAR_9 = FUNC_8(VAR_7);
 struct inet_sock *VAR_10 = FUNC_12(VAR_7);
 int VAR_11 = 0;
 const int VAR_12 = VAR_7->sk_state;

 if (VAR_12 != VAR_0)
  FUNC_7(VAR_7, VAR_0);





 if (VAR_12 == VAR_1) {
  FUNC_10(VAR_7);
 } else if (FUNC_5(VAR_12)) {
  FUNC_6(VAR_7, VAR_3);
  VAR_7->sk_err = VAR_4;
 } else if (VAR_12 == VAR_2)
  VAR_7->sk_err = VAR_4;

 FUNC_4(VAR_7);

 FUNC_3(&VAR_7->sk_receive_queue);
 FUNC_3(&VAR_7->sk_write_queue);
 if (VAR_7->sk_send_head != ((void*)0)) {
  FUNC_1(VAR_7->sk_send_head);
  VAR_7->sk_send_head = ((void*)0);
 }

 VAR_10->dport = 0;

 if (!(VAR_7->sk_userlocks & VAR_5))
  FUNC_11(VAR_7);

 VAR_7->sk_shutdown = 0;
 FUNC_13(VAR_7, VAR_6);

 VAR_9->icsk_backoff = 0;
 FUNC_9(VAR_7);
 FUNC_2(VAR_7);

 FUNC_0(VAR_10->num && !VAR_9->icsk_bind_hash);

 VAR_7->sk_error_report(VAR_7);
 return VAR_11;
}
