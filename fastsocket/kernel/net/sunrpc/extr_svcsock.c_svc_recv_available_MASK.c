
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_sock {struct socket* sk_sock; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct svc_sock *VAR_1)
{
 struct socket *VAR_2 = VAR_1->sk_sock;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, (unsigned long) &VAR_3);

 return (VAR_4 >= 0)? VAR_3 : VAR_4;
}
