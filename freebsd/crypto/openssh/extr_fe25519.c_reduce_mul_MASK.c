
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ fe25519 ;
typedef int crypto_uint32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(fe25519 *VAR_0)
{
  crypto_uint32 VAR_1;
  int VAR_2,VAR_3;

  for(VAR_3=0;VAR_3<2;VAR_3++)
  {
    VAR_1 = VAR_0->v[31] >> 7;
    VAR_0->v[31] &= 127;
    VAR_1 = FUNC_0(VAR_1);
    VAR_0->v[0] += VAR_1;
    for(VAR_2=0;VAR_2<31;VAR_2++)
    {
      VAR_1 = VAR_0->v[VAR_2] >> 8;
      VAR_0->v[VAR_2+1] += VAR_1;
      VAR_0->v[VAR_2] &= 255;
    }
  }
}
