
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* v; } ;
typedef TYPE_1__ sc25519 ;



int FUNC_0(const sc25519 *VAR_0)
{
  int VAR_1;
  for(VAR_1=31;VAR_1>15;VAR_1--)
    if(VAR_0->v[VAR_1] != 0) return 0;
  return 1;
}
