
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_access_args {int a_accmode; struct ucred* a_cred; int a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct fuse_data {int dataflags; int daemoncred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fuse_data* FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*,int,int ,struct ucred*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 scalar_t__ FUNC_3 (int ,struct ucred*) ;
 scalar_t__ FUNC_4 (struct ucred*,int ) ;
 scalar_t__ FUNC_5 (struct vnode*) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static int
FUNC_8(struct vop_access_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_vp;
 int VAR_6 = VAR_4->a_accmode;
 struct ucred *VAR_7 = VAR_4->a_cred;

 struct fuse_data *VAR_8 = FUNC_0(FUNC_7(VAR_5));

 int VAR_9;

 if (FUNC_2(VAR_5)) {
  if (FUNC_6(VAR_5)) {
   return 0;
  }
  return VAR_1;
 }
 if (!(VAR_8->dataflags & VAR_2)) {
  if (FUNC_6(VAR_5)) {
   if (FUNC_4(VAR_7, VAR_3) ||
       (FUNC_3(VAR_8->daemoncred, VAR_7) == 0)) {
    return 0;
   }
  }
  return VAR_0;
 }
 if (FUNC_5(VAR_5)) {
  return 0;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_4->a_td, VAR_4->a_cred);
 return VAR_9;
}
