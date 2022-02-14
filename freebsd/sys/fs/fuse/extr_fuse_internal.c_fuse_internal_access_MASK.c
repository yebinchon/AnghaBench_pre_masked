
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode {int v_type; } ;
struct vattr {int va_gid; int va_uid; int va_mode; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_dispatcher {struct fuse_access_in* indata; } ;
struct fuse_data {int dataflags; int daemoncred; } ;
struct fuse_access_in {int mask; } ;
typedef int accmode_t ;


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

 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 int FUNC_4 (struct mount*,int ) ;
 int FUNC_5 (struct mount*,int ) ;
 struct fuse_data* FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;
 scalar_t__ FUNC_8 (int ,struct ucred*) ;
 int FUNC_9 (int,int ,int ,int ,int,struct ucred*,int *) ;
 scalar_t__ FUNC_10 (struct mount*) ;
 struct mount* FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct vnode *VAR_16,
    accmode_t VAR_17,
    struct thread *VAR_18,
    struct ucred *VAR_19)
{
 int VAR_20 = 0;
 uint32_t VAR_21 = VAR_6;
 int VAR_22;
 int VAR_23;
 struct mount *VAR_24;
 struct fuse_dispatcher VAR_25;
 struct fuse_access_in *VAR_26;
 struct fuse_data *VAR_27;

 VAR_24 = FUNC_11(VAR_16);
 VAR_23 = FUNC_12(VAR_16);

 VAR_27 = FUNC_6(VAR_24);
 VAR_22 = VAR_27->dataflags;

 if (VAR_17 == 0)
  return 0;

 if (VAR_17 & VAR_11 && FUNC_10(VAR_24)) {
  switch (VAR_16->v_type) {
  case 130:

  case 129:

  case 128:
   return VAR_2;
  default:
   break;
  }
 }


 if (!(VAR_22 & VAR_3)) {
  if (FUNC_8(VAR_27->daemoncred, VAR_19))
   return VAR_1;
 }

 if (VAR_22 & VAR_4) {
  struct vattr VAR_28;

  FUNC_7(VAR_16, &VAR_28, VAR_19, VAR_18);
  return FUNC_9(VAR_16->v_type, VAR_28.va_mode, VAR_28.va_uid,
      VAR_28.va_gid, VAR_17, VAR_19, ((void*)0));
 }

 if (!FUNC_4(VAR_24, VAR_5))
  return 0;

 if ((VAR_17 & (VAR_13 | VAR_9 | VAR_8)) != 0)
  VAR_21 |= VAR_14;
 if ((VAR_17 & VAR_12) != 0)
  VAR_21 |= VAR_7;
 if ((VAR_17 & VAR_10) != 0)
  VAR_21 |= VAR_15;

 FUNC_1(&VAR_25, sizeof(*VAR_26));
 FUNC_2(&VAR_25, VAR_5, VAR_16, VAR_18, VAR_19);

 VAR_26 = VAR_25.indata;
 VAR_26->mask = VAR_21;

 VAR_20 = FUNC_3(&VAR_25);
 FUNC_0(&VAR_25);

 if (VAR_20 == VAR_0) {
  FUNC_5(VAR_24, VAR_5);
  VAR_20 = 0;
 }
 return VAR_20;
}
