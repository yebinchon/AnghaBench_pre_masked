
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccid3_hc_tx_sock {int ccid3hctx_rtt; int ccid3hctx_t_last_win_count; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct ccid3_hc_tx_sock *VAR_0, ktime_t VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1, VAR_0->ccid3hctx_t_last_win_count);

 return VAR_2 / VAR_0->ccid3hctx_rtt;
}
