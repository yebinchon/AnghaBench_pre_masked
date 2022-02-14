
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_lingertime; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,int ,scalar_t__) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sk;
 int VAR_4 = 0;

 FUNC_0("sock %p, sk %p", VAR_2, VAR_3);

 if (!VAR_3)
  return 0;

 FUNC_4(VAR_3);

 if (FUNC_6(VAR_3, VAR_1) && VAR_3->sk_lingertime) {
  FUNC_2(VAR_3);
  VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_3->sk_lingertime);
  FUNC_3(VAR_3);
 }

 FUNC_7(VAR_3);
 FUNC_5(VAR_3);
 return VAR_4;
}
