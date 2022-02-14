
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_type; scalar_t__ sk_state; TYPE_1__* sk_socket; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; int * sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_4__ {int peer_wait; } ;
struct TYPE_3__ {int flags; } ;


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
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct sock*) ;
 struct sock* FUNC_4 (struct sock*) ;
 struct sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 TYPE_2__* FUNC_7 (struct sock*) ;
 unsigned int FUNC_8 (struct sock*) ;

__attribute__((used)) static unsigned int FUNC_9(struct file *VAR_14, struct socket *VAR_15,
        poll_table *VAR_16)
{
 struct sock *VAR_17 = VAR_15->sk, *VAR_18;
 unsigned int VAR_19, VAR_20;

 FUNC_2(VAR_14, VAR_17->sk_sleep, VAR_16);
 VAR_19 = 0;


 if (VAR_17->sk_err || !FUNC_1(&VAR_17->sk_error_queue))
  VAR_19 |= VAR_0;
 if (VAR_17->sk_shutdown & VAR_8)
  VAR_19 |= VAR_4;
 if (VAR_17->sk_shutdown == VAR_9)
  VAR_19 |= VAR_1;


 if (!FUNC_1(&VAR_17->sk_receive_queue) ||
     (VAR_17->sk_shutdown & VAR_8))
  VAR_19 |= VAR_2 | VAR_5;


 if (VAR_17->sk_type == VAR_11) {
  if (VAR_17->sk_state == VAR_12)
   VAR_19 |= VAR_1;

  if (VAR_17->sk_state == VAR_13)
   return VAR_19;
 }


 VAR_20 = FUNC_8(VAR_17);
 if (VAR_20) {
  VAR_18 = FUNC_5(VAR_17);
  if (VAR_18) {
   if (FUNC_4(VAR_18) != VAR_17) {
    FUNC_2(VAR_14, &FUNC_7(VAR_18)->peer_wait,
       VAR_16);
    if (FUNC_6(VAR_18))
     VAR_20 = 0;
   }

   FUNC_3(VAR_18);
  }
 }

 if (VAR_20)
  VAR_19 |= VAR_3 | VAR_7 | VAR_6;
 else
  FUNC_0(VAR_10, &VAR_17->sk_socket->flags);

 return VAR_19;
}
