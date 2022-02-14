
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* v; } ;
typedef TYPE_1__ fe25519 ;
typedef int crypto_uint32 ;



void FUNC_0(fe25519 *VAR_0, const fe25519 *VAR_1, unsigned char VAR_2)
{
  int VAR_3;
  crypto_uint32 VAR_4 = VAR_2;
  VAR_4 = -VAR_4;
  for(VAR_3=0;VAR_3<32;VAR_3++) VAR_0->v[VAR_3] ^= VAR_4 & (VAR_1->v[VAR_3] ^ VAR_0->v[VAR_3]);
}
