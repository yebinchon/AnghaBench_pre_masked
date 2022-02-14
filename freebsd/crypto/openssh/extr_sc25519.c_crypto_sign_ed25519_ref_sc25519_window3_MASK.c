
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ sc25519 ;



void FUNC_0(signed char VAR_0[85], const sc25519 *VAR_1)
{
  char VAR_2;
  int VAR_3;
  for(VAR_3=0;VAR_3<10;VAR_3++)
  {
    VAR_0[8*VAR_3+0] = VAR_1->v[3*VAR_3+0] & 7;
    VAR_0[8*VAR_3+1] = (VAR_1->v[3*VAR_3+0] >> 3) & 7;
    VAR_0[8*VAR_3+2] = (VAR_1->v[3*VAR_3+0] >> 6) & 7;
    VAR_0[8*VAR_3+2] ^= (VAR_1->v[3*VAR_3+1] << 2) & 7;
    VAR_0[8*VAR_3+3] = (VAR_1->v[3*VAR_3+1] >> 1) & 7;
    VAR_0[8*VAR_3+4] = (VAR_1->v[3*VAR_3+1] >> 4) & 7;
    VAR_0[8*VAR_3+5] = (VAR_1->v[3*VAR_3+1] >> 7) & 7;
    VAR_0[8*VAR_3+5] ^= (VAR_1->v[3*VAR_3+2] << 1) & 7;
    VAR_0[8*VAR_3+6] = (VAR_1->v[3*VAR_3+2] >> 2) & 7;
    VAR_0[8*VAR_3+7] = (VAR_1->v[3*VAR_3+2] >> 5) & 7;
  }
  VAR_0[8*VAR_3+0] = VAR_1->v[3*VAR_3+0] & 7;
  VAR_0[8*VAR_3+1] = (VAR_1->v[3*VAR_3+0] >> 3) & 7;
  VAR_0[8*VAR_3+2] = (VAR_1->v[3*VAR_3+0] >> 6) & 7;
  VAR_0[8*VAR_3+2] ^= (VAR_1->v[3*VAR_3+1] << 2) & 7;
  VAR_0[8*VAR_3+3] = (VAR_1->v[3*VAR_3+1] >> 1) & 7;
  VAR_0[8*VAR_3+4] = (VAR_1->v[3*VAR_3+1] >> 4) & 7;


  VAR_2 = 0;
  for(VAR_3=0;VAR_3<84;VAR_3++)
  {
    VAR_0[VAR_3] += VAR_2;
    VAR_0[VAR_3+1] += VAR_0[VAR_3] >> 3;
    VAR_0[VAR_3] &= 7;
    VAR_2 = VAR_0[VAR_3] >> 2;
    VAR_0[VAR_3] -= VAR_2<<3;
  }
  VAR_0[84] += VAR_2;
}
