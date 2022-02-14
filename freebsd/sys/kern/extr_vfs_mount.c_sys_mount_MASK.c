
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct vfsconf {int vfc_flags; TYPE_2__* vfc_vfsops; TYPE_1__* vfc_vfsops_sd; } ;
struct thread {int dummy; } ;
struct mount_args {int flags; int data; int path; int type; } ;
struct mntarg {int dummy; } ;
struct TYPE_4__ {int (* vfs_cmount ) (struct mntarg*,int ,int) ;} ;
struct TYPE_3__ {int (* vfs_cmount ) (struct mntarg*,int ,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,int ,int *) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ,int ,int ) ;
 struct mntarg* FUNC_5 (struct mntarg*,int,char*) ;
 struct mntarg* FUNC_6 (struct mntarg*,char*,int ,int ) ;
 int FUNC_7 (struct mntarg*,int ,int) ;
 int FUNC_8 (struct mntarg*,int ,int) ;
 struct vfsconf* FUNC_9 (char*,struct thread*,int*) ;

int
FUNC_10(struct thread *VAR_11, struct mount_args *VAR_12)
{
 char *VAR_13;
 struct vfsconf *VAR_14 = ((void*)0);
 struct mntarg *VAR_15 = ((void*)0);
 uint64_t VAR_16;
 int VAR_17;






 VAR_16 = VAR_12->flags;

 FUNC_0(VAR_16);
 VAR_16 &= ~VAR_7;

 VAR_13 = FUNC_4(VAR_2, VAR_8, VAR_9);
 VAR_17 = FUNC_2(VAR_12->type, VAR_13, VAR_2, ((void*)0));
 if (VAR_17) {
  FUNC_3(VAR_13, VAR_8);
  return (VAR_17);
 }

 FUNC_1(VAR_13);
 VAR_14 = FUNC_9(VAR_13, VAR_11, &VAR_17);
 FUNC_3(VAR_13, VAR_8);
 if (VAR_14 == ((void*)0))
  return (VAR_0);
 if (((VAR_14->vfc_flags & VAR_10) != 0 &&
     VAR_14->vfc_vfsops_sd->vfs_cmount == ((void*)0)) ||
     ((VAR_14->vfc_flags & VAR_10) == 0 &&
     VAR_14->vfc_vfsops->vfs_cmount == ((void*)0)))
  return (VAR_1);

 VAR_15 = FUNC_6(VAR_15, "fstype", VAR_12->type, VAR_2);
 VAR_15 = FUNC_6(VAR_15, "fspath", VAR_12->path, VAR_3);
 VAR_15 = FUNC_5(VAR_15, VAR_16 & VAR_6, "noro");
 VAR_15 = FUNC_5(VAR_15, !(VAR_16 & VAR_5), "nosuid");
 VAR_15 = FUNC_5(VAR_15, !(VAR_16 & VAR_4), "noexec");

 if ((VAR_14->vfc_flags & VAR_10) != 0)
  return (VAR_14->vfc_vfsops_sd->vfs_cmount(VAR_15, VAR_12->data, VAR_16));
 return (VAR_14->vfc_vfsops->vfs_cmount(VAR_15, VAR_12->data, VAR_16));
}
