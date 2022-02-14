
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_shutdown; TYPE_1__* sk_socket; int sk_rmem_alloc; scalar_t__ sk_err; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct file*,int ,int *) ;

unsigned int FUNC_6(struct file *VAR_16, struct socket *VAR_17,
         poll_table *VAR_18)
{
 unsigned int VAR_19;
 struct sock *VAR_20 = VAR_17->sk;

 FUNC_5(VAR_16, VAR_20->sk_sleep, VAR_18);
 if (VAR_20->sk_state == VAR_3)
  return FUNC_1(VAR_20);






 VAR_19 = 0;
 if (VAR_20->sk_err)
  VAR_19 = VAR_4;

 if (VAR_20->sk_shutdown == VAR_13 || VAR_20->sk_state == VAR_2)
  VAR_19 |= VAR_5;
 if (VAR_20->sk_shutdown & VAR_11)
  VAR_19 |= VAR_6 | VAR_9 | VAR_8;


 if ((1 << VAR_20->sk_state) & ~(VAR_0 | VAR_1)) {
  if (FUNC_0(&VAR_20->sk_rmem_alloc) > 0)
   VAR_19 |= VAR_6 | VAR_9;

  if (!(VAR_20->sk_shutdown & VAR_12)) {
   if (FUNC_4(VAR_20) >= FUNC_3(VAR_20)) {
    VAR_19 |= VAR_7 | VAR_10;
   } else {
    FUNC_2(VAR_14,
     &VAR_20->sk_socket->flags);
    FUNC_2(VAR_15, &VAR_20->sk_socket->flags);





    if (FUNC_4(VAR_20) >= FUNC_3(VAR_20))
     VAR_19 |= VAR_7 | VAR_10;
   }
  }
 }
 return VAR_19;
}
