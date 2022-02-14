
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z; int y; int x; } ;
typedef TYPE_1__ ge25519_p3 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(const ge25519_p3 *VAR_0)
{
  int VAR_1 = 1;
  if(!FUNC_1(&VAR_0->x)) VAR_1 = 0;
  if(!FUNC_0(&VAR_0->y, &VAR_0->z)) VAR_1 = 0;
  return VAR_1;
}
