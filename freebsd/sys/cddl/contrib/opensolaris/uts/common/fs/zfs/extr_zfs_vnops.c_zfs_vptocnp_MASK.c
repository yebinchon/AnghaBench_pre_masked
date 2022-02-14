
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ z_id; } ;
typedef TYPE_3__ znode_t ;
struct TYPE_24__ {scalar_t__ z_root; struct TYPE_24__* z_parent; } ;
typedef TYPE_4__ zfsvfs_t ;
struct TYPE_25__ {int v_iflag; TYPE_2__* v_mount; TYPE_1__* v_vfsp; } ;
typedef TYPE_5__ vnode_t ;
struct vop_vptocnp_args {size_t* a_buflen; scalar_t__ a_buf; int a_cred; int * a_vpp; TYPE_5__* a_vp; } ;
typedef enum vgetstate { ____Placeholder_vgetstate } vgetstate ;
struct TYPE_22__ {TYPE_5__* mnt_vnodecovered; } ;
struct TYPE_21__ {TYPE_4__* vfs_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int *,int ,scalar_t__,size_t*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char*,scalar_t__,size_t) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_3__**,char*) ;

__attribute__((used)) static int
FUNC_16(struct vop_vptocnp_args *VAR_6)
{
 vnode_t *VAR_7;
 vnode_t *VAR_8 = VAR_6->a_vp;;
 zfsvfs_t *VAR_9 = VAR_8->v_vfsp->vfs_data;
 znode_t *VAR_10 = FUNC_4(VAR_8);
 enum vgetstate VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_5(VAR_9);
 FUNC_7(VAR_10);





 if (VAR_10->z_id != VAR_9->z_root || VAR_9->z_parent == VAR_9) {
  char VAR_14[VAR_4 + 1];
  znode_t *VAR_15;
  size_t VAR_16;

  VAR_13 = FUNC_15(VAR_10, &VAR_15, VAR_14);
  if (VAR_13 == 0) {
   VAR_16 = FUNC_10(VAR_14);
   if (*VAR_6->a_buflen < VAR_16)
    VAR_13 = FUNC_0(VAR_1);
  }
  if (VAR_13 == 0) {
   *VAR_6->a_buflen -= VAR_16;
   FUNC_9(VAR_14, VAR_6->a_buf + *VAR_6->a_buflen, VAR_16);
   *VAR_6->a_vpp = FUNC_8(VAR_15);
  }
  FUNC_6(VAR_9);
  return (VAR_13);
 }
 FUNC_6(VAR_9);

 VAR_7 = VAR_8->v_mount->mnt_vnodecovered;
 VAR_11 = FUNC_12(VAR_7);
 VAR_12 = FUNC_1(VAR_8);
 FUNC_2(VAR_8, 0);
 VAR_13 = FUNC_11(VAR_7, VAR_3, VAR_11);
 if (VAR_13 == 0) {
  VAR_13 = FUNC_3(VAR_7, VAR_6->a_vpp, VAR_6->a_cred,
      VAR_6->a_buf, VAR_6->a_buflen);
  FUNC_14(VAR_7);
 }
 FUNC_13(VAR_8, VAR_12 | VAR_2);
 if ((VAR_8->v_iflag & VAR_5) != 0)
  VAR_13 = FUNC_0(VAR_0);
 return (VAR_13);
}
