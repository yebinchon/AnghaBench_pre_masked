
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct mount {int mnt_flag; int mnt_optnew; } ;
struct iso_mnt {struct vnode* im_devvp; } ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct iso_mnt* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,int ,int ,struct thread*) ;
 int VAR_9 ;
 struct thread* VAR_10 ;
 int FUNC_6 (struct vnode*,struct mount*) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (struct thread*,int ) ;
 scalar_t__ FUNC_9 (int ,char*,int *,int ) ;
 char* FUNC_10 (int ,char*,int*) ;
 int FUNC_11 (struct mount*,char*) ;
 int FUNC_12 (struct vnode*,int*) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static int
FUNC_15(struct mount *VAR_11)
{
 struct vnode *VAR_12;
 struct thread *VAR_13;
 char *VAR_14;
 int VAR_15;
 accmode_t VAR_16;
 struct nameidata VAR_17;
 struct iso_mnt *VAR_18 = ((void*)0);

 VAR_13 = VAR_10;




 FUNC_0(VAR_11);
 VAR_11->mnt_flag |= VAR_4;
 FUNC_1(VAR_11);

 VAR_14 = FUNC_10(VAR_11->mnt_optnew, "from", &VAR_15);
 if (VAR_15)
  return (VAR_15);

 VAR_18 = FUNC_4(VAR_11);

 if (VAR_11->mnt_flag & VAR_5) {
  if (FUNC_9(VAR_11->mnt_optnew, "export", ((void*)0), 0))
   return (0);
 }




 FUNC_3(&VAR_17, VAR_3, VAR_1 | VAR_2, VAR_8, VAR_14, VAR_13);
 if ((VAR_15 = FUNC_7(&VAR_17)))
  return (VAR_15);
 FUNC_2(&VAR_17, VAR_6);
 VAR_12 = VAR_17.ni_vp;

 if (!FUNC_12(VAR_12, &VAR_15)) {
  FUNC_13(VAR_12);
  return (VAR_15);
 }





 VAR_16 = VAR_9;
 VAR_15 = FUNC_5(VAR_12, VAR_16, VAR_13->td_ucred, VAR_13);
 if (VAR_15)
  VAR_15 = FUNC_8(VAR_13, VAR_7);
 if (VAR_15) {
  FUNC_13(VAR_12);
  return (VAR_15);
 }

 if ((VAR_11->mnt_flag & VAR_5) == 0) {
  VAR_15 = FUNC_6(VAR_12, VAR_11);
  if (VAR_15)
   FUNC_14(VAR_12);
 } else {
  if (VAR_12 != VAR_18->im_devvp)
   VAR_15 = VAR_0;
  FUNC_13(VAR_12);
 }
 if (VAR_15)
  return (VAR_15);
 FUNC_11(VAR_11, VAR_14);
 return (0);
}
