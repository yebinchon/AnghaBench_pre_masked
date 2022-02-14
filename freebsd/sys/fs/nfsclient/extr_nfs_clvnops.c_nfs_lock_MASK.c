
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_quad_t ;
struct vop_lock1_args {int a_flags; struct vnode* a_vp; } ;
struct vnode {int * v_op; TYPE_1__* v_vnlock; } ;
struct nfsnode {int n_flag; int n_size; } ;
struct TYPE_2__ {scalar_t__ lk_recurse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_12 ;
 int FUNC_2 (int *,struct vop_lock1_args*) ;
 int FUNC_3 (struct vnode*,int ) ;
 struct nfsnode* FUNC_4 (struct vnode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_6(struct vop_lock1_args *VAR_15)
{
 struct vnode *VAR_16;
 struct nfsnode *VAR_17;
 u_quad_t VAR_18;
 int VAR_19, VAR_20;
 bool VAR_21;

 VAR_16 = VAR_15->a_vp;
 VAR_20 = VAR_15->a_flags & VAR_10;
 VAR_19 = FUNC_2(&VAR_13, VAR_15);
 if (VAR_19 != 0 || VAR_16->v_op != &VAR_14)
  return (VAR_19);
 VAR_17 = FUNC_4(VAR_16);
 FUNC_0(VAR_17);
 if ((VAR_17->n_flag & VAR_12) == 0 || (VAR_20 != VAR_8 &&
     VAR_20 != VAR_4 && VAR_20 != VAR_11 &&
     VAR_20 != VAR_9)) {
  FUNC_1(VAR_17);
  return (0);
 }
 VAR_21 = (VAR_15->a_flags & VAR_3) == VAR_7 &&
     (VAR_15->a_flags & VAR_5) == VAR_1 &&
     (VAR_20 == VAR_8 || VAR_20 == VAR_4);
 if (VAR_21 && VAR_16->v_vnlock->lk_recurse == 0) {





  FUNC_1(VAR_17);
  FUNC_3(VAR_16, 0);
  return (VAR_0);
 }
 if ((VAR_15->a_flags & VAR_7) != 0 ||
     (VAR_20 == VAR_8 && VAR_16->v_vnlock->lk_recurse > 0)) {
  FUNC_1(VAR_17);
  return (0);
 }
 if (VAR_20 == VAR_8) {
  FUNC_1(VAR_17);
  FUNC_3(VAR_16, 0);
  VAR_15->a_flags &= ~(VAR_10 | VAR_6);
  VAR_15->a_flags |= VAR_4;
  VAR_19 = FUNC_2(&VAR_13, VAR_15);
  if (VAR_19 != 0 || VAR_16->v_op != &VAR_14)
   return (VAR_19);
  FUNC_0(VAR_17);
  if ((VAR_17->n_flag & VAR_12) == 0) {
   FUNC_1(VAR_17);
   goto downgrade;
  }
 }
 VAR_17->n_flag &= ~VAR_12;
 VAR_18 = VAR_17->n_size;
 FUNC_1(VAR_17);
 FUNC_5(VAR_16, VAR_18);
downgrade:
 if (VAR_20 == VAR_8) {
  VAR_15->a_flags &= ~(VAR_10 | VAR_6);
  VAR_15->a_flags |= VAR_2;
  (void)FUNC_2(&VAR_13, VAR_15);
 }
 return (0);
}
