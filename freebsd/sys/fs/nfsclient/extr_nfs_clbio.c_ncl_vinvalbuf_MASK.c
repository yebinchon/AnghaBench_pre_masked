
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bo_object; } ;
struct vnode {TYPE_1__ v_bufobj; int v_mount; } ;
struct thread {int dummy; } ;
struct nfsnode {scalar_t__ n_directio_asyncwr; int n_flag; scalar_t__ n_attrstamp; } ;
struct nfsmount {int nm_flag; int nm_mountp; } ;


 int FUNC_0 (struct vnode*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_0 ;
 int FUNC_4 (struct nfsnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct nfsnode* FUNC_8 (struct vnode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct vnode*,int) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct nfsmount*,struct thread*) ;
 int FUNC_12 (struct vnode*,struct thread*) ;
 int FUNC_13 (struct vnode*,int,int,int) ;
 int FUNC_14 (int *,int ,int ,int ) ;

int
FUNC_15(struct vnode *VAR_8, int VAR_9, struct thread *VAR_10, int VAR_11)
{
 struct nfsnode *VAR_12 = FUNC_8(VAR_8);
 struct nfsmount *VAR_13 = FUNC_5(VAR_8->v_mount);
 int VAR_14 = 0, VAR_15, VAR_16;
 bool VAR_17;

 FUNC_0(VAR_8, "ncl_vinvalbuf");

 if ((VAR_13->nm_flag & VAR_0) == 0)
  VAR_11 = 0;
 if (FUNC_1(VAR_13->nm_mountp))
  VAR_11 = 1;
 if (VAR_11) {
  VAR_15 = VAR_3;
  VAR_16 = 2 * VAR_7;
 } else {
  VAR_15 = 0;
  VAR_16 = 0;
 }

 VAR_17 = FUNC_10(VAR_8);
 if (VAR_17)
  VAR_9 |= VAR_4;




 if ((VAR_9 & (VAR_5 | VAR_6)) == VAR_5 &&
      VAR_8->v_bufobj.bo_object != ((void*)0)) {
  FUNC_6(VAR_8->v_bufobj.bo_object);
  FUNC_14(VAR_8->v_bufobj.bo_object, 0, 0, VAR_2);
  FUNC_7(VAR_8->v_bufobj.bo_object);





  if (VAR_11 && (VAR_14 = FUNC_11(VAR_13, VAR_10)))
   goto out;
 }

 VAR_14 = FUNC_13(VAR_8, VAR_9, VAR_15, 0);
 while (VAR_14) {
  if (VAR_11 && (VAR_14 = FUNC_11(VAR_13, VAR_10)))
   goto out;
  VAR_14 = FUNC_13(VAR_8, VAR_9, 0, VAR_16);
 }
 if (FUNC_2(VAR_13)) {
  FUNC_12(VAR_8, VAR_10);




  FUNC_3(VAR_12);
  VAR_12->n_attrstamp = 0;
 } else
  FUNC_3(VAR_12);
 if (VAR_12->n_directio_asyncwr == 0)
  VAR_12->n_flag &= ~VAR_1;
 FUNC_4(VAR_12);
out:
 FUNC_9(VAR_8, VAR_17);
 return VAR_14;
}
