
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int bv_hd; } ;
struct TYPE_7__ {int bv_hd; } ;
struct bufobj {int bo_numoutput; TYPE_3__ bo_dirty; TYPE_2__ bo_clean; } ;
struct TYPE_6__ {int tqe_prev; } ;
struct vnode {int v_type; struct bufobj v_bufobj; int v_mount; TYPE_1__ v_actfreelist; } ;
struct msdosfsmount {int pm_flags; int pm_fatlock; struct msdosfsmount* pm_inusemap; TYPE_5__* pm_dev; struct vnode* pm_devvp; int pm_cp; scalar_t__ pm_u2d; scalar_t__ pm_d2u; scalar_t__ pm_u2w; scalar_t__ pm_w2u; } ;
struct mount {int mnt_flag; int * mnt_data; } ;
struct TYPE_10__ {int si_mountpt; } ;
struct TYPE_9__ {int (* close ) (scalar_t__) ;} ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vnode*,int ) ;
 struct msdosfsmount* FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (uintptr_t*,int ) ;
 int VAR_9 ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (struct msdosfsmount*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct msdosfsmount*,int) ;
 TYPE_4__* VAR_10 ;
 int FUNC_17 (struct mount*,int ) ;
 int FUNC_18 (char*,int ,int ,int ,...) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_23 (struct mount*,int ,int,int ) ;
 int FUNC_24 (struct vnode*,char*) ;
 int FUNC_25 (struct vnode*) ;

__attribute__((used)) static int
FUNC_26(struct mount *VAR_12, int VAR_13)
{
 struct msdosfsmount *VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = VAR_16 = 0;
 VAR_14 = FUNC_6(VAR_12);
 if ((VAR_14->pm_flags & VAR_6) == 0)
  VAR_15 = FUNC_17(VAR_12, VAR_4);
 if ((VAR_13 & VAR_2) != 0)
  VAR_16 |= VAR_1;
 else if (VAR_15 != 0)
  return (VAR_15);
 VAR_15 = FUNC_23(VAR_12, 0, VAR_16, VAR_9);
 if (VAR_15 != 0 && VAR_15 != VAR_0)
  return (VAR_15);
 if ((VAR_14->pm_flags & VAR_6) == 0) {
  VAR_15 = FUNC_16(VAR_14, 0);
  if (VAR_15 && VAR_15 != VAR_0) {
   (void)FUNC_16(VAR_14, 1);
   return (VAR_15);
  }
 }
 if (VAR_14->pm_flags & VAR_5 && VAR_10) {
  if (VAR_14->pm_w2u)
   VAR_10->close(VAR_14->pm_w2u);
  if (VAR_14->pm_u2w)
   VAR_10->close(VAR_14->pm_u2w);
  if (VAR_14->pm_d2u)
   VAR_10->close(VAR_14->pm_d2u);
  if (VAR_14->pm_u2d)
   VAR_10->close(VAR_14->pm_u2d);
 }
 FUNC_12();
 FUNC_14(VAR_14->pm_cp);
 FUNC_13();
 FUNC_9((uintptr_t *)&VAR_14->pm_dev->si_mountpt, 0);
 FUNC_25(VAR_14->pm_devvp);
 FUNC_10(VAR_14->pm_dev);
 FUNC_11(VAR_14->pm_inusemap, VAR_7);
 FUNC_15(&VAR_14->pm_fatlock);
 FUNC_11(VAR_14, VAR_8);
 VAR_12->mnt_data = ((void*)0);
 FUNC_2(VAR_12);
 VAR_12->mnt_flag &= ~VAR_3;
 FUNC_3(VAR_12);
 return (VAR_15);
}
