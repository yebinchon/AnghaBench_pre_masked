
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct kiocb *VAR_2, struct socket *VAR_3,
         struct msghdr *VAR_4, size_t VAR_5,
         int VAR_6)
{
 struct sock *VAR_7 = VAR_3->sk;

 if (VAR_7->sk_state != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
