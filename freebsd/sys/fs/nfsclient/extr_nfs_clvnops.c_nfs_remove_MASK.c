
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_remove_args {struct componentname* a_cnp; struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct vattr {int va_nlink; } ;
struct nfsnode {scalar_t__ n_attrstamp; scalar_t__ n_sillyrename; } ;
struct componentname {int cn_flags; int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (struct vnode*,struct vattr*,int ) ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,int ,int ,int) ;
 int FUNC_8 (struct vnode*,struct vnode*,int ,int ,int ,int ) ;
 int FUNC_9 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_10 (struct vnode*) ;

__attribute__((used)) static int
FUNC_11(struct vop_remove_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct vnode *VAR_8 = VAR_6->a_dvp;
 struct componentname *VAR_9 = VAR_6->a_cnp;
 struct nfsnode *VAR_10 = FUNC_5(VAR_7);
 int VAR_11 = 0;
 struct vattr VAR_12;

 FUNC_0((VAR_9->cn_flags & VAR_4) != 0, ("nfs_remove: no name"));
 FUNC_0(FUNC_10(VAR_7) > 0, ("nfs_remove: bad v_usecount"));
 if (VAR_7->v_type == VAR_5)
  VAR_11 = VAR_3;
 else if (FUNC_10(VAR_7) == 1 || (VAR_10->n_sillyrename &&
     FUNC_4(VAR_7, &VAR_12, VAR_9->cn_cred) == 0 &&
     VAR_12.va_nlink > 1)) {







  FUNC_6(VAR_7);




  VAR_11 = FUNC_7(VAR_7, 0, VAR_9->cn_thread, 1);
  if (VAR_11 != VAR_0 && VAR_11 != VAR_1)

   VAR_11 = FUNC_8(VAR_8, VAR_7, VAR_9->cn_nameptr,
       VAR_9->cn_namelen, VAR_9->cn_cred, VAR_9->cn_thread);






  if (VAR_11 == VAR_2)
   VAR_11 = 0;
 } else if (!VAR_10->n_sillyrename)
  VAR_11 = FUNC_9(VAR_8, VAR_7, VAR_9);
 FUNC_2(VAR_10);
 VAR_10->n_attrstamp = 0;
 FUNC_3(VAR_10);
 FUNC_1(VAR_7);
 return (VAR_11);
}
