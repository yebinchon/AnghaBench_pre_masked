
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * v; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

void FUNC_2(fe25519 *VAR_0, const fe25519 *VAR_1)
{
  fe25519 VAR_2;
  int VAR_3;
  for(VAR_3=0;VAR_3<32;VAR_3++) VAR_2.v[VAR_3]=VAR_1->v[VAR_3];
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_0, &VAR_2);
}
