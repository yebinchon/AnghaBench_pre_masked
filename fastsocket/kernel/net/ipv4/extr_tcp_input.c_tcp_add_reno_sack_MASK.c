
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int sacked_out; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,int ) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_1(VAR_0);
 VAR_1->sacked_out++;
 FUNC_0(VAR_0, 0);
 FUNC_2(VAR_1);
}
