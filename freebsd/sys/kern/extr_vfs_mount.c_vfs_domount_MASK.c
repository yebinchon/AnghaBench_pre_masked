
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int v_vflag; } ;
struct vfsoptlist {int dummy; } ;
struct vfsconf {int dummy; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_18 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ VAR_25 ;
 struct vfsconf* FUNC_9 (char const*) ;
 struct vfsconf* FUNC_10 (char const*,struct thread*,int*) ;
 int FUNC_11 (struct thread*,struct vfsconf*,char*,struct vnode*,int,struct vfsoptlist**) ;
 int FUNC_12 (struct thread*,struct vnode*,int,struct vfsoptlist**) ;
 int FUNC_13 (struct thread*,struct vnode*,char*,scalar_t__) ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static int
FUNC_15(
 struct thread *VAR_26,
 const char *VAR_27,
 char *VAR_28,
 uint64_t VAR_29,
 struct vfsoptlist **VAR_30
 )
{
 struct vfsconf *VAR_31;
 struct nameidata VAR_32;
 struct vnode *VAR_33;
 char *VAR_34;
 int VAR_35;






 if (FUNC_8(VAR_27) >= VAR_7 || FUNC_8(VAR_28) >= VAR_8)
  return (VAR_2);

 if (FUNC_3(VAR_26->td_ucred) || VAR_25 == 0) {
  if ((VAR_35 = FUNC_6(VAR_26, VAR_19)) != 0)
   return (VAR_35);
 }




 if (VAR_29 & VAR_9) {
  VAR_35 = FUNC_6(VAR_26, VAR_20);
  if (VAR_35)
   return (VAR_35);
 }
 if (VAR_29 & VAR_13) {
  VAR_35 = FUNC_6(VAR_26, VAR_22);
  if (VAR_35)
   return (VAR_35);
 }



 if ((VAR_29 & (VAR_11 | VAR_15)) != (VAR_11 | VAR_15)) {
  if (FUNC_6(VAR_26, VAR_21) != 0)
   VAR_29 |= VAR_11 | VAR_15;
 }


 VAR_31 = ((void*)0);
 if ((VAR_29 & VAR_14) == 0) {

  if (VAR_29 & VAR_12)
   VAR_31 = FUNC_9(VAR_27);
  else
   VAR_31 = FUNC_10(VAR_27, VAR_26, &VAR_35);
  if (VAR_31 == ((void*)0))
   return (VAR_3);
 }




 FUNC_1(&VAR_32, VAR_6, VAR_4 | VAR_5 | VAR_0,
     VAR_23, VAR_28, VAR_26);
 VAR_35 = FUNC_5(&VAR_32);
 if (VAR_35 != 0)
  return (VAR_35);
 FUNC_0(&VAR_32, VAR_18);
 VAR_33 = VAR_32.ni_vp;
 if ((VAR_29 & VAR_14) == 0) {
  if ((VAR_33->v_vflag & VAR_24) != 0 &&
      (VAR_29 & VAR_10) != 0) {
   FUNC_14(VAR_33);
   return (VAR_1);
  }
  VAR_34 = FUNC_4(VAR_8, VAR_16, VAR_17);
  FUNC_7(VAR_34, VAR_28);
  VAR_35 = FUNC_13(VAR_26, VAR_33, VAR_34, VAR_8);

  if (VAR_35 == 0 || VAR_35 == VAR_3) {
   VAR_35 = FUNC_11(VAR_26, VAR_31, VAR_34, VAR_33,
       VAR_29, VAR_30);
  }
  FUNC_2(VAR_34, VAR_16);
 } else
  VAR_35 = FUNC_12(VAR_26, VAR_33, VAR_29, VAR_30);

 return (VAR_35);
}
