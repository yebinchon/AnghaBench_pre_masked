
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_write_args {int a_ioflag; int a_cred; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; int uio_td; } ;
struct TYPE_3__ {int tn_aobj; } ;
struct tmpfs_node {scalar_t__ tn_size; int tn_status; int tn_mode; TYPE_1__ tn_reg; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ tm_maxfilesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_2 (int ) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct vnode*,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__,struct uio*) ;
 scalar_t__ FUNC_7 (struct vnode*,struct uio*,int ) ;

__attribute__((used)) static int
FUNC_8(struct vop_write_args *VAR_12)
{
 struct vnode *VAR_13;
 struct uio *VAR_14;
 struct tmpfs_node *VAR_15;
 off_t VAR_16;
 int VAR_17, VAR_18;

 VAR_13 = VAR_12->a_vp;
 VAR_14 = VAR_12->a_uio;
 VAR_18 = VAR_12->a_ioflag;
 VAR_17 = 0;
 VAR_15 = FUNC_3(VAR_13);
 VAR_16 = VAR_15->tn_size;

 if (VAR_14->uio_offset < 0 || VAR_13->v_type != VAR_11)
  return (VAR_1);
 if (VAR_14->uio_resid == 0)
  return (0);
 if (VAR_18 & VAR_3)
  VAR_14->uio_offset = VAR_15->tn_size;
 if (VAR_14->uio_offset + VAR_14->uio_resid >
   FUNC_2(VAR_13->v_mount)->tm_maxfilesize)
  return (VAR_0);
 if (FUNC_7(VAR_13, VAR_14, VAR_14->uio_td))
  return (VAR_0);
 if (VAR_14->uio_offset + VAR_14->uio_resid > VAR_15->tn_size) {
  VAR_17 = FUNC_5(VAR_13, VAR_14->uio_offset + VAR_14->uio_resid,
      VAR_2);
  if (VAR_17 != 0)
   goto out;
 }

 VAR_17 = FUNC_6(VAR_15->tn_reg.tn_aobj, VAR_15->tn_size, VAR_14);
 VAR_15->tn_status |= VAR_7 | VAR_9 |
     VAR_8;
 if (VAR_15->tn_mode & (VAR_6 | VAR_5)) {
  if (FUNC_4(VAR_12->a_cred, VAR_4))
   VAR_15->tn_mode &= ~(VAR_6 | VAR_5);
 }
 if (VAR_17 != 0)
  (void)FUNC_5(VAR_13, VAR_16, VAR_10);

out:
 FUNC_1(FUNC_0(VAR_17 == 0, VAR_14->uio_resid == 0));
 FUNC_1(FUNC_0(VAR_17 != 0, VAR_16 == VAR_15->tn_size));

 return (VAR_17);
}
