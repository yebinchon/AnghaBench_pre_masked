
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sock {int dummy; } ;
struct inet_sock {int mc_ttl; } ;


 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, u_char VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_0(VAR_0);


 FUNC_1(VAR_0);
 VAR_2->mc_ttl = VAR_1;
 FUNC_2(VAR_0);
}
