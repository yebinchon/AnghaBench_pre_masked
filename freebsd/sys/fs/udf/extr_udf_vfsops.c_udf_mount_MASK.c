
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vfsoptlist {int dummy; } ;
struct udf_mnt {int im_flags; int im_l2d; int im_d2l; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct mount {int mnt_flag; struct vfsoptlist* mnt_optnew; } ;
struct TYPE_2__ {int (* open ) (char*,char*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct udf_mnt* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,int ,int ,struct thread*) ;
 int VAR_12 ;
 struct thread* VAR_13 ;
 int FUNC_6 (struct nameidata*) ;
 int FUNC_7 (struct thread*,int ) ;
 int FUNC_8 (char*,char*,int *) ;
 int FUNC_9 (char*,char*,int *) ;
 TYPE_1__* VAR_14 ;
 int FUNC_10 (struct vnode*,struct mount*) ;
 int FUNC_11 (struct vfsoptlist*,char*,void**,int*) ;
 int FUNC_12 (struct mount*,char*) ;
 scalar_t__ FUNC_13 (struct vnode*,int*) ;
 int FUNC_14 (struct vnode*) ;
 int FUNC_15 (struct vnode*) ;

__attribute__((used)) static int
FUNC_16(struct mount *VAR_15)
{
 struct vnode *VAR_16;
 struct thread *VAR_17;
 struct udf_mnt *VAR_18 = ((void*)0);
 struct vfsoptlist *VAR_19;
 char *VAR_20, *VAR_21, *VAR_22;
 int VAR_23, VAR_24, *VAR_25;
 struct nameidata VAR_26, *VAR_27 = &VAR_26;

 VAR_17 = VAR_13;
 VAR_19 = VAR_15->mnt_optnew;




 FUNC_0(VAR_15);
 VAR_15->mnt_flag |= VAR_5;
 FUNC_1(VAR_15);





 if (VAR_15->mnt_flag & VAR_6)
  return (VAR_1);

 VAR_20 = ((void*)0);
 VAR_23 = FUNC_11(VAR_19, "from", (void **)&VAR_20, &VAR_24);
 if (!VAR_23 && VAR_20[VAR_24 - 1] != '\0')
  return (VAR_0);

 if (VAR_15->mnt_flag & VAR_7) {
  return (0);
 }


 if (VAR_20 == ((void*)0))
  return (VAR_0);
 FUNC_3(VAR_27, VAR_4, VAR_2 | VAR_3, VAR_11, VAR_20, VAR_17);
 if ((VAR_23 = FUNC_6(VAR_27)))
  return (VAR_23);
 FUNC_2(VAR_27, VAR_8);
 VAR_16 = VAR_27->ni_vp;

 if (FUNC_13(VAR_16, &VAR_23) == 0) {
  FUNC_14(VAR_16);
  return (VAR_23);
 }


 VAR_23 = FUNC_5(VAR_16, VAR_12, VAR_17->td_ucred, VAR_17);
 if (VAR_23)
  VAR_23 = FUNC_7(VAR_17, VAR_9);
 if (VAR_23) {
  FUNC_14(VAR_16);
  return (VAR_23);
 }

 if ((VAR_23 = FUNC_10(VAR_16, VAR_15))) {
  FUNC_15(VAR_16);
  return (VAR_23);
 }

 VAR_18 = FUNC_4(VAR_15);

 VAR_25 = ((void*)0);
 VAR_23 = FUNC_11(VAR_19, "flags", (void **)&VAR_25, &VAR_24);
 if (VAR_23 || VAR_24 != sizeof(int))
  return (VAR_0);
 VAR_18->im_flags = *VAR_25;

 if (VAR_18->im_flags & VAR_10 && VAR_14) {
  VAR_21 = ((void*)0);
  VAR_23 = FUNC_11(VAR_19, "cs_disk", (void **)&VAR_21, &VAR_24);
  if (!VAR_23 && VAR_21[VAR_24 - 1] != '\0')
   return (VAR_0);
  VAR_22 = ((void*)0);
  VAR_23 = FUNC_11(VAR_19, "cs_local", (void **)&VAR_22, &VAR_24);
  if (!VAR_23 && VAR_22[VAR_24 - 1] != '\0')
   return (VAR_0);
  VAR_14->open(VAR_22, VAR_21, &VAR_18->im_d2l);



 }

 FUNC_12(VAR_15, VAR_20);
 return 0;
}
