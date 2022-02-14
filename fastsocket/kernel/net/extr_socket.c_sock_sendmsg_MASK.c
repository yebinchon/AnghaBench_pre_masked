
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock_iocb {int dummy; } ;
struct msghdr {int dummy; } ;
struct kiocb {struct sock_iocb* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t) ;
 int FUNC_1 (struct kiocb*,int *) ;
 int FUNC_2 (struct kiocb*) ;

int FUNC_3(struct socket *VAR_1, struct msghdr *VAR_2, size_t VAR_3)
{
 struct kiocb VAR_4;
 struct sock_iocb VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, ((void*)0));
 VAR_4.private = &VAR_5;
 VAR_6 = FUNC_0(&VAR_4, VAR_1, VAR_2, VAR_3);
 if (-VAR_0 == VAR_6)
  VAR_6 = FUNC_2(&VAR_4);
 return VAR_6;
}
