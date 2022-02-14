
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_sock {scalar_t__ rcv_saddr; } ;


 struct inet_sock* FUNC_0 (struct sock const*) ;
 int FUNC_1 (struct sock const*) ;

__attribute__((used)) static int FUNC_2(const struct sock *VAR_0, const struct sock *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_0(VAR_0), *VAR_3 = FUNC_0(VAR_1);

 return (!FUNC_1(VAR_1) &&
   (!VAR_2->rcv_saddr || !VAR_3->rcv_saddr ||
     VAR_2->rcv_saddr == VAR_3->rcv_saddr));
}
