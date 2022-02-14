
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; int z; } ;
typedef TYPE_1__ ge25519_p2 ;
struct TYPE_6__ {int y; int z; int t; int x; } ;
typedef TYPE_2__ ge25519_p1p1 ;
typedef int fe25519 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(ge25519_p1p1 *VAR_0, const ge25519_p2 *VAR_1)
{
  fe25519 VAR_2,VAR_3,VAR_4,VAR_5;
  FUNC_2(&VAR_2, &VAR_1->x);
  FUNC_2(&VAR_3, &VAR_1->y);
  FUNC_2(&VAR_4, &VAR_1->z);
  FUNC_0(&VAR_4, &VAR_4, &VAR_4);
  FUNC_1(&VAR_5, &VAR_2);

  FUNC_0(&VAR_0->x, &VAR_1->x, &VAR_1->y);
  FUNC_2(&VAR_0->x, &VAR_0->x);
  FUNC_3(&VAR_0->x, &VAR_0->x, &VAR_2);
  FUNC_3(&VAR_0->x, &VAR_0->x, &VAR_3);
  FUNC_0(&VAR_0->z, &VAR_5, &VAR_3);
  FUNC_3(&VAR_0->t, &VAR_0->z, &VAR_4);
  FUNC_3(&VAR_0->y, &VAR_5, &VAR_3);
}
