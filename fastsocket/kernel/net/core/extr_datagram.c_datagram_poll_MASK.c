
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; TYPE_1__* sk_socket; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int ,int *) ;
 scalar_t__ FUNC_4 (struct sock*) ;

unsigned int FUNC_5(struct file *VAR_13, struct socket *VAR_14,
      poll_table *VAR_15)
{
 struct sock *VAR_16 = VAR_14->sk;
 unsigned int VAR_17;

 FUNC_3(VAR_13, VAR_16->sk_sleep, VAR_15);
 VAR_17 = 0;


 if (VAR_16->sk_err || !FUNC_2(&VAR_16->sk_error_queue))
  VAR_17 |= VAR_0;
 if (VAR_16->sk_shutdown & VAR_8)
  VAR_17 |= VAR_4;
 if (VAR_16->sk_shutdown == VAR_9)
  VAR_17 |= VAR_1;


 if (!FUNC_2(&VAR_16->sk_receive_queue) ||
     (VAR_16->sk_shutdown & VAR_8))
  VAR_17 |= VAR_2 | VAR_5;


 if (FUNC_0(VAR_16)) {
  if (VAR_16->sk_state == VAR_11)
   VAR_17 |= VAR_1;

  if (VAR_16->sk_state == VAR_12)
   return VAR_17;
 }


 if (FUNC_4(VAR_16))
  VAR_17 |= VAR_3 | VAR_7 | VAR_6;
 else
  FUNC_1(VAR_10, &VAR_16->sk_socket->flags);

 return VAR_17;
}
