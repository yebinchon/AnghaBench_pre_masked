
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct page {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int num; } ;
struct TYPE_3__ {int (* sendpage ) (struct sock*,struct page*,int,size_t,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct socket*,struct page*,int,size_t,int) ;
 int FUNC_4 (struct sock*,struct page*,int,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct socket *VAR_1, struct page *VAR_2, int VAR_3,
        size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_1->sk;

 FUNC_2(VAR_6);


 if (!FUNC_1(VAR_6)->num && FUNC_0(VAR_6))
  return -VAR_0;

 if (VAR_6->sk_prot->sendpage)
  return VAR_6->sk_prot->sendpage(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
