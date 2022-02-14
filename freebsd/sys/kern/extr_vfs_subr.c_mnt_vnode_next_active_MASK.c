
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_iflag; struct mount* v_mount; } ;
struct mount {int mnt_listmtx; int mnt_activevnodelist; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct vnode*,struct vnode*,int ) ;
 struct vnode* FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (int *,struct vnode*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct vnode**,struct mount*) ;
 int FUNC_8 (struct vnode*,struct mount*,struct vnode*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;

__attribute__((used)) static struct vnode *
FUNC_11(struct vnode **VAR_5, struct mount *VAR_6)
{
 struct vnode *VAR_7, *VAR_8;

 FUNC_9(&VAR_6->mnt_listmtx, VAR_0);
 FUNC_1((*VAR_5)->v_mount == VAR_6, ("marker vnode mount list mismatch"));
restart:
 VAR_7 = FUNC_3(*VAR_5, VAR_4);
 while (VAR_7 != ((void*)0)) {
  if (VAR_7->v_type == VAR_3) {
   VAR_7 = FUNC_3(VAR_7, VAR_4);
   continue;
  }





  if (!FUNC_5(VAR_7) &&
      !FUNC_8(*VAR_5, VAR_6, VAR_7))
   goto restart;
  FUNC_1(VAR_7->v_type != VAR_3, ("locked marker %p", VAR_7));
  FUNC_1(VAR_7->v_mount == VAR_6 || VAR_7->v_mount == ((void*)0),
      ("alien vnode on the active list %p %p", VAR_7, VAR_6));
  if (VAR_7->v_mount == VAR_6 && (VAR_7->v_iflag & VAR_2) == 0)
   break;
  VAR_8 = FUNC_3(VAR_7, VAR_4);
  FUNC_6(VAR_7);
  VAR_7 = VAR_8;
 }
 FUNC_4(&VAR_6->mnt_activevnodelist, *VAR_5, VAR_4);


 if (VAR_7 == ((void*)0)) {
  FUNC_10(&VAR_6->mnt_listmtx);
  FUNC_7(VAR_5, VAR_6);
  return (((void*)0));
 }
 FUNC_2(&VAR_6->mnt_activevnodelist, VAR_7, *VAR_5, VAR_4);
 FUNC_10(&VAR_6->mnt_listmtx);
 FUNC_0(VAR_7, "active iter");
 FUNC_1((VAR_7->v_iflag & VAR_1) != 0, ("Non-active vp %p", VAR_7));
 return (VAR_7);
}
