
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtt_info {int rttvar; int rto; scalar_t__ srtt; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtt_info*) ;

void
FUNC_1(struct rtt_info* VAR_1)
{
 VAR_1->srtt = 0;
 VAR_1->rttvar = VAR_0/4;
 VAR_1->rto = FUNC_0(VAR_1);


}
