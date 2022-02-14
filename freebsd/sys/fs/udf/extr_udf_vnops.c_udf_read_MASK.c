
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct vop_read_args {int a_ioflag; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {TYPE_1__* v_mount; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct udf_node {struct udf_mnt* udfmp; struct file_entry* fentry; } ;
struct udf_mnt {long bsize; } ;
struct file_entry {int inf_len; int l_ad; int l_ea; int * data; } ;
struct buf {scalar_t__ b_resid; int * b_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct udf_node* FUNC_0 (struct vnode*) ;
 long FUNC_1 (struct udf_mnt*,int) ;
 int FUNC_2 (struct vnode*,scalar_t__,long,int ,struct buf**) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct vnode*,scalar_t__,scalar_t__,long,int ,scalar_t__,int,int ,struct buf**) ;
 scalar_t__ FUNC_5 (struct udf_node*) ;
 scalar_t__ FUNC_6 (struct udf_mnt*,int) ;
 scalar_t__ FUNC_7 (struct udf_mnt*,scalar_t__) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_12(struct vop_read_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct uio *VAR_5 = VAR_3->a_uio;
 struct udf_node *VAR_6 = FUNC_0(VAR_4);
 struct udf_mnt *VAR_7;
 struct file_entry *VAR_8;
 struct buf *VAR_9;
 uint8_t *VAR_10;
 daddr_t VAR_11, VAR_12;
 off_t VAR_13, VAR_14;
 ssize_t VAR_15;
 int VAR_16 = 0;
 long VAR_17, VAR_18;

 if (VAR_5->uio_resid == 0)
  return (0);
 if (VAR_5->uio_offset < 0)
  return (VAR_0);

 if (FUNC_5(VAR_6)) {
  VAR_8 = VAR_6->fentry;
  VAR_10 = &VAR_8->data[FUNC_8(VAR_8->l_ea)];
  VAR_14 = FUNC_8(VAR_8->l_ad);

  VAR_15 = VAR_5->uio_resid;
  VAR_13 = VAR_14 - VAR_5->uio_offset;
  if (VAR_13 <= 0)
   return (0);
  if (VAR_13 < VAR_15)
   VAR_15 = VAR_13;
  VAR_16 = FUNC_11(VAR_10 + VAR_5->uio_offset, (int)VAR_15, VAR_5);
  return (VAR_16);
 }

 VAR_14 = FUNC_9(VAR_6->fentry->inf_len);
 VAR_7 = VAR_6->udfmp;
 do {
  VAR_11 = FUNC_6(VAR_7, VAR_5->uio_offset);
  VAR_18 = FUNC_1(VAR_7, VAR_5->uio_offset);
  VAR_15 = FUNC_10((u_int)(VAR_7->bsize - VAR_18),
   VAR_5->uio_resid);
  VAR_13 = VAR_14 - VAR_5->uio_offset;
  if (VAR_13 <= 0)
   return (0);
  if (VAR_13 < VAR_15)
   VAR_15 = VAR_13;
  VAR_17 = VAR_7->bsize;
  VAR_12 = VAR_11 + 1;
  if ((VAR_4->v_mount->mnt_flag & VAR_1) == 0) {
   if (FUNC_7(VAR_7, VAR_12) < VAR_14) {
    VAR_16 = FUNC_4(VAR_4, VAR_14, VAR_11, VAR_17,
        VAR_2, VAR_5->uio_resid,
        (VAR_3->a_ioflag >> 16), 0, &VAR_9);
   } else {
    VAR_16 = FUNC_2(VAR_4, VAR_11, VAR_17, VAR_2, &VAR_9);
   }
  } else {
   VAR_16 = FUNC_2(VAR_4, VAR_11, VAR_17, VAR_2, &VAR_9);
  }
  if (VAR_16 != 0) {
   FUNC_3(VAR_9);
   return (VAR_16);
  }
  VAR_15 = FUNC_10(VAR_15, VAR_17 - VAR_9->b_resid);

  VAR_16 = FUNC_11(VAR_9->b_data + VAR_18, (int)VAR_15, VAR_5);
  FUNC_3(VAR_9);
 } while (VAR_16 == 0 && VAR_5->uio_resid > 0 && VAR_15 != 0);
 return (VAR_16);
}
