
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* v; } ;
typedef TYPE_1__ shortsc25519 ;
struct TYPE_6__ {scalar_t__* v; } ;
typedef TYPE_2__ sc25519 ;



void FUNC_0(sc25519 *VAR_0, const shortsc25519 *VAR_1)
{
  int VAR_2;
  for(VAR_2=0;VAR_2<16;VAR_2++)
    VAR_0->v[VAR_2] = VAR_1->v[VAR_2];
  for(VAR_2=0;VAR_2<16;VAR_2++)
    VAR_0->v[16+VAR_2] = 0;
}
