
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_rtotimer; } ;


 struct ccid2_hc_tx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sock*,int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct ccid2_hc_tx_sock *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_0, &VAR_1->ccid2hctx_rtotimer);
 FUNC_1("deleted RTO timer\n");
}
