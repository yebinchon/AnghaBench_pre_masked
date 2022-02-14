
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* vn_get_ino_t ) (struct mount*,void*,int,struct vnode**) ;
struct vnode {int v_iflag; struct mount* v_mount; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct mount*,int ) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (struct vnode*,int) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;

int
FUNC_11(struct vnode *VAR_6, vn_get_ino_t VAR_7, void *VAR_8,
    int VAR_9, struct vnode **VAR_10)
{
 struct mount *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_6, "vn_vget_ino_get");
 VAR_11 = VAR_6->v_mount;
 VAR_12 = FUNC_2(VAR_6);
 FUNC_1(VAR_12 == VAR_1 || VAR_12 == VAR_3,
     ("vn_vget_ino: vp not locked"));
 VAR_13 = FUNC_4(VAR_11, VAR_4);
 if (VAR_13 != 0) {
  FUNC_5(VAR_11);
  FUNC_3(VAR_6, 0);
  VAR_13 = FUNC_4(VAR_11, 0);
  FUNC_8(VAR_6, VAR_12 | VAR_2);
  FUNC_6(VAR_11);
  if (VAR_13 != 0)
   return (VAR_0);
  if (VAR_6->v_iflag & VAR_5) {
   FUNC_7(VAR_11);
   return (VAR_0);
  }
 }
 FUNC_3(VAR_6, 0);
 VAR_13 = VAR_7(VAR_11, VAR_8, VAR_9, VAR_10);
 FUNC_7(VAR_11);
 if (VAR_13 != 0 || *VAR_10 != VAR_6)
  FUNC_8(VAR_6, VAR_12 | VAR_2);
 if (VAR_6->v_iflag & VAR_5) {
  if (VAR_13 == 0) {
   if (*VAR_10 == VAR_6)
    FUNC_10(VAR_6);
   else
    FUNC_9(*VAR_10);
  }
  VAR_13 = VAR_0;
 }
 return (VAR_13);
}
