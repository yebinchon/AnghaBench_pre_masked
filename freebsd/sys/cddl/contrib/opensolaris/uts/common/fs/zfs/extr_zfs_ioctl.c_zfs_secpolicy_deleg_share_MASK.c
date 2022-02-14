
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* zc_name; int zc_value; } ;
typedef TYPE_3__ zfs_cmd_t ;
struct TYPE_11__ {TYPE_2__* v_vfsp; } ;
typedef TYPE_4__ vnode_t ;
typedef int nvlist_t ;
typedef int cred_t ;
struct TYPE_8__ {char* f_fstypename; } ;
struct TYPE_9__ {int vfs_resource; TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int *,TYPE_4__**) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_4, nvlist_t *VAR_5, cred_t *VAR_6)
{
 vnode_t *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_3(VAR_4->zc_value, VAR_2,
     VAR_1, ((void*)0), &VAR_7)) != 0)
  return (VAR_8);



 if (FUNC_5(VAR_7->v_vfsp->mnt_stat.f_fstypename, "zfs") != 0 ||
     (FUNC_5((char *)FUNC_4(VAR_7->v_vfsp->vfs_resource),
     VAR_4->zc_name) != 0)) {
  FUNC_1(VAR_7);
  return (FUNC_0(VAR_0));
 }

 FUNC_1(VAR_7);
 return (FUNC_2(VAR_4->zc_name,
     VAR_3, VAR_6));
}
