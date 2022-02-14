
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_rto; int ccid2hctx_ssthresh; int ccid2hctx_cwnd; int ccid2hctx_rpdupack; scalar_t__ ccid2hctx_rpseq; scalar_t__ ccid2hctx_packets_acked; int ccid2hctx_seqh; int ccid2hctx_seqt; scalar_t__ ccid2hctx_pipe; int ccid2hctx_rtotimer; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct ccid2_hc_tx_sock*) ;
 struct ccid2_hc_tx_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_2)
{
 struct sock *VAR_3 = (struct sock *)VAR_2;
 struct ccid2_hc_tx_sock *VAR_4 = FUNC_4(VAR_3);
 long VAR_5;

 FUNC_0(VAR_3);
 if (FUNC_8(VAR_3)) {
  FUNC_7(VAR_3, &VAR_4->ccid2hctx_rtotimer,
          VAR_1 + VAR_0 / 5);
  goto out;
 }

 FUNC_5("RTO_EXPIRE\n");

 FUNC_3(VAR_4);


 VAR_4->ccid2hctx_rto <<= 1;

 VAR_5 = VAR_4->ccid2hctx_rto / VAR_0;
 if (VAR_5 > 60)
  VAR_4->ccid2hctx_rto = 60 * VAR_0;

 FUNC_6(VAR_3);


 VAR_4->ccid2hctx_ssthresh = VAR_4->ccid2hctx_cwnd / 2;
 if (VAR_4->ccid2hctx_ssthresh < 2)
  VAR_4->ccid2hctx_ssthresh = 2;
 VAR_4->ccid2hctx_cwnd = 1;
 VAR_4->ccid2hctx_pipe = 0;


 VAR_4->ccid2hctx_seqt = VAR_4->ccid2hctx_seqh;
 VAR_4->ccid2hctx_packets_acked = 0;


 VAR_4->ccid2hctx_rpseq = 0;
 VAR_4->ccid2hctx_rpdupack = -1;
 FUNC_2(VAR_3, 1);
 FUNC_3(VAR_4);
out:
 FUNC_1(VAR_3);
 FUNC_9(VAR_3);
}
