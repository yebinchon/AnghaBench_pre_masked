
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vop_inactive_args {struct vnode* a_vp; } ;
struct vnode {TYPE_1__* v_mount; } ;
struct denode {int* de_Name; scalar_t__ de_refcnt; int de_flag; } ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct denode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct denode*,int ,int ,int ) ;
 int FUNC_2 (struct denode*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(struct vop_inactive_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct denode *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = 0;
 if (VAR_7->de_Name[0] == VAR_3 || VAR_7->de_Name[0] == VAR_4)
  goto out;
 if (VAR_7->de_refcnt <= 0 && (VAR_6->v_mount->mnt_flag & VAR_1) == 0) {
  VAR_8 = FUNC_1(VAR_7, (u_long) 0, 0, VAR_2);
  VAR_7->de_flag |= VAR_0;
  VAR_7->de_Name[0] = VAR_3;
 }
 FUNC_2(VAR_7, 0);

out:
 if (VAR_7->de_Name[0] == VAR_3 || VAR_7->de_Name[0] == VAR_4)
  FUNC_4(VAR_6);
 return (VAR_8);
}
