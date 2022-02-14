
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ packets_out; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, const int VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2))
  FUNC_2(VAR_0, VAR_2->packets_out + VAR_1, 0);
}
