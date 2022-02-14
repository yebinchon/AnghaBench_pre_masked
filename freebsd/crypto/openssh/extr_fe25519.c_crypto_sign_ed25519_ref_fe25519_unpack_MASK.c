
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* v; } ;
typedef TYPE_1__ fe25519 ;



void FUNC_0(fe25519 *VAR_0, const unsigned char VAR_1[32])
{
  int VAR_2;
  for(VAR_2=0;VAR_2<32;VAR_2++) VAR_0->v[VAR_2] = VAR_1[VAR_2];
  VAR_0->v[31] &= 127;
}
