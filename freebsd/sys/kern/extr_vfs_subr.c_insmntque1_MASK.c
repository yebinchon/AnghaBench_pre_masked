
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; int v_iflag; struct mount* v_mount; } ;
struct mount {int mnt_kern_flag; scalar_t__ mnt_nvnodelistsize; int mnt_listmtx; int mnt_activevnodelistsize; int mnt_activevnodelist; int mnt_nvnodelist; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (int *,struct vnode*,int ) ;
 int FUNC_6 (int *,struct vnode*,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (int,struct vnode*,char*) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_12(struct vnode *VAR_7, struct mount *VAR_8,
 void (*VAR_9)(struct vnode *, void *), void *VAR_10)
{

 FUNC_1(VAR_7->v_mount == ((void*)0),
  ("insmntque: vnode already on per mount vnode list"));
 FUNC_9(VAR_8 != ((void*)0), VAR_7, ("Don't call insmntque(foo, NULL)"));
 FUNC_0(VAR_7, "insmntque: non-locked vp");
 FUNC_2(VAR_8);
 FUNC_7(VAR_7);
 if (((VAR_8->mnt_kern_flag & VAR_1) != 0 &&
     ((VAR_8->mnt_kern_flag & VAR_2) != 0 ||
     VAR_8->mnt_nvnodelistsize == 0)) &&
     (VAR_7->v_vflag & VAR_4) == 0) {
  FUNC_8(VAR_7);
  FUNC_3(VAR_8);
  if (VAR_9 != ((void*)0))
   VAR_9(VAR_7, VAR_10);
  return (VAR_0);
 }
 VAR_7->v_mount = VAR_8;
 FUNC_4(VAR_8);
 FUNC_6(&VAR_8->mnt_nvnodelist, VAR_7, VAR_6);
 FUNC_9(VAR_8->mnt_nvnodelistsize >= 0, VAR_7,
  ("neg mount point vnode list size"));
 VAR_8->mnt_nvnodelistsize++;
 FUNC_1((VAR_7->v_iflag & VAR_3) == 0,
     ("Activating already active vnode"));
 VAR_7->v_iflag |= VAR_3;
 FUNC_10(&VAR_8->mnt_listmtx);
 FUNC_5(&VAR_8->mnt_activevnodelist, VAR_7, VAR_5);
 VAR_8->mnt_activevnodelistsize++;
 FUNC_11(&VAR_8->mnt_listmtx);
 FUNC_8(VAR_7);
 FUNC_3(VAR_8);
 return (0);
}
