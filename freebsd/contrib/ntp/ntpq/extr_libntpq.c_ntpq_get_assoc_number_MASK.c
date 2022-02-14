
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ assid; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

int FUNC_0 ( associd_t VAR_2 )
{
 int VAR_3;

 for (VAR_3=0;VAR_3<VAR_1;VAR_3++) {
  if (VAR_0[VAR_3].assid == VAR_2)
   return VAR_3;
 }

 return -1;

}
