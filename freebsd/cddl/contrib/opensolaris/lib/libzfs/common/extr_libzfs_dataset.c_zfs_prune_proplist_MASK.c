
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t zfs_prop_t ;
struct TYPE_3__ {scalar_t__* zfs_props_table; int zfs_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint8_t ;
typedef int nvpair_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int ) ;

void
FUNC_5(zfs_handle_t *VAR_2, uint8_t *VAR_3)
{
 nvpair_t *VAR_4;





 VAR_2->zfs_props_table = VAR_3;

 VAR_4 = FUNC_0(VAR_2->zfs_props, ((void*)0));

 while (VAR_4) {
  zfs_prop_t VAR_5 = FUNC_4(FUNC_2(VAR_4));
  nvpair_t *VAR_6 = FUNC_0(VAR_2->zfs_props, VAR_4);
  if (VAR_5 != VAR_1 && VAR_3[VAR_5] == VAR_0)
   (void) FUNC_1(VAR_2->zfs_props,
       FUNC_2(VAR_4), FUNC_3(VAR_4));
  VAR_4 = VAR_6;
 }
}
