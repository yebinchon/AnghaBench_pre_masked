
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {struct tcp_sack_block* recv_sack_cache; } ;
struct tcp_sack_block {int dummy; } ;


 int FUNC_0 (struct tcp_sack_block*) ;

__attribute__((used)) static int FUNC_1(struct tcp_sock *VAR_0, struct tcp_sack_block *VAR_1)
{
 return VAR_1 < VAR_0->recv_sack_cache + FUNC_0(VAR_0->recv_sack_cache);
}
