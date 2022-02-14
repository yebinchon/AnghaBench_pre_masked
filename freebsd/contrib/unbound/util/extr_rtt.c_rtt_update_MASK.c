
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtt_info {int srtt; int rttvar; int rto; } ;


 int FUNC_0 (struct rtt_info*) ;

void
FUNC_1(struct rtt_info* VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 - VAR_0->srtt;
 VAR_0->srtt += VAR_2 / 8;
 if(VAR_2 < 0)
  VAR_2 = -VAR_2;
 VAR_0->rttvar += (VAR_2 - VAR_0->rttvar) / 4;
 VAR_0->rto = FUNC_0(VAR_0);
}
