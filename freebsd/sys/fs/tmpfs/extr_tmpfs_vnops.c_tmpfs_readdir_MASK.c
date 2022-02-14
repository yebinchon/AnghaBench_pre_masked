
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vop_readdir_args {int* a_eofflag; int* a_ncookies; int ** a_cookies; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct tmpfs_node {int tn_size; } ;
struct tmpfs_mount {int dummy; } ;
struct tmpfs_dirent {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct tmpfs_mount* FUNC_0 (int ) ;
 struct tmpfs_node* FUNC_1 (struct vnode*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct tmpfs_mount*,struct tmpfs_node*,struct uio*,int,int *,int*) ;

__attribute__((used)) static int
FUNC_6(struct vop_readdir_args *VAR_7)
{
 struct vnode *VAR_8;
 struct uio *VAR_9;
 struct tmpfs_mount *VAR_10;
 struct tmpfs_node *VAR_11;
 u_long **VAR_12;
 int *VAR_13, *VAR_14;
 ssize_t VAR_15;
 int VAR_16, VAR_17;

 VAR_8 = VAR_7->a_vp;
 VAR_9 = VAR_7->a_uio;
 VAR_13 = VAR_7->a_eofflag;
 VAR_12 = VAR_7->a_cookies;
 VAR_14 = VAR_7->a_ncookies;


 if (VAR_8->v_type != VAR_6)
  return VAR_2;

 VAR_17 = 0;
 VAR_11 = FUNC_1(VAR_8);
 VAR_10 = FUNC_0(VAR_8->v_mount);

 VAR_15 = VAR_9->uio_resid;


 if (VAR_12 != ((void*)0) && VAR_14 != ((void*)0)) {
  VAR_17 = FUNC_3(VAR_11->tn_size,
      sizeof(struct tmpfs_dirent)) + 2;
  *VAR_12 = FUNC_4(VAR_17 * sizeof(**VAR_12), VAR_3,
      VAR_4);
  *VAR_14 = 0;
 }

 if (VAR_12 == ((void*)0))
  VAR_16 = FUNC_5(VAR_10, VAR_11, VAR_9, 0, ((void*)0), ((void*)0));
 else
  VAR_16 = FUNC_5(VAR_10, VAR_11, VAR_9, VAR_17, *VAR_12,
      VAR_14);


 if (VAR_16 == VAR_1)
  VAR_16 = (VAR_9->uio_resid != VAR_15) ? 0 : VAR_0;

 if (VAR_16 != 0 && VAR_12 != ((void*)0) && VAR_14 != ((void*)0)) {
  FUNC_2(*VAR_12, VAR_3);
  *VAR_12 = ((void*)0);
  *VAR_14 = 0;
 }

 if (VAR_13 != ((void*)0))
  *VAR_13 =
      (VAR_16 == 0 && VAR_9->uio_offset == VAR_5);

 return VAR_16;
}
