
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_os; int z_version; int z_use_sa; scalar_t__ z_vfs; scalar_t__ z_use_fuids; } ;
typedef TYPE_1__ zfsvfs_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(zfsvfs_t *VAR_6)
{
 VAR_6->z_use_fuids = FUNC_0(VAR_6->z_version, VAR_6->z_os);
 if (VAR_6->z_vfs) {
  if (VAR_6->z_use_fuids) {
   FUNC_3(VAR_6->z_vfs, VAR_5);
   FUNC_3(VAR_6->z_vfs, VAR_4);
   FUNC_3(VAR_6->z_vfs, VAR_1);
   FUNC_3(VAR_6->z_vfs, VAR_2);
   FUNC_3(VAR_6->z_vfs, VAR_0);
   FUNC_3(VAR_6->z_vfs, VAR_3);
  } else {
   FUNC_2(VAR_6->z_vfs, VAR_5);
   FUNC_2(VAR_6->z_vfs, VAR_4);
   FUNC_2(VAR_6->z_vfs, VAR_1);
   FUNC_2(VAR_6->z_vfs, VAR_2);
   FUNC_2(VAR_6->z_vfs, VAR_0);
   FUNC_2(VAR_6->z_vfs, VAR_3);
  }
 }
 VAR_6->z_use_sa = FUNC_1(VAR_6->z_version, VAR_6->z_os);
}
