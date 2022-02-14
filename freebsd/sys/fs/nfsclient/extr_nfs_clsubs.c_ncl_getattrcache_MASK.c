
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_quad_t ;
struct vnode {int v_mount; } ;
struct vattr {scalar_t__ va_type; scalar_t__ va_size; int va_mtime; int va_atime; } ;
struct TYPE_5__ {int tv_sec; } ;
struct TYPE_4__ {struct vattr na_vattr; } ;
struct nfsnode {int n_flag; int n_attrstamp; scalar_t__ n_size; int n_mtim; int n_atim; TYPE_2__ n_mtime; TYPE_1__ n_vattr; } ;
struct nfsmount {int nm_acdirmin; int nm_acdirmax; int nm_acregmin; int nm_acregmax; } ;
typedef int caddr_t ;
struct TYPE_6__ {int attrcache_hits; int attrcache_misses; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,struct vattr*) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct nfsmount* FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct vnode*,int *) ;
 int VAR_7 ;
 int FUNC_8 (struct vnode*) ;
 TYPE_3__ VAR_8 ;
 int FUNC_9 (char*,int,...) ;
 int VAR_9 ;
 int FUNC_10 (struct vnode*,int ) ;

int
FUNC_11(struct vnode *VAR_10, struct vattr *VAR_11)
{
 struct nfsnode *VAR_12;
 struct vattr *VAR_13;
 struct nfsmount *VAR_14;
 int VAR_15, VAR_16;
 u_quad_t VAR_17;
 bool VAR_18;

 VAR_12 = FUNC_5(VAR_10);
 VAR_13 = &VAR_12->n_vattr.na_vattr;
 VAR_14 = FUNC_4(VAR_10->v_mount);
 VAR_16 = FUNC_8(VAR_10);
 FUNC_2(VAR_12);

 VAR_15 = (VAR_9 - VAR_12->n_mtime.tv_sec) / 10;






 if (VAR_13->va_type == VAR_5) {
  if ((VAR_12->n_flag & VAR_3) || VAR_15 < VAR_14->nm_acdirmin)
   VAR_15 = VAR_14->nm_acdirmin;
  else if (VAR_15 > VAR_14->nm_acdirmax)
   VAR_15 = VAR_14->nm_acdirmax;
 } else {
  if ((VAR_12->n_flag & VAR_3) || VAR_15 < VAR_14->nm_acregmin)
   VAR_15 = VAR_14->nm_acregmin;
  else if (VAR_15 > VAR_14->nm_acregmax)
   VAR_15 = VAR_14->nm_acregmax;
 }
 if ((VAR_9 - VAR_12->n_attrstamp) >= VAR_15 &&
     (VAR_16 != 0 || VAR_12->n_attrstamp == 0)) {
  VAR_8++;
  FUNC_3(VAR_12);
  FUNC_1(VAR_10);
  return( VAR_0);
 }
 VAR_8++;
 VAR_18 = 0;
 if (VAR_13->va_size != VAR_12->n_size) {
  if (VAR_13->va_type == VAR_6) {
   if (VAR_12->n_flag & VAR_3) {
    if (VAR_13->va_size < VAR_12->n_size)
     VAR_13->va_size = VAR_12->n_size;
    else
     VAR_12->n_size = VAR_13->va_size;
   } else {
    VAR_12->n_size = VAR_13->va_size;
   }
   VAR_18 = FUNC_7(VAR_10, &VAR_17);
  } else {
   VAR_12->n_size = VAR_13->va_size;
  }
 }
 FUNC_6((caddr_t)VAR_13, (caddr_t)VAR_11, sizeof(struct vattr));
 if (VAR_12->n_flag & VAR_2) {
  if (VAR_12->n_flag & VAR_1)
   VAR_11->va_atime = VAR_12->n_atim;
  if (VAR_12->n_flag & VAR_4)
   VAR_11->va_mtime = VAR_12->n_mtim;
 }
 FUNC_3(VAR_12);
 if (VAR_18)
  FUNC_10(VAR_10, VAR_17);
 FUNC_0(VAR_10, VAR_13);
 return (0);
}
