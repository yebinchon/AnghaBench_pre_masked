
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct msghdr {int msg_flags; } ;
struct kiocb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct msghdr*,size_t) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct kiocb *VAR_4, struct socket *VAR_5,
       struct msghdr *VAR_6, size_t VAR_7)
{
 struct sock *VAR_8 = VAR_5->sk;
 int VAR_9 = 0;

 FUNC_0("sock %p, sk %p", VAR_5, VAR_8);

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->msg_flags & VAR_3)
  return -VAR_2;

 FUNC_1(VAR_8);

 if (VAR_8->sk_state == VAR_0)
  VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_7);
 else
  VAR_9 = -VAR_1;

 FUNC_2(VAR_8);
 return VAR_9;
}
