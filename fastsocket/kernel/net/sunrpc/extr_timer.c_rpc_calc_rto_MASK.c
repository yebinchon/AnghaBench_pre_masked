
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rtt {unsigned long timeo; int* srtt; int* sdrtt; } ;


 unsigned long VAR_0 ;

unsigned long FUNC_0(struct rpc_rtt *VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2-- == 0)
  return VAR_1->timeo;

 VAR_3 = ((VAR_1->srtt[VAR_2] + 7) >> 3) + VAR_1->sdrtt[VAR_2];
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 return VAR_3;
}
