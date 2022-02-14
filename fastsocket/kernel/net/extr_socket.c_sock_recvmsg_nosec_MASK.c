
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock_iocb {int dummy; } ;
struct msghdr {int dummy; } ;
struct kiocb {struct sock_iocb* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_1 (struct kiocb*,int *) ;
 int FUNC_2 (struct kiocb*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_1, struct msghdr *VAR_2,
         size_t VAR_3, int VAR_4)
{
 struct kiocb VAR_5;
 struct sock_iocb VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5, ((void*)0));
 VAR_5.private = &VAR_6;
 VAR_7 = FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
 if (-VAR_0 == VAR_7)
  VAR_7 = FUNC_2(&VAR_5);
 return VAR_7;
}
