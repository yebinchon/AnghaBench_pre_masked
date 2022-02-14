
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_receive_queue; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct file*,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_6, struct socket *VAR_7,
    poll_table *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 u32 VAR_10;

 FUNC_0(VAR_6, VAR_9->sk_sleep, VAR_8);

 if (!FUNC_1(&VAR_9->sk_receive_queue) ||
     (VAR_7->state == VAR_5) ||
     (VAR_7->state == VAR_4))
  VAR_10 = (VAR_3 | VAR_1);
 else
  VAR_10 = 0;

 if (VAR_7->state == VAR_4)
  VAR_10 |= VAR_0;
 else
  VAR_10 |= VAR_2;

 return VAR_10;
}
