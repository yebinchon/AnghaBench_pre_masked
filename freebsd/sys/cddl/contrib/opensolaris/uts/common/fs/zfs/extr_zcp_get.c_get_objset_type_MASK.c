
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_type_t ;
struct TYPE_8__ {TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_9__ {scalar_t__ ds_is_snapshot; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_7__ {int os_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__**) ;

__attribute__((used)) static int
FUNC_1(dsl_dataset_t *VAR_4, zfs_type_t *VAR_5)
{
 int VAR_6;
 objset_t *VAR_7;
 VAR_6 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_4->ds_is_snapshot) {
  *VAR_5 = VAR_2;
 } else {
  switch (VAR_7->os_phys->os_type) {
  case 129:
   *VAR_5 = VAR_1;
   break;
  case 128:
   *VAR_5 = VAR_3;
   break;
  default:
   return (VAR_0);
  }
 }
 return (0);
}
