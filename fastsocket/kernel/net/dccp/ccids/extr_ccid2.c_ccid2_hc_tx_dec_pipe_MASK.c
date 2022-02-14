
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {scalar_t__ ccid2hctx_pipe; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct ccid2_hc_tx_sock *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->ccid2hctx_pipe == 0)
  FUNC_0("pipe == 0");
 else
  VAR_1->ccid2hctx_pipe--;

 if (VAR_1->ccid2hctx_pipe == 0)
  FUNC_1(VAR_0);
}
