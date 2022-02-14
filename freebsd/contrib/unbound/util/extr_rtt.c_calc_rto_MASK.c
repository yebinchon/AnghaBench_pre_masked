
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtt_info {int srtt; int rttvar; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct rtt_info* VAR_2)
{

 int VAR_3 = VAR_2->srtt + 4*VAR_2->rttvar;
 if(VAR_3 < VAR_1)
  VAR_3 = VAR_1;
 if(VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 return VAR_3;
}
