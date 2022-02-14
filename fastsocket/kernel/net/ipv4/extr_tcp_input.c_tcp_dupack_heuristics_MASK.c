
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int fackets_out; int sacked_out; } ;


 scalar_t__ FUNC_0 (struct tcp_sock*) ;

__attribute__((used)) static inline int FUNC_1(struct tcp_sock *VAR_0)
{
 return FUNC_0(VAR_0) ? VAR_0->fackets_out : VAR_0->sacked_out + 1;
}
