
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ sacked_out; scalar_t__ fackets_out; } ;


 int FUNC_0 (struct tcp_sock*) ;

void FUNC_1(struct tcp_sock *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->fackets_out = 0;
 VAR_0->sacked_out = 0;
}
