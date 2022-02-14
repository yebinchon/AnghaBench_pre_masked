
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z; int y; int x; } ;
typedef TYPE_1__ ge25519_p2 ;
struct TYPE_6__ {int t; int z; int y; int x; } ;
typedef TYPE_2__ ge25519_p1p1 ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(ge25519_p2 *VAR_0, const ge25519_p1p1 *VAR_1)
{
  FUNC_0(&VAR_0->x, &VAR_1->x, &VAR_1->t);
  FUNC_0(&VAR_0->y, &VAR_1->y, &VAR_1->z);
  FUNC_0(&VAR_0->z, &VAR_1->z, &VAR_1->t);
}
