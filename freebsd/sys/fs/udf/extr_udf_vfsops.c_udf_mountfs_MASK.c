
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct bufobj {int dummy; } ;
struct vnode {struct cdev* v_rdev; struct bufobj v_bufobj; } ;
struct TYPE_13__ {int lb_num; } ;
struct TYPE_18__ {int len; int loc; } ;
struct anchor_vdp {int len; TYPE_4__ loc; TYPE_9__ main_vds_ex; } ;
struct udf_mnt {int bsize; int bmask; int part_len; int part_start; struct anchor_vdp root_icb; scalar_t__ bshift; int * im_l2d; struct bufobj* im_bo; struct g_consumer* im_cp; int * im_d2l; struct vnode* im_devvp; struct cdev* im_dev; struct mount* im_mountp; } ;
struct desc_tag {int dummy; } ;
struct part_desc {int start_loc; int part_len; int part_num; struct desc_tag tag; } ;
struct TYPE_14__ {int * val; } ;
struct TYPE_15__ {TYPE_5__ f_fsid; } ;
struct mount {scalar_t__ mnt_iosize_max; int mnt_kern_flag; int mnt_flag; TYPE_7__* mnt_vfc; TYPE_6__ mnt_stat; struct udf_mnt* mnt_data; } ;
struct long_ad {int dummy; } ;
struct TYPE_10__ {int lb_num; int part_num; } ;
struct TYPE_11__ {TYPE_1__ loc; } ;
struct TYPE_12__ {TYPE_2__ fsd_loc; } ;
struct logvol_desc {TYPE_3__ _lvd_use; int lb_size; struct desc_tag tag; } ;
struct g_consumer {TYPE_8__* provider; } ;
struct fileset_desc {int rootdir_icb; struct desc_tag tag; } ;
struct file_entry {struct desc_tag tag; } ;
struct cdev {scalar_t__ si_iosize_max; } ;
struct buf {int * b_data; } ;
struct TYPE_17__ {int sectorsize; } ;
struct TYPE_16__ {int vfc_typenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct vnode*,int,int,struct buf**) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (int *,struct anchor_vdp*,int) ;
 int FUNC_5 (struct vnode*,int,int,int ,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct cdev*) ;
 int FUNC_9 (struct cdev*) ;
 int FUNC_10 (struct cdev*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct udf_mnt*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct g_consumer*) ;
 int FUNC_16 (struct vnode*,struct g_consumer**,char*,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 struct udf_mnt* FUNC_19 (int,int ,int) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (struct desc_tag*,int ) ;
 scalar_t__ FUNC_22 (struct udf_mnt*,struct logvol_desc*) ;
 int FUNC_23 (struct udf_mnt*,int,int,struct buf**) ;

__attribute__((used)) static int
FUNC_24(struct vnode *VAR_15, struct mount *VAR_16)
{
 struct buf *VAR_17 = ((void*)0);
 struct cdev *VAR_18;
 struct anchor_vdp VAR_19;
 struct udf_mnt *VAR_20 = ((void*)0);
 struct part_desc *VAR_21;
 struct logvol_desc *VAR_22;
 struct fileset_desc *VAR_23;
 struct file_entry *VAR_24;
 uint32_t VAR_25, VAR_26, VAR_27, VAR_28;
 uint32_t VAR_29;
 uint32_t VAR_30 = 0;
 uint16_t VAR_31 = 0, VAR_32 = 0;
 int VAR_33 = VAR_0;
 int VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;
 int VAR_37;
 struct g_consumer *VAR_38;
 struct bufobj *VAR_39;

 VAR_18 = VAR_15->v_rdev;
 FUNC_9(VAR_18);
 FUNC_13();
 VAR_33 = FUNC_16(VAR_15, &VAR_38, "udf", 0);
 FUNC_14();
 FUNC_3(VAR_15, 0);
 if (VAR_33)
  goto bail;

 VAR_39 = &VAR_15->v_bufobj;

 if (VAR_15->v_rdev->si_iosize_max != 0)
  VAR_16->mnt_iosize_max = VAR_15->v_rdev->si_iosize_max;
 if (VAR_16->mnt_iosize_max > VAR_2)
  VAR_16->mnt_iosize_max = VAR_2;


 VAR_20 = FUNC_19(sizeof(struct udf_mnt), VAR_7,
     VAR_6 | VAR_8);
 if (VAR_20 == ((void*)0)) {
  FUNC_20("Cannot allocate UDF mount struct\n");
  VAR_33 = VAR_1;
  goto bail;
 }

 VAR_16->mnt_data = VAR_20;
 VAR_16->mnt_stat.f_fsid.val[0] = FUNC_8(VAR_15->v_rdev);
 VAR_16->mnt_stat.f_fsid.val[1] = VAR_16->mnt_vfc->vfc_typenum;
 FUNC_0(VAR_16);
 VAR_16->mnt_flag |= VAR_5;
 VAR_16->mnt_kern_flag |= VAR_4 | VAR_3;
 FUNC_1(VAR_16);
 VAR_20->im_mountp = VAR_16;
 VAR_20->im_dev = VAR_18;
 VAR_20->im_devvp = VAR_15;
 VAR_20->im_d2l = ((void*)0);
 VAR_20->im_cp = VAR_38;
 VAR_20->im_bo = VAR_39;
 VAR_29 = 2048;

 if (((VAR_29 % VAR_38->provider->sectorsize) != 0) ||
     (VAR_29 < VAR_38->provider->sectorsize)) {
  VAR_33 = VAR_0;
  goto bail;
 }

 VAR_37 = VAR_38->provider->sectorsize;





 VAR_25 = 256;
 if ((VAR_33 = FUNC_5(VAR_15, VAR_25 * FUNC_7(VAR_29), VAR_37,
      VAR_9, &VAR_17)) != 0)
  goto bail;
 if ((VAR_33 = FUNC_21((struct desc_tag *)VAR_17->b_data, VAR_10)))
  goto bail;

 FUNC_4(VAR_17->b_data, &VAR_19, sizeof(struct anchor_vdp));
 FUNC_6(VAR_17);
 VAR_17 = ((void*)0);







 VAR_27 = FUNC_18(VAR_19.main_vds_ex.loc);
 VAR_28 = VAR_27 + (FUNC_18(VAR_19.main_vds_ex.len) - 1) / VAR_37;
 for (VAR_25 = VAR_27; VAR_25 < VAR_28; VAR_25++) {
  if ((VAR_33 = FUNC_5(VAR_15, VAR_25 * FUNC_7(VAR_29),
       VAR_37, VAR_9, &VAR_17)) != 0) {
   FUNC_20("Can't read sector %d of VDS\n", VAR_25);
   goto bail;
  }
  VAR_22 = (struct logvol_desc *)VAR_17->b_data;
  if (!FUNC_21(&VAR_22->tag, VAR_13)) {
   VAR_20->bsize = FUNC_18(VAR_22->lb_size);
   VAR_20->bmask = VAR_20->bsize - 1;
   VAR_20->bshift = FUNC_11(VAR_20->bsize) - 1;
   VAR_32 = FUNC_17(VAR_22->_lvd_use.fsd_loc.loc.part_num);
   VAR_30 = FUNC_18(VAR_22->_lvd_use.fsd_loc.loc.lb_num);
   if (FUNC_22(VAR_20, VAR_22))
    break;
   VAR_34 = 1;
  }
  VAR_21 = (struct part_desc *)VAR_17->b_data;
  if (!FUNC_21(&VAR_21->tag, VAR_14)) {
   VAR_35 = 1;
   VAR_31 = FUNC_17(VAR_21->part_num);
   VAR_20->part_len = FUNC_18(VAR_21->part_len);
   VAR_20->part_start = FUNC_18(VAR_21->start_loc);
  }

  FUNC_6(VAR_17);
  VAR_17 = ((void*)0);
  if ((VAR_35) && (VAR_34))
   break;
 }

 if (!VAR_35 || !VAR_34) {
  VAR_33 = VAR_0;
  goto bail;
 }

 if (VAR_32 != VAR_31) {
  FUNC_20("FSD does not lie within the partition!\n");
  VAR_33 = VAR_0;
  goto bail;
 }







 VAR_25 = VAR_20->part_start + VAR_30;
 if ((VAR_33 = FUNC_2(VAR_15, VAR_25, VAR_20->bsize, &VAR_17)) != 0) {
  FUNC_20("Cannot read sector %d of FSD\n", VAR_25);
  goto bail;
 }
 VAR_23 = (struct fileset_desc *)VAR_17->b_data;
 if (!FUNC_21(&VAR_23->tag, VAR_12)) {
  VAR_36 = 1;
  FUNC_4(&VAR_23->rootdir_icb, &VAR_20->root_icb,
      sizeof(struct long_ad));
 }

 FUNC_6(VAR_17);
 VAR_17 = ((void*)0);

 if (!VAR_36) {
  FUNC_20("Couldn't find the fsd\n");
  VAR_33 = VAR_0;
  goto bail;
 }




 VAR_25 = FUNC_18(VAR_20->root_icb.loc.lb_num) + VAR_20->part_start;
 VAR_26 = FUNC_18(VAR_20->root_icb.len);
 if ((VAR_33 = FUNC_23(VAR_20, VAR_25, VAR_26, &VAR_17)) != 0) {
  FUNC_20("Cannot read sector %d\n", VAR_25);
  goto bail;
 }

 VAR_24 = (struct file_entry *)VAR_17->b_data;
 if ((VAR_33 = FUNC_21(&VAR_24->tag, VAR_11))) {
  FUNC_20("Invalid root file entry!\n");
  goto bail;
 }

 FUNC_6(VAR_17);
 VAR_17 = ((void*)0);

 return 0;

bail:
 if (VAR_20 != ((void*)0))
  FUNC_12(VAR_20, VAR_7);
 if (VAR_17 != ((void*)0))
  FUNC_6(VAR_17);
 if (VAR_38 != ((void*)0)) {
  FUNC_13();
  FUNC_15(VAR_38);
  FUNC_14();
 }
 FUNC_10(VAR_18);
 return VAR_33;
}
