
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct illinois {scalar_t__ base_rtt; scalar_t__ max_rtt; int sum_rtt; int cnt_rtt; int acked; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 struct illinois* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1, u32 VAR_2, s32 VAR_3)
{
 struct illinois *VAR_4 = FUNC_0(VAR_1);

 VAR_4->acked = VAR_2;


 if (VAR_3 < 0)
  return;


 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;


 if (VAR_4->base_rtt > VAR_3)
  VAR_4->base_rtt = VAR_3;


 if (VAR_4->max_rtt < VAR_3)
  VAR_4->max_rtt = VAR_3;

 ++VAR_4->cnt_rtt;
 VAR_4->sum_rtt += VAR_3;
}
