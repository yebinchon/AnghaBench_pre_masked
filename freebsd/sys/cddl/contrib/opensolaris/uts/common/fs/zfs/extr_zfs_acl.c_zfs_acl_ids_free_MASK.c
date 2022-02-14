
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * z_fuidp; int * z_aclp; } ;
typedef TYPE_1__ zfs_acl_ids_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(zfs_acl_ids_t *VAR_0)
{
 if (VAR_0->z_aclp)
  FUNC_0(VAR_0->z_aclp);
 if (VAR_0->z_fuidp)
  FUNC_1(VAR_0->z_fuidp);
 VAR_0->z_aclp = ((void*)0);
 VAR_0->z_fuidp = ((void*)0);
}
