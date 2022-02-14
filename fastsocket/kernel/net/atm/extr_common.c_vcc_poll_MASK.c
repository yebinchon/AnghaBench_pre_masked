
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_receive_queue; scalar_t__ sk_err; int sk_sleep; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ traffic_class; } ;
struct TYPE_4__ {TYPE_1__ txtp; } ;
struct atm_vcc {TYPE_2__ qos; int flags; } ;
typedef int poll_table ;


 scalar_t__ VAR_0 ;
 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct sock*) ;

unsigned int FUNC_5(struct file *VAR_12, struct socket *VAR_13, poll_table *VAR_14)
{
 struct sock *VAR_15 = VAR_13->sk;
 struct atm_vcc *VAR_16;
 unsigned int VAR_17;

 FUNC_2(VAR_12, VAR_15->sk_sleep, VAR_14);
 VAR_17 = 0;

 VAR_16 = FUNC_0(VAR_13);


 if (VAR_15->sk_err)
  VAR_17 = VAR_4;

 if (FUNC_3(VAR_2, &VAR_16->flags) ||
     FUNC_3(VAR_1, &VAR_16->flags))
  VAR_17 |= VAR_5;


 if (!FUNC_1(&VAR_15->sk_receive_queue))
  VAR_17 |= VAR_6 | VAR_8;


 if (VAR_13->state == VAR_11 &&
     FUNC_3(VAR_3, &VAR_16->flags))
  return VAR_17;

 if (VAR_16->qos.txtp.traffic_class != VAR_0 &&
     FUNC_4(VAR_15))
  VAR_17 |= VAR_7 | VAR_10 | VAR_9;

 return VAR_17;
}
