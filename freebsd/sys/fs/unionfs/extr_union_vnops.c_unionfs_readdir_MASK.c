
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vop_readdir_args {int* a_eofflag; int* a_ncookies; int ** a_cookies; int a_cred; struct vnode* a_vp; struct uio* a_uio; } ;
struct vnode {scalar_t__ v_type; } ;
struct vattr {int va_flags; } ;
struct unionfs_node_status {scalar_t__ uns_upper_opencnt; scalar_t__ uns_lower_opencnt; int uns_readdir_status; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct uio {int uio_offset; int uio_resid; struct thread* uio_td; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vnode* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct vnode*,struct vattr*,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,struct uio*,int ,int*,int*,int **) ;
 struct unionfs_node* FUNC_6 (struct vnode*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct unionfs_node*,struct thread*,struct unionfs_node_status**) ;
 int FUNC_11 (struct unionfs_node*,struct unionfs_node_status*) ;
 scalar_t__ FUNC_12 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_13(struct vop_readdir_args *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 struct unionfs_node *VAR_17;
 struct unionfs_node_status *VAR_18;
 struct uio *VAR_19;
 struct vnode *VAR_20;
 struct vnode *VAR_21;
 struct vnode *VAR_22;
 struct thread *VAR_23;
 struct vattr VAR_24;

 int VAR_25;
 u_long *VAR_26;

 FUNC_2("unionfs_readdir: enter\n");

 FUNC_1(VAR_12->a_vp);

 VAR_13 = 0;
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_16 = 0;
 VAR_19 = VAR_12->a_uio;
 VAR_21 = VAR_9;
 VAR_22 = VAR_9;
 VAR_23 = VAR_19->uio_td;
 VAR_25 = 0;
 VAR_26 = ((void*)0);

 VAR_20 = VAR_12->a_vp;
 if (VAR_20->v_type != VAR_11)
  return (VAR_2);


 if (FUNC_4(VAR_20) != VAR_4) {
  if (FUNC_12(VAR_20, VAR_6) != 0)
   FUNC_12(VAR_20, VAR_4 | VAR_5);
  VAR_15 = 1;
 }
 VAR_17 = FUNC_6(VAR_20);
 if (VAR_17 == ((void*)0))
  VAR_13 = VAR_1;
 else {
  VAR_21 = VAR_17->un_uppervp;
  VAR_22 = VAR_17->un_lowervp;
  FUNC_10(VAR_17, VAR_23, &VAR_18);
  if ((VAR_21 != VAR_9 && VAR_18->uns_upper_opencnt <= 0) ||
   (VAR_22 != VAR_9 && VAR_18->uns_lower_opencnt <= 0)) {
   FUNC_11(VAR_17, VAR_18);
   VAR_13 = VAR_1;
  }
 }
 if (VAR_15)
  FUNC_12(VAR_20, VAR_3 | VAR_5);
 if (VAR_13 != 0)
  goto unionfs_readdir_exit;


 if (VAR_21 != VAR_9 && VAR_22 != VAR_9) {
  if ((VAR_13 = FUNC_3(VAR_21, &VAR_24, VAR_12->a_cred)) != 0)
   goto unionfs_readdir_exit;
  if (VAR_24.va_flags & VAR_10)
   VAR_22 = VAR_9;
 }


 if (VAR_21 != VAR_9 && VAR_22 == VAR_9) {
  VAR_13 = FUNC_5(VAR_21, VAR_19, VAR_12->a_cred, VAR_12->a_eofflag,
      VAR_12->a_ncookies, VAR_12->a_cookies);
  VAR_18->uns_readdir_status = 0;

  goto unionfs_readdir_exit;
 }


 if (VAR_21 == VAR_9 && VAR_22 != VAR_9) {
  VAR_13 = FUNC_5(VAR_22, VAR_19, VAR_12->a_cred, VAR_12->a_eofflag,
      VAR_12->a_ncookies, VAR_12->a_cookies);
  VAR_18->uns_readdir_status = 2;

  goto unionfs_readdir_exit;
 }




 FUNC_0(VAR_21 != VAR_9, ("unionfs_readdir: null upper vp"));
 FUNC_0(VAR_22 != VAR_9, ("unionfs_readdir: null lower vp"));
 if (VAR_19->uio_offset == 0)
  VAR_18->uns_readdir_status = 0;

 if (VAR_18->uns_readdir_status == 0) {

  VAR_13 = FUNC_5(VAR_21, VAR_19, VAR_12->a_cred, &VAR_14,
        VAR_12->a_ncookies, VAR_12->a_cookies);

  if (VAR_13 != 0 || VAR_14 == 0)
   goto unionfs_readdir_exit;
  VAR_18->uns_readdir_status = 1;







  if (VAR_19->uio_resid <= (VAR_19->uio_resid & (VAR_0 -1)))
   goto unionfs_readdir_exit;





  if (VAR_12->a_ncookies != ((void*)0)) {
   VAR_25 = *(VAR_12->a_ncookies);
   *(VAR_12->a_ncookies) = 0;
  }
  if (VAR_12->a_cookies != ((void*)0)) {
   VAR_26 = *(VAR_12->a_cookies);
   *(VAR_12->a_cookies) = ((void*)0);
  }
 }


 if (VAR_18->uns_readdir_status == 1) {
  VAR_18->uns_readdir_status = 2;




  VAR_16 = VAR_19->uio_offset;
  VAR_19->uio_offset = 0;
 }

 if (VAR_22 == VAR_9) {
  VAR_13 = VAR_1;
  goto unionfs_readdir_exit;
 }

 VAR_13 = FUNC_5(VAR_22, VAR_19, VAR_12->a_cred, VAR_12->a_eofflag,
       VAR_12->a_ncookies, VAR_12->a_cookies);
 if (VAR_19->uio_offset == 0)
  VAR_19->uio_offset = VAR_16;

 if (VAR_26 != ((void*)0)) {

  int VAR_27;
  u_long *VAR_28, *VAR_29;

  VAR_27 = *(VAR_12->a_ncookies) + VAR_25;
  VAR_28 = (u_long *) FUNC_8(VAR_27 * sizeof(u_long),
      VAR_7, VAR_8);
  VAR_29 = VAR_28;

  FUNC_9(VAR_29, VAR_26, VAR_25 * sizeof(u_long));
  VAR_29 += VAR_25;
  FUNC_9(VAR_29, *(VAR_12->a_cookies), *(VAR_12->a_ncookies) * sizeof(u_long));
  FUNC_7(VAR_26, VAR_7);
  FUNC_7(*(VAR_12->a_cookies), VAR_7);
  *(VAR_12->a_ncookies) = VAR_27;
  *(VAR_12->a_cookies) = VAR_28;
 }

unionfs_readdir_exit:
 if (VAR_13 != 0 && VAR_12->a_eofflag != ((void*)0))
  *(VAR_12->a_eofflag) = 1;

 FUNC_2("unionfs_readdir: leave (%d)\n", VAR_13);

 return (VAR_13);
}
