
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z; int t; int y; int x; } ;
typedef TYPE_1__ ge25519_p3 ;
struct TYPE_7__ {int y; int z; int t; int x; } ;
typedef TYPE_2__ ge25519_p1p1 ;
typedef int fe25519 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(ge25519_p1p1 *VAR_1, const ge25519_p3 *VAR_2, const ge25519_p3 *VAR_3)
{
  fe25519 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  FUNC_2(&VAR_4, &VAR_2->y, &VAR_2->x);
  FUNC_2(&VAR_8, &VAR_3->y, &VAR_3->x);
  FUNC_1(&VAR_4, &VAR_4, &VAR_8);
  FUNC_0(&VAR_5, &VAR_2->x, &VAR_2->y);
  FUNC_0(&VAR_8, &VAR_3->x, &VAR_3->y);
  FUNC_1(&VAR_5, &VAR_5, &VAR_8);
  FUNC_1(&VAR_6, &VAR_2->t, &VAR_3->t);
  FUNC_1(&VAR_6, &VAR_6, &VAR_0);
  FUNC_1(&VAR_7, &VAR_2->z, &VAR_3->z);
  FUNC_0(&VAR_7, &VAR_7, &VAR_7);
  FUNC_2(&VAR_1->x, &VAR_5, &VAR_4);
  FUNC_2(&VAR_1->t, &VAR_7, &VAR_6);
  FUNC_0(&VAR_1->z, &VAR_7, &VAR_6);
  FUNC_0(&VAR_1->y, &VAR_5, &VAR_4);
}
