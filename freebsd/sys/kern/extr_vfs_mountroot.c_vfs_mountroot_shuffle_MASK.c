
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; struct mount* v_mountedhere; int v_iflag; } ;
struct thread {int dummy; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct TYPE_3__ {int f_mntonname; } ;
struct mount {struct vnode* mnt_vnodecovered; TYPE_1__ mnt_stat; int mnt_flag; } ;
struct TYPE_4__ {struct mount* v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_9 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 struct mount* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mount*,int ) ;
 int FUNC_4 (int *,struct mount*,int ) ;
 struct mount* FUNC_5 (struct mount*,int ) ;
 int FUNC_6 (int *,struct mount*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_7 (struct mount*,int ,struct vnode**) ;
 int FUNC_8 (struct vnode*) ;
 int VAR_12 ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*,int ) ;
 int VAR_13 ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct mount*,int) ;
 int FUNC_13 (struct thread*,int ,char*,int ,int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct nameidata*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,int) ;
 TYPE_2__* VAR_17 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (struct mount*) ;
 int FUNC_22 (struct vnode*,int ,int ,int ) ;
 int FUNC_23 (struct vnode*) ;
 int FUNC_24 (struct vnode*) ;

__attribute__((used)) static void
FUNC_25(struct thread *VAR_18, struct mount *VAR_19)
{
 struct nameidata VAR_20;
 struct mount *VAR_21, *VAR_22;
 struct vnode *VAR_23, *VAR_24, *VAR_25;
 char *VAR_26;
 int VAR_27;

 VAR_22 = FUNC_5(VAR_19, VAR_14);


 FUNC_14(&VAR_16);
 VAR_21 = FUNC_2(&VAR_15);
 FUNC_6(&VAR_15, VAR_19, VAR_14);
 if (VAR_21 != VAR_19) {
  FUNC_6(&VAR_15, VAR_22, VAR_14);
  FUNC_3(&VAR_15, VAR_22, VAR_14);
 }
 FUNC_4(&VAR_15, VAR_19, VAR_14);
 FUNC_15(&VAR_16);

 FUNC_12(VAR_21, 1);
 if (VAR_21 != VAR_19)
  FUNC_12(VAR_19, 1);

 if (FUNC_7(VAR_21, VAR_4, &VAR_24))
  FUNC_17("vfs_mountroot_shuffle: Cannot find root vnode");

 FUNC_8(VAR_24);
 VAR_24->v_iflag &= ~VAR_12;
 FUNC_9(VAR_24);
 VAR_24->v_mountedhere = ((void*)0);
 VAR_21->mnt_flag &= ~VAR_8;
 VAR_21->mnt_vnodecovered = ((void*)0);
 FUNC_23(VAR_24);


 VAR_22->mnt_vnodecovered = ((void*)0);
 FUNC_19();
 FUNC_12(VAR_17->v_mount, 1);

 if (VAR_21 != VAR_19) {

  VAR_26 = "/.mount";
  FUNC_1(&VAR_20, VAR_6, VAR_3 | VAR_5, VAR_10,
      VAR_26, VAR_18);
  VAR_27 = FUNC_16(&VAR_20);
  if (VAR_27) {
   FUNC_0(&VAR_20, VAR_9);
   VAR_26 = "/mnt";
   FUNC_1(&VAR_20, VAR_6, VAR_3 | VAR_5, VAR_10,
       VAR_26, VAR_18);
   VAR_27 = FUNC_16(&VAR_20);
  }
  if (!VAR_27) {
   VAR_23 = VAR_20.ni_vp;
   VAR_27 = (VAR_23->v_type == VAR_11) ? 0 : VAR_1;
   if (!VAR_27)
    VAR_27 = FUNC_22(VAR_23, VAR_13, 0, 0);
   if (!VAR_27) {
    FUNC_11(VAR_23);
    VAR_21->mnt_vnodecovered = VAR_23;
    VAR_23->v_mountedhere = VAR_21;
    FUNC_20(VAR_21->mnt_stat.f_mntonname,
        VAR_26, VAR_7);
    FUNC_10(VAR_23, 0);
   } else
    FUNC_23(VAR_23);
  }
  FUNC_0(&VAR_20, VAR_9);

  if (VAR_27)
   FUNC_18("mountroot: unable to remount previous root "
       "under /.mount or /mnt (error %d)\n", VAR_27);
 }


 FUNC_1(&VAR_20, VAR_6, VAR_3 | VAR_5, VAR_10, "/dev", VAR_18);
 VAR_27 = FUNC_16(&VAR_20);
 if (!VAR_27) {
  VAR_23 = VAR_20.ni_vp;
  VAR_27 = (VAR_23->v_type == VAR_11) ? 0 : VAR_1;
  if (!VAR_27)
   VAR_27 = FUNC_22(VAR_23, VAR_13, 0, 0);
  if (!VAR_27) {
   VAR_25 = VAR_19->mnt_vnodecovered;
   if (VAR_25 != ((void*)0)) {
    FUNC_11(VAR_25);
    VAR_25->v_mountedhere = ((void*)0);
    FUNC_24(VAR_25);
   }
   VAR_19->mnt_vnodecovered = VAR_23;
   VAR_23->v_mountedhere = VAR_19;
   FUNC_10(VAR_23, 0);
  } else
   FUNC_23(VAR_23);
 }
 if (VAR_27)
  FUNC_18("mountroot: unable to remount devfs under /dev "
      "(error %d)\n", VAR_27);
 FUNC_0(&VAR_20, VAR_9);

 if (VAR_21 == VAR_19) {
  FUNC_21(VAR_19);

  VAR_27 = FUNC_13(VAR_18, VAR_0, "/dev/dev", VAR_2,
      VAR_10, 0, 0);
  if (VAR_27)
   FUNC_18("mountroot: unable to unlink /dev/dev "
       "(error %d)\n", VAR_27);
 }
}
