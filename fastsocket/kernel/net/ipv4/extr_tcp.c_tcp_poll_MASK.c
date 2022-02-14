
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ urg_seq; scalar_t__ copied_seq; int urg_data; int rcv_nxt; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_shutdown; scalar_t__ sk_err; TYPE_1__* sk_socket; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct file*,int ,int *) ;
 int FUNC_8 (struct sock*,int ,int ) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;

unsigned int FUNC_10(struct file *VAR_20, struct socket *VAR_21, poll_table *VAR_22)
{
 unsigned int VAR_23;
 struct sock *VAR_24 = VAR_21->sk;
 struct tcp_sock *VAR_25 = FUNC_9(VAR_24);

 FUNC_1(VAR_24);

 FUNC_7(VAR_20, VAR_24->sk_sleep, VAR_22);
 if (VAR_24->sk_state == VAR_18)
  return FUNC_0(VAR_24);






 VAR_23 = 0;
 if (VAR_24->sk_shutdown == VAR_11 || VAR_24->sk_state == VAR_17)
  VAR_23 |= VAR_2;
 if (VAR_24->sk_shutdown & VAR_9)
  VAR_23 |= VAR_3 | VAR_7 | VAR_6;


 if ((1 << VAR_24->sk_state) & ~(VAR_16 | VAR_15)) {
  int VAR_26 = FUNC_8(VAR_24, 0, VAR_0);

  if (VAR_25->urg_seq == VAR_25->copied_seq &&
      !FUNC_6(VAR_24, VAR_14) &&
      VAR_25->urg_data)
   VAR_26++;




  if (VAR_25->rcv_nxt - VAR_25->copied_seq >= VAR_26)
   VAR_23 |= VAR_3 | VAR_7;

  if (!(VAR_24->sk_shutdown & VAR_10)) {
   if (FUNC_4(VAR_24) >= FUNC_3(VAR_24)) {
    VAR_23 |= VAR_4 | VAR_8;
   } else {
    FUNC_2(VAR_12,
     &VAR_24->sk_socket->flags);
    FUNC_2(VAR_13, &VAR_24->sk_socket->flags);





    if (FUNC_4(VAR_24) >= FUNC_3(VAR_24))
     VAR_23 |= VAR_4 | VAR_8;
   }
  }

  if (VAR_25->urg_data & VAR_19)
   VAR_23 |= VAR_5;
 }

 FUNC_5();
 if (VAR_24->sk_err)
  VAR_23 |= VAR_1;

 return VAR_23;
}
