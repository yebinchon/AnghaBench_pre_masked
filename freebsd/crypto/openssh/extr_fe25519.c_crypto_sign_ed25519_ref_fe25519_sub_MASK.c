
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* v; } ;
typedef TYPE_1__ fe25519 ;
typedef scalar_t__ crypto_uint32 ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(fe25519 *VAR_0, const fe25519 *VAR_1, const fe25519 *VAR_2)
{
  int VAR_3;
  crypto_uint32 VAR_4[32];
  VAR_4[0] = VAR_1->v[0] + 0x1da;
  VAR_4[31] = VAR_1->v[31] + 0xfe;
  for(VAR_3=1;VAR_3<31;VAR_3++) VAR_4[VAR_3] = VAR_1->v[VAR_3] + 0x1fe;
  for(VAR_3=0;VAR_3<32;VAR_3++) VAR_0->v[VAR_3] = VAR_4[VAR_3] - VAR_2->v[VAR_3];
  FUNC_0(VAR_0);
}
