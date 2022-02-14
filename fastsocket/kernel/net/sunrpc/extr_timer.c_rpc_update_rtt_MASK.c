
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rtt {int * sdrtt; int * srtt; } ;


 long VAR_0 ;

void FUNC_0(struct rpc_rtt *VAR_1, unsigned VAR_2, long VAR_3)
{
 long *VAR_4, *VAR_5;

 if (VAR_2-- == 0)
  return;


 if (VAR_3 < 0)
  return;

 if (VAR_3 == 0)
  VAR_3 = 1L;

 VAR_4 = (long *)&VAR_1->srtt[VAR_2];
 VAR_3 -= *VAR_4 >> 3;
 *VAR_4 += VAR_3;

 if (VAR_3 < 0)
  VAR_3 = -VAR_3;

 VAR_5 = (long *)&VAR_1->sdrtt[VAR_2];
 VAR_3 -= *VAR_5 >> 2;
 *VAR_5 += VAR_3;


 if (*VAR_5 < VAR_0)
  *VAR_5 = VAR_0;
}
