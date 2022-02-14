
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_lookup_args {struct vnode** a_vpp; struct vnode* a_dvp; struct componentname* a_cnp; } ;
struct vnode {int v_vflag; int v_iflag; struct mount* v_mount; } ;
struct mount {int mnt_flag; } ;
struct componentname {int cn_flags; scalar_t__ cn_nameiop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct vnode* FUNC_1 (struct vnode*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct vnode*,struct vnode**,struct componentname*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*) ;
 int VAR_12 ;
 int FUNC_5 (struct mount*,struct vnode*,struct vnode**) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;

__attribute__((used)) static int
FUNC_11(struct vop_lookup_args *VAR_13)
{
 struct componentname *VAR_14 = VAR_13->a_cnp;
 struct vnode *VAR_15 = VAR_13->a_dvp;
 int VAR_16 = VAR_14->cn_flags;
 struct vnode *VAR_17, *VAR_18, *VAR_19;
 struct mount *VAR_20;
 int VAR_21;

 VAR_20 = VAR_15->v_mount;
 if ((VAR_16 & VAR_6) != 0 && (VAR_20->mnt_flag & VAR_9) != 0 &&
     (VAR_14->cn_nameiop == VAR_1 || VAR_14->cn_nameiop == VAR_10))
  return (VAR_4);




 VAR_18 = FUNC_1(VAR_15);
 VAR_17 = VAR_19 = ((void*)0);
 FUNC_0((VAR_18->v_vflag & VAR_12) == 0 ||
     ((VAR_15->v_vflag & VAR_12) != 0 && (VAR_16 & VAR_5) == 0),
     ("ldvp %p fl %#x dvp %p fl %#x flags %#x", VAR_18, VAR_18->v_vflag,
      VAR_15, VAR_15->v_vflag, VAR_16));






 FUNC_7(VAR_18);

 VAR_21 = FUNC_2(VAR_18, &VAR_19, VAR_14);






 if ((VAR_21 == 0 || VAR_21 == VAR_2) &&
     (VAR_15->v_iflag & VAR_11) != 0) {
  VAR_21 = VAR_3;
  if (VAR_19 != ((void*)0))
   FUNC_9(VAR_19);
  FUNC_3(VAR_18, 0);
  FUNC_8(VAR_15, VAR_7 | VAR_8);
 }
 FUNC_6(VAR_18);

 if (VAR_21 == VAR_2 && (VAR_16 & VAR_6) != 0 &&
     (VAR_20->mnt_flag & VAR_9) != 0 &&
     (VAR_14->cn_nameiop == VAR_0 || VAR_14->cn_nameiop == VAR_10))
  VAR_21 = VAR_4;

 if ((VAR_21 == 0 || VAR_21 == VAR_2) && VAR_19 != ((void*)0)) {
  if (VAR_18 == VAR_19) {
   *VAR_13->a_vpp = VAR_15;
   FUNC_4(VAR_15);
   FUNC_10(VAR_19);
  } else {
   VAR_21 = FUNC_5(VAR_20, VAR_19, &VAR_17);
   if (VAR_21 == 0)
    *VAR_13->a_vpp = VAR_17;
  }
 }
 return (VAR_21);
}
