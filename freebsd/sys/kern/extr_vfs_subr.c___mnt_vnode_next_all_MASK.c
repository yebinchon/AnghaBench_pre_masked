
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int v_iflag; struct mount* v_mount; } ;
struct mount {int mnt_nvnodelist; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct vnode*,struct vnode*,int ) ;
 struct vnode* FUNC_5 (struct vnode*,int ) ;
 int FUNC_6 (int *,struct vnode*,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (struct vnode**,struct mount*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 () ;
 int VAR_4 ;

struct vnode *
FUNC_13(struct vnode **VAR_5, struct mount *VAR_6)
{
 struct vnode *VAR_7;

 if (FUNC_12())
  FUNC_10(VAR_1);
 FUNC_1(VAR_6);
 FUNC_0((*VAR_5)->v_mount == VAR_6, ("marker vnode mount list mismatch"));
 for (VAR_7 = FUNC_5(*VAR_5, VAR_4); VAR_7 != ((void*)0);
     VAR_7 = FUNC_5(VAR_7, VAR_4)) {

  if (VAR_7->v_type == VAR_3 || (VAR_7->v_iflag & VAR_2) != 0)
   continue;
  FUNC_7(VAR_7);
  if ((VAR_7->v_iflag & VAR_2) != 0) {
   FUNC_8(VAR_7);
   continue;
  }
  break;
 }
 if (VAR_7 == ((void*)0)) {
  FUNC_9(VAR_5, VAR_6);

  FUNC_11(FUNC_3(VAR_6), VAR_0);
  return (((void*)0));
 }
 FUNC_6(&VAR_6->mnt_nvnodelist, *VAR_5, VAR_4);
 FUNC_4(&VAR_6->mnt_nvnodelist, VAR_7, *VAR_5, VAR_4);
 FUNC_2(VAR_6);
 return (VAR_7);
}
