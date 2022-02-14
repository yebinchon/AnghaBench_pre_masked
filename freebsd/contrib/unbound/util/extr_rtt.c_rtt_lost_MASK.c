
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtt_info {int rto; } ;


 int VAR_0 ;

void
FUNC_0(struct rtt_info* VAR_1, int VAR_2)
{



 if(VAR_1->rto < VAR_2)
  return;




 VAR_2 *= 2;
 if(VAR_1->rto <= VAR_2) {
  VAR_1->rto = VAR_2;
  if(VAR_1->rto > VAR_0)
   VAR_1->rto = VAR_0;
 }
}
