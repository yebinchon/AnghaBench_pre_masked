
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vattr {int dummy; } ;
struct thread {int td_ucred; } ;
struct nameidata {TYPE_2__* ni_vp; } ;
struct beri_vtblk_softc {int cred; TYPE_2__* vnode; TYPE_1__* mdio; } ;
struct TYPE_7__ {scalar_t__ v_type; int v_iflag; int v_vflag; } ;
struct TYPE_6__ {int md_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int ,struct thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,struct vattr*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (struct nameidata*,int*,int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct beri_vtblk_softc *VAR_13, struct thread *VAR_14)
{
 struct nameidata VAR_15;
 struct vattr VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_18 = (VAR_2 | VAR_3);
 FUNC_1(&VAR_15, VAR_7, VAR_1, VAR_9,
  VAR_13->mdio->md_file, VAR_14);
 VAR_17 = FUNC_7(&VAR_15, &VAR_18, 0, ((void*)0));
 if (VAR_17 != 0)
  return (VAR_17);
 FUNC_0(&VAR_15, VAR_8);

 if (VAR_15.ni_vp->v_type != VAR_11) {
  return (VAR_0);
 }

 VAR_17 = FUNC_2(VAR_15.ni_vp, &VAR_16, VAR_14->td_ucred);
 if (VAR_17 != 0)
  return (VAR_17);

 if (FUNC_3(VAR_15.ni_vp) != VAR_4) {
  FUNC_6(VAR_15.ni_vp, VAR_6 | VAR_5);
  if (VAR_15.ni_vp->v_iflag & VAR_10) {
   return (1);
  }
 }
 VAR_15.ni_vp->v_vflag |= VAR_12;
 FUNC_4(VAR_15.ni_vp, 0);

 VAR_13->vnode = VAR_15.ni_vp;
 VAR_13->cred = FUNC_5(VAR_14->td_ucred);

 return (0);
}
