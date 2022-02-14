
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_readdir_args {int* a_eofflag; int a_cred; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct vattr {scalar_t__ va_filerev; int va_mtime; } ;
struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct nfsnode {scalar_t__ n_direofoffset; int n_flag; scalar_t__ n_change; int n_mtime; } ;
typedef int ssize_t ;
struct TYPE_2__ {int direofcache_misses; int direofcache_hits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (struct vnode*,struct vattr*,int ) ;
 struct nfsnode* FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,struct uio*,int ,int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct vop_readdir_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct nfsnode *VAR_8 = FUNC_6(VAR_7);
 struct uio *VAR_9 = VAR_6->a_uio;
 ssize_t VAR_10, VAR_11;
 int VAR_12 = 0;
 struct vattr VAR_13;

 if (VAR_6->a_eofflag != ((void*)0))
  *VAR_6->a_eofflag = 0;
 if (VAR_7->v_type != VAR_4)
  return(VAR_2);




 if (VAR_8->n_direofoffset > 0 && VAR_9->uio_offset >= VAR_8->n_direofoffset &&
     (VAR_8->n_flag & VAR_3) == 0) {
  if (FUNC_5(VAR_7, &VAR_13, VAR_6->a_cred) == 0) {
   FUNC_1(VAR_8);
   if ((FUNC_3(VAR_7) && VAR_8->n_change == VAR_13.va_filerev) ||
       !FUNC_4(&VAR_8->n_mtime, &VAR_13.va_mtime)) {
    FUNC_2(VAR_8);
    FUNC_0(VAR_5);
    if (VAR_6->a_eofflag != ((void*)0))
     *VAR_6->a_eofflag = 1;
    return (0);
   } else
    FUNC_2(VAR_8);
  }
 }







 VAR_11 = VAR_9->uio_resid % VAR_0;
 if (VAR_11 == VAR_9->uio_resid)
  return (VAR_1);
 VAR_9->uio_resid -= VAR_11;




 VAR_10 = VAR_9->uio_resid;
 VAR_12 = FUNC_7(VAR_7, VAR_9, 0, VAR_6->a_cred);

 if (!VAR_12 && VAR_9->uio_resid == VAR_10) {
  FUNC_0(VAR_5);
  if (VAR_6->a_eofflag != ((void*)0))
   *VAR_6->a_eofflag = 1;
 }


 VAR_9->uio_resid += VAR_11;
 return (VAR_12);
}
