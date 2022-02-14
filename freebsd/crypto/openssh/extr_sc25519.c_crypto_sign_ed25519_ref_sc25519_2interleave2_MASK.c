
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* v; } ;
typedef TYPE_1__ sc25519 ;



void FUNC_0(unsigned char VAR_0[127], const sc25519 *VAR_1, const sc25519 *VAR_2)
{
  int VAR_3;
  for(VAR_3=0;VAR_3<31;VAR_3++)
  {
    VAR_0[4*VAR_3] = ( VAR_1->v[VAR_3] & 3) ^ (( VAR_2->v[VAR_3] & 3) << 2);
    VAR_0[4*VAR_3+1] = ((VAR_1->v[VAR_3] >> 2) & 3) ^ (((VAR_2->v[VAR_3] >> 2) & 3) << 2);
    VAR_0[4*VAR_3+2] = ((VAR_1->v[VAR_3] >> 4) & 3) ^ (((VAR_2->v[VAR_3] >> 4) & 3) << 2);
    VAR_0[4*VAR_3+3] = ((VAR_1->v[VAR_3] >> 6) & 3) ^ (((VAR_2->v[VAR_3] >> 6) & 3) << 2);
  }
  VAR_0[124] = ( VAR_1->v[31] & 3) ^ (( VAR_2->v[31] & 3) << 2);
  VAR_0[125] = ((VAR_1->v[31] >> 2) & 3) ^ (((VAR_2->v[31] >> 2) & 3) << 2);
  VAR_0[126] = ((VAR_1->v[31] >> 4) & 3) ^ (((VAR_2->v[31] >> 4) & 3) << 2);
}
