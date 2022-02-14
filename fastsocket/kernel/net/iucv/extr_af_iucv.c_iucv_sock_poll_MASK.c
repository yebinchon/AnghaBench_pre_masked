
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
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int ,int *) ;
 scalar_t__ FUNC_5 (struct sock*) ;

unsigned int FUNC_6(struct file *VAR_14, struct socket *VAR_15,
       poll_table *VAR_16)
{
 struct sock *VAR_17 = VAR_15->sk;
 unsigned int VAR_18 = 0;

 FUNC_4(VAR_14, VAR_17->sk_sleep, VAR_16);

 if (VAR_17->sk_state == VAR_2)
  return FUNC_0(VAR_17);

 if (VAR_17->sk_err || !FUNC_3(&VAR_17->sk_error_queue))
  VAR_18 |= VAR_3;

 if (VAR_17->sk_shutdown & VAR_11)
  VAR_18 |= VAR_7;

 if (VAR_17->sk_shutdown == VAR_12)
  VAR_18 |= VAR_4;

 if (!FUNC_3(&VAR_17->sk_receive_queue) ||
     (VAR_17->sk_shutdown & VAR_11))
  VAR_18 |= VAR_5 | VAR_8;

 if (VAR_17->sk_state == VAR_0)
  VAR_18 |= VAR_4;

 if (VAR_17->sk_state == VAR_1)
  VAR_18 |= VAR_5;

 if (FUNC_5(VAR_17) && FUNC_1(VAR_17))
  VAR_18 |= VAR_6 | VAR_10 | VAR_9;
 else
  FUNC_2(VAR_13, &VAR_17->sk_socket->flags);

 return VAR_18;
}
