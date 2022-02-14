
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_object_ace_t ;
typedef int zfs_ace_t ;
struct TYPE_2__ {int z_type; int z_flags; } ;
typedef TYPE_1__ zfs_ace_hdr_t ;
typedef int uint16_t ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;

__attribute__((used)) static size_t
FUNC_0(void *VAR_4)
{
 zfs_ace_hdr_t *VAR_5 = VAR_4;
 uint16_t VAR_6;

 switch (VAR_5->z_type) {
 case 133:
 case 132:
 case 130:
 case 131:
  return (sizeof (zfs_object_ace_t));
 case 129:
 case 128:
  VAR_6 =
      (((zfs_ace_hdr_t *)VAR_4)->z_flags & VAR_2);
  if (VAR_6 == VAR_1 ||
      VAR_6 == VAR_3 ||
      VAR_6 == VAR_0)
   return (sizeof (zfs_ace_hdr_t));

 default:
  return (sizeof (zfs_ace_t));
 }
}
