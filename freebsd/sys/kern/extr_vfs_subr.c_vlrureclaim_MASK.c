
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_iflag; TYPE_1__* v_object; int v_cache_src; scalar_t__ v_usecount; } ;
struct mount {int mnt_nvnodelistsize; int mnt_nvnodelist; } ;
typedef int int64_t ;
struct TYPE_2__ {int resident_page_count; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_3 ;
 struct vnode* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct vnode*,int ) ;
 struct vnode* FUNC_6 (struct vnode*,int ) ;
 int FUNC_7 (int *,struct vnode*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_11 (struct vnode*,int) ;
 int FUNC_12 (struct vnode*,int ) ;
 int VAR_7 ;
 int FUNC_13 (int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;
 int VAR_10 ;
 int FUNC_16 () ;
 int VAR_11 ;
 int FUNC_17 (struct vnode*) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;
 int FUNC_20 (struct vnode*) ;
 int FUNC_21 (struct mount*) ;
 int FUNC_22 (int *,struct mount**,int ) ;

__attribute__((used)) static int
FUNC_23(struct mount *VAR_12, bool VAR_13, int VAR_14)
{
 struct vnode *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 VAR_17 = 0;
 FUNC_22(((void*)0), &VAR_12, VAR_7);
 FUNC_2(VAR_12);
 VAR_16 = VAR_12->mnt_nvnodelistsize;
 VAR_18 = VAR_16 * (int64_t)VAR_9 / FUNC_14(VAR_8, 1);
 VAR_18 = VAR_18 / 10 + 1;
 while (VAR_16 != 0 && VAR_17 < VAR_18) {
  VAR_15 = FUNC_4(&VAR_12->mnt_nvnodelist);
  while (VAR_15 != ((void*)0) && VAR_15->v_type == VAR_6)
   VAR_15 = FUNC_6(VAR_15, VAR_11);
  if (VAR_15 == ((void*)0))
   break;
  FUNC_7(&VAR_12->mnt_nvnodelist, VAR_15, VAR_11);
  FUNC_5(&VAR_12->mnt_nvnodelist, VAR_15, VAR_11);
  --VAR_16;
  if (!FUNC_9(VAR_15))
   goto next_iter;






  if (VAR_15->v_usecount ||
      (!VAR_13 && !FUNC_1(&VAR_15->v_cache_src)) ||
      ((VAR_15->v_iflag & VAR_5) != 0) ||
      (VAR_15->v_iflag & VAR_4) != 0 || (VAR_15->v_object != ((void*)0) &&
      VAR_15->v_object->resident_page_count > VAR_14)) {
   FUNC_10(VAR_15);
   goto next_iter;
  }
  FUNC_3(VAR_12);
  FUNC_20(VAR_15);
  if (FUNC_11(VAR_15, VAR_1|VAR_0|VAR_2)) {
   FUNC_17(VAR_15);
   goto next_iter_mntunlocked;
  }
  FUNC_8(VAR_15);
  if (VAR_15->v_usecount ||
      (!VAR_13 && !FUNC_1(&VAR_15->v_cache_src)) ||
      (VAR_15->v_iflag & VAR_5) != 0 ||
      (VAR_15->v_object != ((void*)0) &&
      VAR_15->v_object->resident_page_count > VAR_14)) {
   FUNC_12(VAR_15, 0);
   FUNC_18(VAR_15);
   goto next_iter_mntunlocked;
  }
  FUNC_0((VAR_15->v_iflag & VAR_4) == 0,
      ("VI_DOOMED unexpectedly detected in vlrureclaim()"));
  FUNC_13(VAR_10, 1);
  FUNC_19(VAR_15);
  FUNC_12(VAR_15, 0);
  FUNC_18(VAR_15);
  VAR_17++;
next_iter_mntunlocked:
  if (!FUNC_16())
   goto relock_mnt;
  goto yield;
next_iter:
  if (!FUNC_16())
   continue;
  FUNC_3(VAR_12);
yield:
  FUNC_15(VAR_3);
relock_mnt:
  FUNC_2(VAR_12);
 }
 FUNC_3(VAR_12);
 FUNC_21(VAR_12);
 return VAR_17;
}
