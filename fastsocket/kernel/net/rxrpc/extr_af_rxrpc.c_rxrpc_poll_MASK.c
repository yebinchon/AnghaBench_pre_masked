
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_receive_queue; int sk_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int ,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_4, struct socket *VAR_5,
          poll_table *VAR_6)
{
 unsigned int VAR_7;
 struct sock *VAR_8 = VAR_5->sk;

 FUNC_2(VAR_4, VAR_8->sk_sleep, VAR_6);
 VAR_7 = 0;



 if (!FUNC_1(&VAR_8->sk_receive_queue))
  VAR_7 |= VAR_0 | VAR_2;




 if (FUNC_0(VAR_8))
  VAR_7 |= VAR_1 | VAR_3;

 return VAR_7;
}
