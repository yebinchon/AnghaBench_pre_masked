
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* v; } ;
typedef TYPE_1__ sc25519 ;



void FUNC_0(unsigned char VAR_0[32], const sc25519 *VAR_1)
{
  int VAR_2;
  for(VAR_2=0;VAR_2<32;VAR_2++) VAR_0[VAR_2] = VAR_1->v[VAR_2];
}
