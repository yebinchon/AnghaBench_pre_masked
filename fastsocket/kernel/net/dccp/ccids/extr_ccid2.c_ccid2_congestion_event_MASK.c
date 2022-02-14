
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ccid2_seq {int ccid2s_sent; } ;
struct ccid2_hc_tx_sock {unsigned int ccid2hctx_cwnd; int ccid2hctx_ssthresh; int ccid2hctx_last_cong; } ;
struct TYPE_2__ {int dccps_l_ack_ratio; } ;


 int FUNC_0 (struct sock*,int) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int VAR_0 ;
 int FUNC_4 (int,unsigned int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1, struct ccid2_seq *VAR_2)
{
 struct ccid2_hc_tx_sock *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_5(VAR_2->ccid2s_sent, VAR_3->ccid2hctx_last_cong)) {
  FUNC_2("Multiple losses in an RTT---treating as one\n");
  return;
 }

 VAR_3->ccid2hctx_last_cong = VAR_0;

 VAR_3->ccid2hctx_cwnd = VAR_3->ccid2hctx_cwnd / 2 ? : 1U;
 VAR_3->ccid2hctx_ssthresh = FUNC_4(VAR_3->ccid2hctx_cwnd, 2U);


 if (FUNC_3(VAR_1)->dccps_l_ack_ratio > VAR_3->ccid2hctx_cwnd)
  FUNC_0(VAR_1, VAR_3->ccid2hctx_cwnd);
}
