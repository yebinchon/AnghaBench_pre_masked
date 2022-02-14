
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {scalar_t__ ccid2hctx_rto; int ccid2hctx_rtotimer; } ;


 int FUNC_0 (int ) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct sock*,int *,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct ccid2_hc_tx_sock *VAR_2 = FUNC_1(VAR_1);

 FUNC_2("setting RTO timeout=%ld\n", VAR_2->ccid2hctx_rto);

 FUNC_0(FUNC_4(&VAR_2->ccid2hctx_rtotimer));
 FUNC_3(VAR_1, &VAR_2->ccid2hctx_rtotimer,
         VAR_0 + VAR_2->ccid2hctx_rto);
}
