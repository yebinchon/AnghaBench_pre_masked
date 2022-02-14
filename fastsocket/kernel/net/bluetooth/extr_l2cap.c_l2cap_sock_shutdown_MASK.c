
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_lingertime; int sk_shutdown; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ,scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 int VAR_6 = 0;

 FUNC_0("sock %p, sk %p", VAR_3, VAR_5);

 if (!VAR_5)
  return 0;

 FUNC_4(VAR_5);
 if (!VAR_5->sk_shutdown) {
  VAR_5->sk_shutdown = VAR_1;
  FUNC_3(VAR_5);
  FUNC_1(VAR_5, 0);

  if (FUNC_6(VAR_5, VAR_2) && VAR_5->sk_lingertime)
   VAR_6 = FUNC_2(VAR_5, VAR_0,
       VAR_5->sk_lingertime);
 }
 FUNC_5(VAR_5);
 return VAR_6;
}
