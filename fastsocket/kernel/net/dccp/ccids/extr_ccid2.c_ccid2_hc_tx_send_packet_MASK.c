
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ccid2_hc_tx_sock {scalar_t__ ccid2hctx_pipe; scalar_t__ ccid2hctx_cwnd; } ;


 struct ccid2_hc_tx_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct ccid2_hc_tx_sock *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->ccid2hctx_pipe < VAR_2->ccid2hctx_cwnd)
  return 0;

 return 1;
}
