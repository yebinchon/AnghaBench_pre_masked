
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_l_ack_ratio; } ;
struct TYPE_2__ {int ccid2hctx_cwnd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (char*,scalar_t__) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, u32 VAR_2)
{
 struct dccp_sock *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4 = FUNC_1(FUNC_2(VAR_1)->ccid2hctx_cwnd, 2);







 if (VAR_2 == 0 || VAR_2 > VAR_4) {
  FUNC_0("Limiting Ack Ratio (%u) to %u\n", VAR_2, VAR_4);
  VAR_2 = VAR_4;
 }
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 if (VAR_2 == VAR_3->dccps_l_ack_ratio)
  return;

 FUNC_3("changing local ack ratio to %u\n", VAR_2);
 VAR_3->dccps_l_ack_ratio = VAR_2;
}
