
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_seq {scalar_t__ ccid2s_seq; scalar_t__ ccid2s_sent; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_cwnd; int ccid2hctx_ssthresh; int ccid2hctx_packets_acked; int ccid2hctx_srtt; unsigned long ccid2hctx_rttvar; int ccid2hctx_rto; scalar_t__ ccid2hctx_lastrtt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccid2_hc_tx_sock*,long) ;
 int FUNC_1 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (char*,int,int,int,...) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct sock *VAR_2,
     struct ccid2_seq *VAR_3,
     unsigned int *VAR_4)
{
 struct ccid2_hc_tx_sock *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5->ccid2hctx_cwnd < VAR_5->ccid2hctx_ssthresh) {
  if (*VAR_4 > 0 && ++VAR_5->ccid2hctx_packets_acked == 2) {
   VAR_5->ccid2hctx_cwnd += 1;
   *VAR_4 -= 1;
   VAR_5->ccid2hctx_packets_acked = 0;
  }
 } else if (++VAR_5->ccid2hctx_packets_acked >= VAR_5->ccid2hctx_cwnd) {
   VAR_5->ccid2hctx_cwnd += 1;
   VAR_5->ccid2hctx_packets_acked = 0;
 }


 if (VAR_5->ccid2hctx_srtt == -1 ||
     FUNC_5(VAR_1, VAR_5->ccid2hctx_lastrtt + VAR_5->ccid2hctx_srtt)) {
  unsigned long VAR_6 = (long)VAR_1 - (long)VAR_3->ccid2s_sent;
  int VAR_7;


  if (VAR_5->ccid2hctx_srtt == -1) {
   FUNC_3("R: %lu Time=%lu seq=%llu\n",
           VAR_6, VAR_1,
           (unsigned long long)VAR_3->ccid2s_seq);
   FUNC_0(VAR_5, VAR_6);
   VAR_5->ccid2hctx_rttvar = VAR_6 >> 1;
  } else {

   long VAR_8 = VAR_5->ccid2hctx_srtt - VAR_6;
   long VAR_9;

   if (VAR_8 < 0)
    VAR_8 *= -1;

   VAR_8 >>= 2;
   VAR_5->ccid2hctx_rttvar *= 3;
   VAR_5->ccid2hctx_rttvar >>= 2;
   VAR_5->ccid2hctx_rttvar += VAR_8;


   VAR_9 = VAR_5->ccid2hctx_srtt;
   VAR_9 *= 7;
   VAR_9 >>= 3;
   VAR_8 = VAR_6 >> 3;
   VAR_9 += VAR_8;
   FUNC_0(VAR_5, VAR_9);
  }
  VAR_7 = VAR_5->ccid2hctx_rttvar << 2;

  if (!VAR_7)
   VAR_7 = 1;
  VAR_5->ccid2hctx_rto = VAR_5->ccid2hctx_srtt + VAR_7;


  VAR_7 = VAR_5->ccid2hctx_rto / VAR_0;


  if (VAR_7 < 1)
   VAR_5->ccid2hctx_rto = VAR_0;


  if (VAR_7 > 60)
   VAR_5->ccid2hctx_rto = VAR_0 * 60;

  VAR_5->ccid2hctx_lastrtt = VAR_1;

  FUNC_3("srtt: %ld rttvar: %ld rto: %ld (HZ=%d) R=%lu\n",
          VAR_5->ccid2hctx_srtt, VAR_5->ccid2hctx_rttvar,
          VAR_5->ccid2hctx_rto, VAR_0, VAR_6);
 }


 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
}
