
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_flags; int z_type; int z_fuid; int z_access_mask; } ;
typedef TYPE_1__ zfs_oldace_t ;
typedef int zfs_acl_t ;
typedef int vtype_t ;
typedef size_t caddr_t ;
struct TYPE_6__ {int a_who; int a_flags; int a_type; int a_access_mask; } ;
typedef TYPE_2__ ace_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(vtype_t VAR_2, zfs_acl_t *VAR_3, ace_t *VAR_4,
    zfs_oldace_t *VAR_5, int VAR_6, size_t *VAR_7)
{
 int VAR_8;
 zfs_oldace_t *VAR_9 = VAR_5;

 for (VAR_8 = 0; VAR_8 != VAR_6; VAR_8++, VAR_9++) {
  VAR_9->z_access_mask = VAR_4[VAR_8].a_access_mask;
  VAR_9->z_type = VAR_4[VAR_8].a_type;
  VAR_9->z_flags = VAR_4[VAR_8].a_flags;
  VAR_9->z_fuid = VAR_4[VAR_8].a_who;



  if (FUNC_1(VAR_2, VAR_3, VAR_9->z_type,
      VAR_9->z_flags) != VAR_0)
   return (FUNC_0(VAR_1));
 }
 *VAR_7 = (caddr_t)VAR_9 - (caddr_t)VAR_5;
 return (0);
}
