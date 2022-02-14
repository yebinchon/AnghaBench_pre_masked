
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_req {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; } ;
typedef int fsctlop_t ;
struct TYPE_4__ {TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_sysctl ) (struct mount*,int ,struct sysctl_req*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mount*,int ,struct sysctl_req*) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_1, fsctlop_t VAR_2, struct sysctl_req *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = (*VAR_1->mnt_vfc->vfc_vfsops_sd->vfs_sysctl)(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4);
 return (VAR_5);
}
