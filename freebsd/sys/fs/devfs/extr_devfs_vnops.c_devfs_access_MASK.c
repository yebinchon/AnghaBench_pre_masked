
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_access_args {TYPE_1__* a_td; int a_cred; int a_accmode; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct devfs_dirent* v_data; } ;
struct proc {int p_flag; TYPE_2__* p_session; } ;
struct devfs_dirent {scalar_t__ de_cdp; int de_gid; int de_uid; int de_mode; struct devfs_dirent* de_dir; } ;
struct TYPE_4__ {scalar_t__ s_ttydp; } ;
struct TYPE_3__ {struct proc* td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct vop_access_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct devfs_dirent *VAR_5;
 struct proc *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->v_data;
 if (VAR_4->v_type == VAR_2)
  VAR_5 = VAR_5->de_dir;

 VAR_7 = FUNC_2(VAR_4->v_type, VAR_5->de_mode, VAR_5->de_uid, VAR_5->de_gid,
     VAR_3->a_accmode, VAR_3->a_cred, ((void*)0));
 if (VAR_7 == 0)
  return (0);
 if (VAR_7 != VAR_0)
  return (VAR_7);
 VAR_6 = VAR_3->a_td->td_proc;

 FUNC_0(VAR_6);
 if (!(VAR_6->p_flag & VAR_1)) {
  FUNC_1(VAR_6);
  return (VAR_7);
 }
 if (VAR_6->p_session->s_ttydp == VAR_5->de_cdp)
  VAR_7 = 0;
 FUNC_1(VAR_6);
 return (VAR_7);
}
