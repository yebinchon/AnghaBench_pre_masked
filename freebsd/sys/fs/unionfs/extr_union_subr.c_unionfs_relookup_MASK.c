
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct componentname {int cn_namelen; char* cn_pnbuf; int cn_flags; int cn_lkflags; char* cn_nameptr; int cn_cred; struct thread* cn_thread; scalar_t__ cn_nameiop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_15 ;
 int FUNC_2 (struct vnode*,struct vnode**,struct componentname*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct vnode *VAR_16, struct vnode **VAR_17,
   struct componentname *VAR_18, struct componentname *VAR_19,
   struct thread *VAR_20, char *VAR_21, int VAR_22, u_long VAR_23)
{
 int VAR_24;

 VAR_19->cn_namelen = VAR_22;
 VAR_19->cn_pnbuf = FUNC_3(VAR_15, VAR_10);
 FUNC_1(VAR_21, VAR_19->cn_pnbuf, VAR_22);
 VAR_19->cn_pnbuf[VAR_22] = '\0';

 VAR_19->cn_nameiop = VAR_23;
 VAR_19->cn_flags = (VAR_9 | VAR_8 | VAR_3 | VAR_13 | VAR_4);
 VAR_19->cn_lkflags = VAR_5;
 VAR_19->cn_thread = VAR_20;
 VAR_19->cn_cred = VAR_18->cn_cred;

 VAR_19->cn_nameptr = VAR_19->cn_pnbuf;

 if (VAR_23 == VAR_1)
  VAR_19->cn_flags |= (VAR_18->cn_flags & (VAR_2 | VAR_14));
 else if (VAR_12 == VAR_23)
  VAR_19->cn_flags |= (VAR_18->cn_flags & VAR_14);
 else if (VAR_23 == VAR_0)
  VAR_19->cn_flags |= VAR_11;

 FUNC_6(VAR_16);
 FUNC_0(VAR_16, VAR_6);

 if ((VAR_24 = FUNC_2(VAR_16, VAR_17, VAR_19))) {
  FUNC_4(VAR_15, VAR_19->cn_pnbuf);
  VAR_19->cn_flags &= ~VAR_3;
  FUNC_5(VAR_16, VAR_5 | VAR_7);
 } else
  FUNC_7(VAR_16);

 return (VAR_24);
}
