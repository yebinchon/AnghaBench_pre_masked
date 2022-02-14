
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t; int z; int y; int x; } ;
typedef TYPE_1__ ge25519_p3 ;
struct TYPE_6__ {int x; int y; } ;
typedef TYPE_2__ ge25519_aff ;
typedef int fe25519 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(ge25519_p3 *VAR_1, const ge25519_aff *VAR_2)
{
  fe25519 VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;
  FUNC_1(&VAR_13, &VAR_2->x, &VAR_2->y);
  FUNC_2(&VAR_3, &VAR_1->y, &VAR_1->x);
  FUNC_0(&VAR_4, &VAR_1->y, &VAR_1->x);
  FUNC_2(&VAR_5, &VAR_2->y, &VAR_2->x);
  FUNC_0(&VAR_6, &VAR_2->y, &VAR_2->x);
  FUNC_1(&VAR_3, &VAR_3, &VAR_5);
  FUNC_1(&VAR_4, &VAR_4, &VAR_6);
  FUNC_2(&VAR_9, &VAR_4, &VAR_3);
  FUNC_0(&VAR_12, &VAR_4, &VAR_3);
  FUNC_1(&VAR_7, &VAR_1->t, &VAR_13);
  FUNC_1(&VAR_7, &VAR_7, &VAR_0);
  FUNC_0(&VAR_8, &VAR_1->z, &VAR_1->z);
  FUNC_2(&VAR_10, &VAR_8, &VAR_7);
  FUNC_0(&VAR_11, &VAR_8, &VAR_7);
  FUNC_1(&VAR_1->x, &VAR_9, &VAR_10);
  FUNC_1(&VAR_1->y, &VAR_12, &VAR_11);
  FUNC_1(&VAR_1->z, &VAR_11, &VAR_10);
  FUNC_1(&VAR_1->t, &VAR_9, &VAR_12);
}
