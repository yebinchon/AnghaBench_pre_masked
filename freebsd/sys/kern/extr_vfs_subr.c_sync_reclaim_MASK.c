
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_reclaim_args {struct vnode* a_vp; } ;
struct bufobj {int bo_flag; } ;
struct vnode {TYPE_1__* v_mount; struct bufobj v_bufobj; } ;
struct TYPE_2__ {struct vnode* mnt_syncer; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct bufobj*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct vop_reclaim_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct bufobj *VAR_7;

 VAR_7 = &VAR_6->v_bufobj;
 FUNC_0(VAR_7);
 FUNC_3(&VAR_2);
 if (VAR_6->v_mount->mnt_syncer == VAR_6)
  VAR_6->v_mount->mnt_syncer = ((void*)0);
 if (VAR_7->bo_flag & VAR_0) {
  FUNC_2(VAR_7, VAR_1);
  VAR_4--;
  VAR_3--;
  VAR_7->bo_flag &= ~VAR_0;
 }
 FUNC_4(&VAR_2);
 FUNC_1(VAR_7);

 return (0);
}
