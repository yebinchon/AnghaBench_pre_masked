
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_l_ack_ratio; scalar_t__ dccps_gss; } ;
struct ccid2_seq {struct ccid2_seq* ccid2s_next; int ccid2s_sent; scalar_t__ ccid2s_acked; scalar_t__ ccid2s_seq; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_cwnd; int ccid2hctx_arsent; struct ccid2_seq* ccid2hctx_seqh; struct ccid2_seq* ccid2hctx_seqt; int ccid2hctx_rtotimer; scalar_t__ ccid2hctx_ackloss; int ccid2hctx_pipe; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sock*,int) ;
 scalar_t__ FUNC_3 (struct ccid2_hc_tx_sock*) ;
 int FUNC_4 (struct ccid2_hc_tx_sock*) ;
 struct ccid2_hc_tx_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sock*) ;
 struct dccp_sock* FUNC_8 (struct sock*) ;
 int VAR_0 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_1, int VAR_2, unsigned int VAR_3)
{
 struct dccp_sock *VAR_4 = FUNC_8(VAR_1);
 struct ccid2_hc_tx_sock *VAR_5 = FUNC_5(VAR_1);
 struct ccid2_seq *VAR_6;

 VAR_5->ccid2hctx_pipe++;

 VAR_5->ccid2hctx_seqh->ccid2s_seq = VAR_4->dccps_gss;
 VAR_5->ccid2hctx_seqh->ccid2s_acked = 0;
 VAR_5->ccid2hctx_seqh->ccid2s_sent = VAR_0;

 VAR_6 = VAR_5->ccid2hctx_seqh->ccid2s_next;

 if (VAR_6 == VAR_5->ccid2hctx_seqt) {
  if (FUNC_3(VAR_5)) {
   FUNC_1("packet history - out of memory!");

   return;
  }
  VAR_6 = VAR_5->ccid2hctx_seqh->ccid2s_next;
  FUNC_0(VAR_6 == VAR_5->ccid2hctx_seqt);
 }
 VAR_5->ccid2hctx_seqh = VAR_6;

 FUNC_6("cwnd=%d pipe=%d\n", VAR_5->ccid2hctx_cwnd,
         VAR_5->ccid2hctx_pipe);
 if (!FUNC_9(&VAR_5->ccid2hctx_rtotimer))
  FUNC_7(VAR_1);
}
