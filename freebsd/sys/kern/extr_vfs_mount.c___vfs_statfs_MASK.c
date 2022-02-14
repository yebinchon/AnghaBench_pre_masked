
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statfs {int f_flags; int f_namemax; int f_version; } ;
struct mount {int mnt_flag; TYPE_1__* mnt_op; int mnt_stat; } ;
struct TYPE_2__ {int (* vfs_statfs ) (struct mount*,struct statfs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct statfs*,int *,int) ;
 int FUNC_1 (struct mount*,struct statfs*) ;

int
FUNC_2(struct mount *VAR_3, struct statfs *VAR_4)
{





 FUNC_0(VAR_4, &VAR_3->mnt_stat, sizeof(*VAR_4));




 VAR_4->f_version = VAR_2;
 VAR_4->f_namemax = VAR_1;
 VAR_4->f_flags = VAR_3->mnt_flag & VAR_0;

 return (VAR_3->mnt_op->vfs_statfs(VAR_3, VAR_4));
}
