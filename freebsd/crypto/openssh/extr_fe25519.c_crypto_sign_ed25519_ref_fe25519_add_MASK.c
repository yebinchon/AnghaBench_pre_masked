
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* v; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(fe25519 *VAR_0, const fe25519 *VAR_1, const fe25519 *VAR_2)
{
  int VAR_3;
  for(VAR_3=0;VAR_3<32;VAR_3++) VAR_0->v[VAR_3] = VAR_1->v[VAR_3] + VAR_2->v[VAR_3];
  FUNC_0(VAR_0);
}
