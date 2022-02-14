
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtt_info {scalar_t__ rto; int srtt; int rttvar; } ;


 scalar_t__ FUNC_0 (struct rtt_info const*) ;

int
FUNC_1(const struct rtt_info* VAR_0)
{
 if(FUNC_0(VAR_0) != VAR_0->rto) {

  return VAR_0->rto;
 }

 return VAR_0->srtt + 4*VAR_0->rttvar;
}
