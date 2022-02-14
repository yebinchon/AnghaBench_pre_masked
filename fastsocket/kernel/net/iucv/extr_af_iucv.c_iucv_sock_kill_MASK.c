
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_3)
{
 if (!FUNC_1(VAR_3, VAR_1) || VAR_3->sk_socket)
  return;

 FUNC_0(&VAR_2, VAR_3);
 FUNC_3(VAR_3, VAR_0);
 FUNC_2(VAR_3);
}
