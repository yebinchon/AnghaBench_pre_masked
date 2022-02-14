
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(const fe25519 *VAR_0)
{
  int VAR_1;
  int VAR_2;
  fe25519 VAR_3 = *VAR_0;
  FUNC_1(&VAR_3);
  VAR_2 = FUNC_0(VAR_3.v[0],0);
  for(VAR_1=1;VAR_1<32;VAR_1++)
    VAR_2 &= FUNC_0(VAR_3.v[VAR_1],0);
  return VAR_2;
}
