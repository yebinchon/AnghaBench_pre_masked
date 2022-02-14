
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_access_args {int a_accmode; int a_cred; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct msdosfsmount {int pm_dirmask; int pm_mask; int pm_gid; int pm_uid; } ;
struct denode {struct msdosfsmount* de_pmp; } ;
typedef int mode_t ;
typedef int accmode_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct denode* FUNC_0 (struct vnode*) ;
 int VAR_5 ;
 int FUNC_1 (int,int,int ,int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_access_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct denode *VAR_8 = FUNC_0(VAR_6->a_vp);
 struct msdosfsmount *VAR_9 = VAR_8->de_pmp;
 mode_t VAR_10;
 accmode_t VAR_11 = VAR_6->a_accmode;

 VAR_10 = VAR_4|VAR_2|VAR_3;
 VAR_10 &= (VAR_7->v_type == 129 ? VAR_9->pm_dirmask : VAR_9->pm_mask);





 if (VAR_11 & VAR_5) {
  switch (VAR_7->v_type) {
  case 128:
  case 129:
   if (VAR_7->v_mount->mnt_flag & VAR_1)
    return (VAR_0);
   break;
  default:
   break;
  }
 }

 return (FUNC_1(VAR_7->v_type, VAR_10, VAR_9->pm_uid, VAR_9->pm_gid,
     VAR_6->a_accmode, VAR_6->a_cred, ((void*)0)));
}
