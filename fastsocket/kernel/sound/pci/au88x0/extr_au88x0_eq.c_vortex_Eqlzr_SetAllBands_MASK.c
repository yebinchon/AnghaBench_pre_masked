
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int this10; scalar_t__ this28; scalar_t__ this54; int * this130; } ;
struct TYPE_5__ {TYPE_2__ eq; } ;
typedef TYPE_1__ vortex_t ;
typedef int u16 ;
typedef int s32 ;
typedef TYPE_2__ eqlzr_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(vortex_t * VAR_0, u16 VAR_1[], s32 VAR_2)
{
 eqlzr_t *VAR_3 = &(VAR_0->eq);
 int VAR_4;

 if (((VAR_3->this10) * 2 != VAR_2) || (VAR_3->this28 == 0))
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->this130[VAR_4] = VAR_1[VAR_4];
 }

 if (VAR_3->this54)
  return 0;
 return FUNC_0(VAR_0);
}
