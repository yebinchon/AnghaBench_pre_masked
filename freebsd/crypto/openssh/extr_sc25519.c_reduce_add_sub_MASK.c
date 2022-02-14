
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ sc25519 ;
typedef int crypto_uint32 ;


 int FUNC_0 (int,int) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_1(sc25519 *VAR_1)
{
  crypto_uint32 VAR_2 = 0;
  crypto_uint32 VAR_3;
  crypto_uint32 VAR_4;
  int VAR_5;
  unsigned char VAR_6[32];

  for(VAR_5=0;VAR_5<32;VAR_5++)
  {
    VAR_2 += VAR_0[VAR_5];
    VAR_3 = FUNC_0(VAR_1->v[VAR_5],VAR_2);
    VAR_6[VAR_5] = VAR_1->v[VAR_5]-VAR_2+(VAR_3<<8);
    VAR_2 = VAR_3;
  }
  VAR_4 = VAR_3 - 1;
  for(VAR_5=0;VAR_5<32;VAR_5++)
    VAR_1->v[VAR_5] ^= VAR_4 & (VAR_1->v[VAR_5] ^ VAR_6[VAR_5]);
}
