
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_vflag; } ;
struct nfsnode {int dummy; } ;
struct nfsmount {int nm_mtx; int nm_fhsize; int nm_fh; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {int td_ucred; } ;


 int FUNC_0 (struct nfsmount*) ;
 scalar_t__ FUNC_1 (struct nfsmount*) ;
 struct vnode* FUNC_2 (struct nfsnode*) ;
 scalar_t__ VAR_0 ;
 struct nfsmount* FUNC_3 (struct mount*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfsmount*,struct vnode*,int ,TYPE_1__*) ;
 int FUNC_7 (struct mount*,int ,int ,struct nfsnode**,int) ;

__attribute__((used)) static int
FUNC_8(struct mount *VAR_4, int VAR_5, struct vnode **VAR_6)
{
 struct vnode *VAR_7;
 struct nfsmount *VAR_8;
 struct nfsnode *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_4);
 VAR_10 = FUNC_7(VAR_4, VAR_8->nm_fh, VAR_8->nm_fhsize, &VAR_9, VAR_5);
 if (VAR_10)
  return VAR_10;
 VAR_7 = FUNC_2(VAR_9);



 FUNC_4(&VAR_8->nm_mtx);
 if (FUNC_1(VAR_8) && !FUNC_0(VAR_8)) {
  FUNC_5(&VAR_8->nm_mtx);
  FUNC_6(VAR_8, VAR_7, VAR_3->td_ucred, VAR_3);
 } else
  FUNC_5(&VAR_8->nm_mtx);
 if (VAR_7->v_type == VAR_1)
     VAR_7->v_type = VAR_0;
 VAR_7->v_vflag |= VAR_2;
 *VAR_6 = VAR_7;
 return (0);
}
