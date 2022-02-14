
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccid2_hc_tx_sock {long ccid2hctx_srtt; } ;


 int FUNC_0 (char*,long) ;

__attribute__((used)) static void FUNC_1(struct ccid2_hc_tx_sock *VAR_0, long VAR_1)
{
 FUNC_0("change SRTT to %ld\n", VAR_1);
 VAR_0->ccid2hctx_srtt = VAR_1;
}
