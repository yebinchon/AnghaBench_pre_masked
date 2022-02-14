
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {int a_td; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int * v_data; } ;
struct nfsnode {int n_excl; int n_mtx; struct nfsdmap* n_v4; struct nfsdmap* n_fhp; int * n_writecred; int n_cookies; } ;
struct nfsdmap {int dummy; } ;


 struct nfsdmap* FUNC_0 (int *) ;
 struct nfsdmap* FUNC_1 (struct nfsdmap*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfsdmap*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vnode*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct vop_reclaim_args*) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*,int,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct vnode*) ;

int
FUNC_16(struct vop_reclaim_args *VAR_7)
{
 struct vnode *VAR_8 = VAR_7->a_vp;
 struct nfsnode *VAR_9 = FUNC_5(VAR_8);
 struct nfsdmap *VAR_10, *VAR_11;





 if (&FUNC_11 != ((void*)0))
  FUNC_11(VAR_7);

 FUNC_2(VAR_9);
 FUNC_10(VAR_8, VAR_7->a_td);
 FUNC_3(VAR_9);

 if (FUNC_4(VAR_8) && VAR_8->v_type == VAR_4)






  (void) FUNC_13(VAR_8, 1, VAR_7->a_td);

 FUNC_15(VAR_8);





 if (VAR_8->v_type == VAR_4)
  FUNC_12(VAR_8);






 if (VAR_8->v_type == VAR_3) {
  VAR_10 = FUNC_0(&VAR_9->n_cookies);
  while (VAR_10) {
   VAR_11 = VAR_10;
   VAR_10 = FUNC_1(VAR_10, VAR_5);
   FUNC_7(VAR_11, VAR_0);
  }
 }
 if (VAR_9->n_writecred != ((void*)0))
  FUNC_6(VAR_9->n_writecred);
 FUNC_7(VAR_9->n_fhp, VAR_1);
 if (VAR_9->n_v4 != ((void*)0))
  FUNC_7(VAR_9->n_v4, VAR_2);
 FUNC_9(&VAR_9->n_mtx);
 FUNC_8(&VAR_9->n_excl);
 FUNC_14(VAR_6, VAR_8->v_data);
 VAR_8->v_data = ((void*)0);
 return (0);
}
