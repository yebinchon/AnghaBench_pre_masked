
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_entry_out {int attr_valid_nsec; int attr_valid; int attr; int nodeid; } ;
struct fuse_dispatcher {struct fuse_entry_out* answ; } ;
struct componentname {int cn_cred; int cn_thread; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct vnode*,int *,int ,int ,int *) ;
 int FUNC_2 (struct fuse_entry_out*,int) ;
 int FUNC_3 (struct mount*,int ,int ,int ,int) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct mount*,struct fuse_entry_out*,int ,struct vnode*,struct vnode**,struct componentname*,int) ;
 struct mount* FUNC_6 (struct vnode*) ;

int
FUNC_7(struct vnode *VAR_0,
    struct vnode **VAR_1,
    struct componentname *VAR_2,
    enum vtype VAR_3,
    struct fuse_dispatcher *VAR_4)
{
 int VAR_5 = 0;
 struct fuse_entry_out *VAR_6;
 struct mount *VAR_7 = FUNC_6(VAR_0);

 if ((VAR_5 = FUNC_0(VAR_4))) {
  return VAR_5;
 }
 VAR_6 = VAR_4->answ;

 if ((VAR_5 = FUNC_2(VAR_6, VAR_3))) {
  return VAR_5;
 }
 VAR_5 = FUNC_5(VAR_7, VAR_6, VAR_6->nodeid, VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_7, VAR_2->cn_thread, VAR_2->cn_cred,
      VAR_6->nodeid, 1);
  return VAR_5;
 }





 FUNC_4(VAR_0);

 FUNC_1(*VAR_1, &VAR_6->attr, VAR_6->attr_valid,
  VAR_6->attr_valid_nsec, ((void*)0));

 return VAR_5;
}
