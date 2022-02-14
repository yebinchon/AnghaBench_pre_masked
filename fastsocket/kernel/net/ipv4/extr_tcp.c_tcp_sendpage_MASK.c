
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_route_caps; } ;
struct page {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct page**,int,size_t,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*,struct page*,int,size_t,int) ;

ssize_t FUNC_5(struct socket *VAR_2, struct page *VAR_3, int VAR_4,
       size_t VAR_5, int VAR_6)
{
 ssize_t VAR_7;
 struct sock *VAR_8 = VAR_2->sk;

 if (!(VAR_8->sk_route_caps & VAR_1) ||
     !(VAR_8->sk_route_caps & VAR_0))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_8);
 FUNC_0(VAR_8);
 VAR_7 = FUNC_1(VAR_8, &VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_8);
 FUNC_3(VAR_8);
 return VAR_7;
}
