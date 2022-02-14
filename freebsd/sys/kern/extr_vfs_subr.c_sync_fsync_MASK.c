
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fsync_args {scalar_t__ a_waitfor; struct vnode* a_vp; } ;
struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; struct mount* v_mount; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mount*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct mount*,int ) ;
 int FUNC_6 (struct mount*,int ) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (struct mount*) ;
 scalar_t__ FUNC_9 (int *,struct mount**,int ) ;
 int FUNC_10 (struct bufobj*,int ) ;
 int FUNC_11 (struct mount*) ;

__attribute__((used)) static int
FUNC_12(struct vop_fsync_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct mount *VAR_8 = VAR_7->v_mount;
 int VAR_9, VAR_10;
 struct bufobj *VAR_11;




 if (VAR_6->a_waitfor != VAR_1)
  return (0);




 VAR_11 = &VAR_7->v_bufobj;
 FUNC_0(VAR_11);
 FUNC_10(VAR_11, VAR_5);
 FUNC_1(VAR_11);





 if (FUNC_5(VAR_8, VAR_0) != 0)
  return (0);
 if (FUNC_9(((void*)0), &VAR_8, VAR_4) != 0) {
  FUNC_7(VAR_8);
  return (0);
 }
 VAR_10 = FUNC_4(VAR_3);




 FUNC_11(VAR_8);
 FUNC_6(VAR_8, VAR_2);
 VAR_9 = FUNC_2(VAR_8, VAR_1);
 FUNC_3(VAR_10);
 FUNC_8(VAR_8);
 FUNC_7(VAR_8);
 return (VAR_9);
}
