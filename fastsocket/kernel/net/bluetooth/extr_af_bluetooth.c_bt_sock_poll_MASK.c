
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; TYPE_1__* sk_socket; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct file*,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sock*) ;

unsigned int FUNC_6(struct file * VAR_16, struct socket *VAR_17, poll_table *VAR_18)
{
 struct sock *VAR_19 = VAR_17->sk;
 unsigned int VAR_20 = 0;

 FUNC_0("sock %p, sk %p", VAR_17, VAR_19);

 FUNC_2(VAR_16, VAR_19->sk_sleep, VAR_18);

 if (VAR_19->sk_state == VAR_4)
  return FUNC_1(VAR_19);

 if (VAR_19->sk_err || !FUNC_4(&VAR_19->sk_error_queue))
  VAR_20 |= VAR_5;

 if (VAR_19->sk_shutdown & VAR_13)
  VAR_20 |= VAR_9;

 if (VAR_19->sk_shutdown == VAR_14)
  VAR_20 |= VAR_6;

 if (!FUNC_4(&VAR_19->sk_receive_queue) ||
   (VAR_19->sk_shutdown & VAR_13))
  VAR_20 |= VAR_7 | VAR_10;

 if (VAR_19->sk_state == VAR_0)
  VAR_20 |= VAR_6;

 if (VAR_19->sk_state == VAR_2 ||
   VAR_19->sk_state == VAR_3 ||
   VAR_19->sk_state == VAR_1)
  return VAR_20;

 if (FUNC_5(VAR_19))
  VAR_20 |= VAR_8 | VAR_12 | VAR_11;
 else
  FUNC_3(VAR_15, &VAR_19->sk_socket->flags);

 return VAR_20;
}
