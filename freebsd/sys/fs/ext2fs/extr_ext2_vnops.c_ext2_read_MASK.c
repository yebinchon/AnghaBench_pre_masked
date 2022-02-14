
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct vop_read_args {int a_ioflag; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct uio {scalar_t__ uio_rw; int uio_resid; scalar_t__ uio_offset; } ;
struct m_ext2fs {scalar_t__ e2fs_maxfilesize; long e2fs_fsize; } ;
struct inode {scalar_t__ i_size; int i_flag; struct m_ext2fs* i_e2fs; } ;
struct buf {scalar_t__ b_data; scalar_t__ b_resid; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int mnt_maxsymlinklen; int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct inode* FUNC_1 (struct vnode*) ;
 long FUNC_2 (struct m_ext2fs*,scalar_t__) ;
 void* FUNC_3 (struct m_ext2fs*,struct inode*,scalar_t__) ;
 int FUNC_4 (struct vnode*,scalar_t__,long,int ,struct buf**) ;
 int FUNC_5 (struct vnode*,scalar_t__,long,scalar_t__*,void**,int,int ,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct vnode*,scalar_t__,scalar_t__,long,int ,long,int,int ,struct buf**) ;
 scalar_t__ FUNC_8 (struct m_ext2fs*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct m_ext2fs*,scalar_t__) ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,int,struct uio*) ;
 int FUNC_12 (struct buf*,int) ;

__attribute__((used)) static int
FUNC_13(struct vop_read_args *VAR_11)
{
 struct vnode *VAR_12;
 struct inode *VAR_13;
 struct uio *VAR_14;
 struct m_ext2fs *VAR_15;
 struct buf *VAR_16;
 daddr_t VAR_17, VAR_18;
 off_t VAR_19;
 long VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;
 int VAR_26;

 VAR_12 = VAR_11->a_vp;
 VAR_14 = VAR_11->a_uio;
 VAR_26 = VAR_11->a_ioflag;

 VAR_25 = VAR_11->a_ioflag >> VAR_2;
 VAR_13 = FUNC_1(VAR_12);
 VAR_24 = VAR_14->uio_resid;
 FUNC_0(VAR_24 >= 0, ("ext2_read: uio->uio_resid < 0"));
 if (VAR_24 == 0)
  return (0);
 FUNC_0(VAR_14->uio_offset >= 0, ("ext2_read: uio->uio_offset < 0"));
 VAR_15 = VAR_13->i_e2fs;
 if (VAR_14->uio_offset < VAR_13->i_size &&
     VAR_14->uio_offset >= VAR_15->e2fs_maxfilesize)
  return (VAR_0);

 for (VAR_23 = 0, VAR_16 = ((void*)0); VAR_14->uio_resid > 0; VAR_16 = ((void*)0)) {
  if ((VAR_19 = VAR_13->i_size - VAR_14->uio_offset) <= 0)
   break;
  VAR_17 = FUNC_8(VAR_15, VAR_14->uio_offset);
  VAR_18 = VAR_17 + 1;
  VAR_20 = FUNC_3(VAR_15, VAR_13, VAR_17);
  VAR_22 = FUNC_2(VAR_15, VAR_14->uio_offset);

  VAR_21 = VAR_15->e2fs_fsize - VAR_22;
  if (VAR_14->uio_resid < VAR_21)
   VAR_21 = VAR_14->uio_resid;
  if (VAR_19 < VAR_21)
   VAR_21 = VAR_19;

  if (FUNC_9(VAR_15, VAR_18) >= VAR_13->i_size)
   VAR_23 = FUNC_4(VAR_12, VAR_17, VAR_20, VAR_6, &VAR_16);
  else if ((VAR_12->v_mount->mnt_flag & VAR_4) == 0) {
   VAR_23 = FUNC_7(VAR_12, VAR_13->i_size, VAR_17, VAR_20,
       VAR_6, VAR_22 + VAR_14->uio_resid, VAR_25,
       0, &VAR_16);
  } else if (VAR_25 > 1) {
   u_int VAR_27 = FUNC_3(VAR_15, VAR_13, VAR_18);

   VAR_23 = FUNC_5(VAR_12, VAR_17,
       VAR_20, &VAR_18, &VAR_27, 1, VAR_6, &VAR_16);
  } else
   VAR_23 = FUNC_4(VAR_12, VAR_17, VAR_20, VAR_6, &VAR_16);
  if (VAR_23) {
   FUNC_6(VAR_16);
   VAR_16 = ((void*)0);
   break;
  }
  VAR_20 -= VAR_16->b_resid;
  if (VAR_20 < VAR_21) {
   if (VAR_20 == 0)
    break;
   VAR_21 = VAR_20;
  }
  VAR_23 = FUNC_11((char *)VAR_16->b_data + VAR_22,
      (int)VAR_21, VAR_14);
  if (VAR_23)
   break;
  FUNC_12(VAR_16, VAR_26);
 }







 if (VAR_16 != ((void*)0))
  FUNC_12(VAR_16, VAR_26);

 if ((VAR_23 == 0 || VAR_14->uio_resid != VAR_24) &&
     (VAR_12->v_mount->mnt_flag & (VAR_3 | VAR_5)) == 0)
  VAR_13->i_flag |= VAR_1;
 return (VAR_23);
}
