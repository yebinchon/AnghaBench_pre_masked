
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_object_ace_t ;
struct TYPE_3__ {int z_type; } ;
struct TYPE_4__ {TYPE_1__ z_hdr; } ;
typedef TYPE_2__ zfs_ace_t ;
typedef int caddr_t ;







__attribute__((used)) static int
FUNC_0(void *VAR_0, void **VAR_1)
{
 zfs_ace_t *VAR_2 = VAR_0;
 zfs_object_ace_t *VAR_3;

 switch (VAR_2->z_hdr.z_type) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_3 = VAR_0;
  *VAR_1 = (caddr_t)VAR_3 + sizeof (zfs_ace_t);
  return (sizeof (zfs_object_ace_t) - sizeof (zfs_ace_t));
 default:
  *VAR_1 = ((void*)0);
  return (0);
 }
}
