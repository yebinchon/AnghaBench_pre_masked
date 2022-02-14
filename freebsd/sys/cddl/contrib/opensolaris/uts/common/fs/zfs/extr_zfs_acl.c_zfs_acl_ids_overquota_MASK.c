
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_3__ {int z_fgid; int z_fuid; } ;
typedef TYPE_1__ zfs_acl_ids_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;

boolean_t
FUNC_1(zfsvfs_t *VAR_2, zfs_acl_ids_t *VAR_3)
{
 return (FUNC_0(VAR_2, VAR_0, VAR_3->z_fuid) ||
     FUNC_0(VAR_2, VAR_1, VAR_3->z_fgid));
}
