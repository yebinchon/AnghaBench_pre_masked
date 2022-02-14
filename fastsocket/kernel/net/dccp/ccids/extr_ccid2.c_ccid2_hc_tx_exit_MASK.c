
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_seqbufc; int * ccid2hctx_seqbuf; } ;


 int FUNC_0 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct ccid2_hc_tx_sock *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->ccid2hctx_seqbufc; VAR_2++)
  FUNC_2(VAR_1->ccid2hctx_seqbuf[VAR_2]);
 VAR_1->ccid2hctx_seqbufc = 0;
}
