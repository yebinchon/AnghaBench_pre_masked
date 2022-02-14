
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; TYPE_2__* sk_socket; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; int sk_sleep; } ;
struct sctp_sock {TYPE_1__* ep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int asocs; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int ,int *) ;
 struct sctp_sock* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

unsigned int FUNC_8(struct file *VAR_14, struct socket *VAR_15, poll_table *VAR_16)
{
 struct sock *VAR_17 = VAR_15->sk;
 struct sctp_sock *VAR_18 = FUNC_2(VAR_17);
 unsigned int VAR_19;

 FUNC_1(VAR_14, VAR_17->sk_sleep, VAR_16);




 if (FUNC_4(VAR_17, VAR_12) && FUNC_3(VAR_17, VAR_1))
  return (!FUNC_0(&VAR_18->ep->asocs)) ?
   (VAR_4 | VAR_7) : 0;

 VAR_19 = 0;


 if (VAR_17->sk_err || !FUNC_7(&VAR_17->sk_error_queue))
  VAR_19 |= VAR_2;
 if (VAR_17->sk_shutdown & VAR_9)
  VAR_19 |= VAR_6;
 if (VAR_17->sk_shutdown == VAR_10)
  VAR_19 |= VAR_3;


 if (!FUNC_7(&VAR_17->sk_receive_queue) ||
     (VAR_17->sk_shutdown & VAR_9))
  VAR_19 |= VAR_4 | VAR_7;


 if (!FUNC_4(VAR_17, VAR_13) && FUNC_3(VAR_17, VAR_0))
  return VAR_19;


 if (FUNC_5(VAR_17)) {
  VAR_19 |= VAR_5 | VAR_8;
 } else {
  FUNC_6(VAR_11, &VAR_17->sk_socket->flags);
  if (FUNC_5(VAR_17))
   VAR_19 |= VAR_5 | VAR_8;
 }
 return VAR_19;
}
