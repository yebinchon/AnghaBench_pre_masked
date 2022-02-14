
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x; } ;
typedef TYPE_1__ ge25519_aff ;
typedef int fe25519 ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (char,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (char) ;

__attribute__((used)) static void FUNC_5(ge25519_aff *VAR_1, unsigned long long VAR_2, signed char VAR_3)
{

  fe25519 VAR_4;
  *VAR_1 = VAR_0[5*VAR_2+0];
  FUNC_0(VAR_1, &VAR_0[5*VAR_2+1],FUNC_1(VAR_3,1) | FUNC_1(VAR_3,-1));
  FUNC_0(VAR_1, &VAR_0[5*VAR_2+2],FUNC_1(VAR_3,2) | FUNC_1(VAR_3,-2));
  FUNC_0(VAR_1, &VAR_0[5*VAR_2+3],FUNC_1(VAR_3,3) | FUNC_1(VAR_3,-3));
  FUNC_0(VAR_1, &VAR_0[5*VAR_2+4],FUNC_1(VAR_3,-4));
  FUNC_3(&VAR_4, &VAR_1->x);
  FUNC_2(&VAR_1->x, &VAR_4, FUNC_4(VAR_3));
}
