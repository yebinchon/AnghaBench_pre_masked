
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_link_args {struct componentname* a_cnp; struct vnode* a_tdvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_nlink; } ;
struct fuse_link_in {int oldnodeid; } ;
struct fuse_entry_out {int attr_valid_nsec; int attr_valid; int attr; } ;
struct fuse_dispatcher {struct fuse_entry_out* answ; } ;
struct componentname {int dummy; } ;
typedef int fli ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct vnode*) ;
 struct vattr* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct fuse_dispatcher*) ;
 int FUNC_3 (struct fuse_dispatcher*,int ) ;
 int FUNC_4 (struct fuse_dispatcher*) ;
 int FUNC_5 (struct vnode*,int *,int ,int ,int *) ;
 int FUNC_6 (struct fuse_entry_out*,int ) ;
 int FUNC_7 (scalar_t__,int ,struct componentname*,int ,struct fuse_link_in*,int,struct fuse_dispatcher*) ;
 scalar_t__ FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 scalar_t__ FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct vop_link_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_vp;
 struct vnode *VAR_7 = VAR_5->a_tdvp;
 struct componentname *VAR_8 = VAR_5->a_cnp;

 struct vattr *VAR_9 = FUNC_1(VAR_6);

 struct fuse_dispatcher VAR_10;
 struct fuse_entry_out *VAR_11;
 struct fuse_link_in VAR_12;

 int VAR_13;

 if (FUNC_8(VAR_6)) {
  return VAR_1;
 }
 if (FUNC_10(VAR_7) != FUNC_10(VAR_6)) {
  return VAR_2;
 }







 if (VAR_9 != ((void*)0) && VAR_9->va_nlink >= VAR_4)
  return VAR_0;
 VAR_12.oldnodeid = FUNC_0(VAR_6);

 FUNC_3(&VAR_10, 0);
 FUNC_7(FUNC_10(VAR_7), FUNC_0(VAR_7), VAR_8,
     VAR_3, &VAR_12, sizeof(VAR_12), &VAR_10);
 if ((VAR_13 = FUNC_4(&VAR_10))) {
  goto out;
 }
 VAR_11 = VAR_10.answ;

 VAR_13 = FUNC_6(VAR_11, FUNC_11(VAR_6));
 if (!VAR_13) {




  FUNC_9(VAR_7);
  FUNC_5(VAR_6, &VAR_11->attr, VAR_11->attr_valid,
   VAR_11->attr_valid_nsec, ((void*)0));
 }
out:
 FUNC_2(&VAR_10);
 return VAR_13;
}
