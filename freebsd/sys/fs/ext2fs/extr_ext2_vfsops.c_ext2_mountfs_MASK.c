
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct bufobj {int bo_ops; struct g_consumer* bo_private; } ;
struct vnode {struct bufobj v_bufobj; struct cdev* v_rdev; } ;
struct TYPE_5__ {int * val; } ;
struct TYPE_6__ {TYPE_1__ f_fsid; } ;
struct mount {int mnt_iosize_max; int mnt_flag; int mnt_kern_flag; struct m_ext2fs* mnt_data; int mnt_maxsymlinklen; TYPE_3__* mnt_vfc; TYPE_2__ mnt_stat; int mnt_optnew; } ;
struct m_ext2fs {int e2fs_bsize; int e2fs_contigsumsize; int e2fs_gcount; int e2fs_ronly; int e2fs_wasvalid; int e2fs_state; int e2fs_fmod; struct m_ext2fs* um_e2fs; struct m_ext2fs* e2fs; struct m_ext2fs* e2fs_contigdirs; struct m_ext2fs* e2fs_gd; int um_seqinc; scalar_t__ e2fs_log_bsize; scalar_t__ um_bptrtodb; int um_nindir; struct g_consumer* um_cp; struct bufobj* um_bo; struct vnode* um_devvp; struct cdev* um_dev; struct mount* um_mountp; struct csum* e2fs_clustersum; int * e2fs_maxcluster; } ;
struct g_consumer {TYPE_4__* provider; } ;
struct ext2mount {int e2fs_bsize; int e2fs_contigsumsize; int e2fs_gcount; int e2fs_ronly; int e2fs_wasvalid; int e2fs_state; int e2fs_fmod; struct ext2mount* um_e2fs; struct ext2mount* e2fs; struct ext2mount* e2fs_contigdirs; struct ext2mount* e2fs_gd; int um_seqinc; scalar_t__ e2fs_log_bsize; scalar_t__ um_bptrtodb; int um_nindir; struct g_consumer* um_cp; struct bufobj* um_bo; struct vnode* um_devvp; struct cdev* um_dev; struct mount* um_mountp; struct csum* e2fs_clustersum; int * e2fs_maxcluster; } ;
struct ext2fs {int e2fs_state; } ;
struct csum {void* cs_sum; scalar_t__ cs_init; } ;
struct cdev {scalar_t__ si_iosize_max; } ;
struct buf {scalar_t__ b_data; } ;
typedef int int32_t ;
struct TYPE_8__ {int sectorsize; } ;
struct TYPE_7__ {int vfc_typenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct m_ext2fs*) ;
 int FUNC_1 (struct m_ext2fs*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct m_ext2fs*) ;
 int FUNC_3 (int,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (struct vnode*,int ) ;
 int FUNC_8 (struct ext2fs*,struct m_ext2fs*,int ) ;
 int FUNC_9 (struct vnode*,int ,int,int ,struct buf**) ;
 int FUNC_10 (struct buf*) ;
 int FUNC_11 (struct cdev*) ;
 scalar_t__ FUNC_12 (struct ext2fs*,struct cdev*,int) ;
 int FUNC_13 (struct vnode*,struct m_ext2fs*,struct m_ext2fs*) ;
 int FUNC_14 (struct m_ext2fs*,int ) ;
 int FUNC_15 (struct m_ext2fs*,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_20 ;
 int FUNC_18 (struct g_consumer*) ;
 int FUNC_19 (struct vnode*,struct g_consumer**,char*,int) ;
 void* FUNC_20 (int,int ,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*,char*,int ) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_25(struct vnode *VAR_21, struct mount *VAR_22)
{
 struct ext2mount *VAR_23;
 struct buf *VAR_24;
 struct m_ext2fs *VAR_25;
 struct ext2fs *VAR_26;
 struct cdev *VAR_27 = VAR_21->v_rdev;
 struct g_consumer *VAR_28;
 struct bufobj *VAR_29;
 struct csum *VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 u_long VAR_34;
 int32_t *VAR_35;
 int32_t VAR_36;

 VAR_32 = FUNC_24(VAR_22->mnt_optnew, "ro", ((void*)0), 0);

 FUNC_16();
 VAR_31 = FUNC_19(VAR_21, &VAR_28, "ext2fs", VAR_32 ? 0 : 1);
 FUNC_17();
 FUNC_7(VAR_21, 0);
 if (VAR_31)
  return (VAR_31);


 if (((VAR_19 % VAR_28->provider->sectorsize) != 0) ||
     (VAR_19 < VAR_28->provider->sectorsize)) {
  FUNC_16();
  FUNC_18(VAR_28);
  FUNC_17();
  return (VAR_2);
 }

 VAR_29 = &VAR_21->v_bufobj;
 VAR_29->bo_private = VAR_28;
 VAR_29->bo_ops = VAR_20;
 if (VAR_21->v_rdev->si_iosize_max != 0)
  VAR_22->mnt_iosize_max = VAR_21->v_rdev->si_iosize_max;
 if (VAR_22->mnt_iosize_max > VAR_6)
  VAR_22->mnt_iosize_max = VAR_6;

 VAR_24 = ((void*)0);
 VAR_23 = ((void*)0);
 if ((VAR_31 = FUNC_9(VAR_21, VAR_18, VAR_19, VAR_17, &VAR_24)) != 0)
  goto out;
 VAR_26 = (struct ext2fs *)VAR_24->b_data;
 if (FUNC_12(VAR_26, VAR_27, VAR_32) != 0) {
  VAR_31 = VAR_2;
  goto out;
 }
 if ((VAR_26->e2fs_state & VAR_1) == 0 ||
     (VAR_26->e2fs_state & VAR_0)) {
  if (VAR_32 || (VAR_22->mnt_flag & VAR_10)) {
   FUNC_23(
"WARNING: Filesystem was not properly dismounted\n");
  } else {
   FUNC_23(
"WARNING: R/W mount denied.  Filesystem is not clean - run fsck\n");
   VAR_31 = VAR_3;
   goto out;
  }
 }
 VAR_23 = FUNC_20(sizeof(*VAR_23), VAR_14, VAR_15 | VAR_16);






 VAR_23->um_e2fs = FUNC_20(sizeof(struct m_ext2fs),
     VAR_14, VAR_15 | VAR_16);
 VAR_23->um_e2fs->e2fs = FUNC_20(sizeof(struct ext2fs),
     VAR_14, VAR_15);
 FUNC_22(FUNC_2(VAR_23), "EXT2FS", "EXT2FS Lock", VAR_13);
 FUNC_8(VAR_26, VAR_23->um_e2fs->e2fs, (u_int)sizeof(struct ext2fs));
 if ((VAR_31 = FUNC_13(VAR_21, VAR_23->um_e2fs->e2fs, VAR_23->um_e2fs)))
  goto out;







 VAR_36 = FUNC_3(1, VAR_6 / VAR_23->um_e2fs->e2fs_bsize);
 VAR_23->um_e2fs->e2fs_contigsumsize = FUNC_4(VAR_36, VAR_4);
 if (VAR_23->um_e2fs->e2fs_contigsumsize > 0) {
  VAR_34 = VAR_23->um_e2fs->e2fs_gcount * sizeof(int32_t);
  VAR_23->um_e2fs->e2fs_maxcluster = FUNC_20(VAR_34, VAR_14, VAR_15);
  VAR_34 = VAR_23->um_e2fs->e2fs_gcount * sizeof(struct csum);
  VAR_23->um_e2fs->e2fs_clustersum = FUNC_20(VAR_34, VAR_14, VAR_15);
  VAR_35 = VAR_23->um_e2fs->e2fs_maxcluster;
  VAR_30 = VAR_23->um_e2fs->e2fs_clustersum;
  for (VAR_33 = 0; VAR_33 < VAR_23->um_e2fs->e2fs_gcount; VAR_33++, VAR_30++) {
   *VAR_35++ = VAR_23->um_e2fs->e2fs_contigsumsize;
   VAR_30->cs_init = 0;
   VAR_30->cs_sum = FUNC_20((VAR_23->um_e2fs->e2fs_contigsumsize + 1) *
       sizeof(int32_t), VAR_14, VAR_15 | VAR_16);
  }
 }

 FUNC_10(VAR_24);
 VAR_24 = ((void*)0);
 VAR_25 = VAR_23->um_e2fs;
 VAR_25->e2fs_ronly = VAR_32;





 VAR_25->e2fs_wasvalid = VAR_25->e2fs->e2fs_state & VAR_1 ? 1 : 0;
 if (VAR_32 == 0) {
  VAR_25->e2fs_fmod = 1;
  VAR_25->e2fs->e2fs_state &= ~VAR_1;
 }
 VAR_22->mnt_data = VAR_23;
 VAR_22->mnt_stat.f_fsid.val[0] = FUNC_11(VAR_27);
 VAR_22->mnt_stat.f_fsid.val[1] = VAR_22->mnt_vfc->vfc_typenum;
 VAR_22->mnt_maxsymlinklen = VAR_5;
 FUNC_5(VAR_22);
 VAR_22->mnt_flag |= VAR_11;
 FUNC_6(VAR_22);
 VAR_23->um_mountp = VAR_22;
 VAR_23->um_dev = VAR_27;
 VAR_23->um_devvp = VAR_21;
 VAR_23->um_bo = &VAR_21->v_bufobj;
 VAR_23->um_cp = VAR_28;





 VAR_23->um_nindir = FUNC_0(VAR_25);
 VAR_23->um_bptrtodb = VAR_25->e2fs->e2fs_log_bsize + 1;
 VAR_23->um_seqinc = FUNC_1(VAR_25);
 if (VAR_32 == 0)
  FUNC_14(VAR_23, VAR_12);



 FUNC_5(VAR_22);
 VAR_22->mnt_kern_flag |= VAR_8 | VAR_7 |
     VAR_9;
 FUNC_6(VAR_22);
 return (0);
out:
 if (VAR_24)
  FUNC_10(VAR_24);
 if (VAR_28 != ((void*)0)) {
  FUNC_16();
  FUNC_18(VAR_28);
  FUNC_17();
 }
 if (VAR_23) {
  FUNC_21(FUNC_2(VAR_23));
  FUNC_15(VAR_23->um_e2fs->e2fs_gd, VAR_14);
  FUNC_15(VAR_23->um_e2fs->e2fs_contigdirs, VAR_14);
  FUNC_15(VAR_23->um_e2fs->e2fs, VAR_14);
  FUNC_15(VAR_23->um_e2fs, VAR_14);
  FUNC_15(VAR_23, VAR_14);
  VAR_22->mnt_data = ((void*)0);
 }
 return (VAR_31);
}
