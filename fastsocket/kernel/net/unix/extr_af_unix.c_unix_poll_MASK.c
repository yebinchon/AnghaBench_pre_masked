
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_type; scalar_t__ sk_state; int sk_receive_queue; scalar_t__ sk_err; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sock*) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_13, struct socket *VAR_14, poll_table *VAR_15)
{
 struct sock *VAR_16 = VAR_14->sk;
 unsigned int VAR_17;

 FUNC_1(VAR_13, VAR_16->sk_sleep, VAR_15);
 VAR_17 = 0;


 if (VAR_16->sk_err)
  VAR_17 |= VAR_0;
 if (VAR_16->sk_shutdown == VAR_9)
  VAR_17 |= VAR_1;
 if (VAR_16->sk_shutdown & VAR_8)
  VAR_17 |= VAR_4;


 if (!FUNC_0(&VAR_16->sk_receive_queue) ||
     (VAR_16->sk_shutdown & VAR_8))
  VAR_17 |= VAR_2 | VAR_5;


 if ((VAR_16->sk_type == VAR_11 || VAR_16->sk_type == VAR_10) &&
     VAR_16->sk_state == VAR_12)
  VAR_17 |= VAR_1;





 if (FUNC_2(VAR_16))
  VAR_17 |= VAR_3 | VAR_7 | VAR_6;

 return VAR_17;
}
