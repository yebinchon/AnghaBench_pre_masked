
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_groupquota_obj; int z_userquota_obj; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_userquota_prop_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static uint64_t
FUNC_0(zfsvfs_t *VAR_2, zfs_userquota_prop_t VAR_3)
{
 switch (VAR_3) {
 case 128:
  return (VAR_1);
 case 130:
  return (VAR_0);
 case 129:
  return (VAR_2->z_userquota_obj);
 case 131:
  return (VAR_2->z_groupquota_obj);
 }
 return (0);
}
