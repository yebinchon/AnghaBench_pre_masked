
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* v; } ;
typedef TYPE_1__ sc25519 ;



int FUNC_0(const sc25519 *VAR_0, const sc25519 *VAR_1)
{
  int VAR_2;
  for(VAR_2=31;VAR_2>=0;VAR_2--)
  {
    if(VAR_0->v[VAR_2] < VAR_1->v[VAR_2]) return 1;
    if(VAR_0->v[VAR_2] > VAR_1->v[VAR_2]) return 0;
  }
  return 0;
}
