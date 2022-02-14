
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_extents; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int zvol_extent_t ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(zvol_state_t *VAR_0)
{
 zvol_extent_t *VAR_1;

 while ((VAR_1 = FUNC_1(&VAR_0->zv_extents))) {
  FUNC_2(&VAR_0->zv_extents, VAR_1);
  FUNC_0(VAR_1, sizeof (zvol_extent_t));
 }
}
