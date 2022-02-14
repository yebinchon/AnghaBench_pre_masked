
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct statfs {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; } ;
struct TYPE_4__ {TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_statfs ) (struct mount*,struct statfs*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mount*,struct statfs*) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_1, struct statfs *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = (*VAR_1->mnt_vfc->vfc_vfsops_sd->vfs_statfs)(VAR_1, VAR_2);
 FUNC_0(VAR_3);
 return (VAR_4);
}
