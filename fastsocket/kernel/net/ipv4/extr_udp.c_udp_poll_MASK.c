
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; } ;
struct file {int f_flags; } ;
typedef int poll_table ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct file*,struct socket*,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

unsigned int FUNC_3(struct file *VAR_4, struct socket *VAR_5, poll_table *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 struct sock *VAR_8 = VAR_5->sk;

 FUNC_2(VAR_8);


 if ((VAR_7 & VAR_2) && !(VAR_4->f_flags & VAR_0) &&
     !(VAR_8->sk_shutdown & VAR_3) && !FUNC_1(VAR_8))
  VAR_7 &= ~(VAR_1 | VAR_2);

 return VAR_7;

}
