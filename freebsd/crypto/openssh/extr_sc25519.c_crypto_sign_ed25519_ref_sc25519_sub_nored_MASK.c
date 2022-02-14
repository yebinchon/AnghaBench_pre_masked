
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* v; } ;
typedef TYPE_1__ sc25519 ;
typedef int crypto_uint32 ;



void FUNC_0(sc25519 *VAR_0, const sc25519 *VAR_1, const sc25519 *VAR_2)
{
  crypto_uint32 VAR_3 = 0;
  crypto_uint32 VAR_4;
  int VAR_5;
  for(VAR_5=0;VAR_5<32;VAR_5++)
  {
    VAR_4 = VAR_1->v[VAR_5] - VAR_2->v[VAR_5] - VAR_3;
    VAR_0->v[VAR_5] = VAR_4 & 255;
    VAR_3 = (VAR_4 >> 8) & 1;
  }
}
