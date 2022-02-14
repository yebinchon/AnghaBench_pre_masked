
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_l_ack_ratio; int dccps_mss_cache; } ;
struct ccid2_hc_tx_sock {unsigned int ccid2hctx_ssthresh; int ccid2hctx_rto; int ccid2hctx_rttvar; int ccid2hctx_rpdupack; int ccid2hctx_rtotimer; int ccid2hctx_last_cong; int ccid2hctx_cwnd; } ;
struct ccid {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ccid2_hc_tx_sock*,int) ;
 scalar_t__ FUNC_2 (struct ccid2_hc_tx_sock*) ;
 int FUNC_3 (struct ccid2_hc_tx_sock*) ;
 int VAR_2 ;
 struct ccid2_hc_tx_sock* FUNC_4 (struct ccid*) ;
 struct dccp_sock* FUNC_5 (struct sock*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ccid *VAR_4, struct sock *VAR_5)
{
 struct ccid2_hc_tx_sock *VAR_6 = FUNC_4(VAR_4);
 struct dccp_sock *VAR_7 = FUNC_5(VAR_5);
 u32 VAR_8;


 VAR_6->ccid2hctx_ssthresh = ~0U;


 VAR_6->ccid2hctx_cwnd = FUNC_6(VAR_7->dccps_mss_cache);


 VAR_8 = FUNC_0(VAR_6->ccid2hctx_cwnd, 2);
 if (VAR_7->dccps_l_ack_ratio == 0 || VAR_7->dccps_l_ack_ratio > VAR_8)
  VAR_7->dccps_l_ack_ratio = VAR_8;


 if (FUNC_2(VAR_6))
  return -VAR_0;

 VAR_6->ccid2hctx_rto = 3 * VAR_1;
 FUNC_1(VAR_6, -1);
 VAR_6->ccid2hctx_rttvar = -1;
 VAR_6->ccid2hctx_rpdupack = -1;
 VAR_6->ccid2hctx_last_cong = VAR_3;
 FUNC_7(&VAR_6->ccid2hctx_rtotimer, VAR_2,
   (unsigned long)VAR_5);

 FUNC_3(VAR_6);
 return 0;
}
