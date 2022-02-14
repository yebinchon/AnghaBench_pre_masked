
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ z_is_sa; int z_zfsvfs; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_6__ {int z_acl_version; } ;
typedef TYPE_2__ zfs_acl_phys_t ;
typedef int acl_phys ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,TYPE_2__*,int) ;

int
FUNC_3(znode_t *VAR_2)
{
 zfs_acl_phys_t VAR_3;

 if (VAR_2->z_is_sa)
  return (VAR_1);
 else {
  int VAR_4;
  if ((VAR_4 = FUNC_2(VAR_2->z_sa_hdl,
      FUNC_0(VAR_2->z_zfsvfs),
      &VAR_3, sizeof (VAR_3))) == 0)
   return (VAR_3.z_acl_version);
  else {




   FUNC_1(VAR_2->z_is_sa && VAR_4 == VAR_0);
   return (VAR_1);
  }
 }
}
