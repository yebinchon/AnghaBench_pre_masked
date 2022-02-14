
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; int z; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (unsigned char*,int *) ;

void FUNC_4(unsigned char VAR_0[32], const ge25519_p3 *VAR_1)
{
  fe25519 VAR_2, VAR_3, VAR_4;
  FUNC_1(&VAR_4, &VAR_1->z);
  FUNC_2(&VAR_2, &VAR_1->x, &VAR_4);
  FUNC_2(&VAR_3, &VAR_1->y, &VAR_4);
  FUNC_3(VAR_0, &VAR_3);
  VAR_0[31] ^= FUNC_0(&VAR_2) << 7;
}
