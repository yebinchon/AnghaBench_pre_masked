
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int xfs_ufsize_t ;
typedef int xfs_trans_t ;
typedef scalar_t__ xfs_off_t ;
struct TYPE_27__ {scalar_t__ sb_rextsize; } ;
struct TYPE_28__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_29__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
typedef scalar_t__ xfs_extlen_t ;
struct TYPE_30__ {scalar_t__ br_startblock; scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;
typedef TYPE_4__ xfs_bmbt_irec_t ;
typedef int xfs_bmap_free_t ;
typedef scalar_t__ uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,int*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,TYPE_3__*,scalar_t__,scalar_t__,int,int *,int ,TYPE_4__*,int*,int *) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,int ) ;
 int FUNC_18 (TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__*) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int * FUNC_21 (TYPE_2__*,int ) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,TYPE_3__*) ;
 int FUNC_25 (int *,scalar_t__,int ,scalar_t__,int ,int ) ;
 int FUNC_26 (int *,TYPE_3__*,scalar_t__,int ,int) ;
 int FUNC_27 (int *,TYPE_3__*,scalar_t__,int ,int) ;

int
FUNC_28(
 xfs_inode_t *VAR_12,
 xfs_off_t VAR_13,
 size_t VAR_14,
 xfs_bmbt_irec_t *VAR_15,
 int VAR_16)
{
 xfs_mount_t *VAR_17 = VAR_12->i_mount;
 xfs_fileoff_t VAR_18;
 xfs_fileoff_t VAR_19;
 xfs_filblks_t VAR_20, VAR_21;
 xfs_fsblock_t VAR_22;
 xfs_extlen_t VAR_23, VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 xfs_trans_t *VAR_29;
 xfs_bmap_free_t VAR_30;
 uint VAR_31, VAR_32, VAR_33;
 int VAR_34;
 int VAR_35;

 VAR_35 = FUNC_20(VAR_12, 0);
 if (VAR_35)
  return FUNC_5(VAR_35);

 VAR_28 = FUNC_7(VAR_12);
 VAR_23 = FUNC_16(VAR_12);

 VAR_18 = FUNC_3(VAR_17, VAR_13);
 VAR_19 = FUNC_2(VAR_17, ((xfs_ufsize_t)(VAR_13 + VAR_14)));
 if ((VAR_13 + VAR_14) > FUNC_6(VAR_12)) {
  VAR_35 = FUNC_18(VAR_17, VAR_12, VAR_23, &VAR_19);
  if (VAR_35)
   return FUNC_5(VAR_35);
 } else {
  if (VAR_16 && (VAR_15->br_startblock == VAR_1))
   VAR_19 = FUNC_1(VAR_19, (xfs_fileoff_t)
     VAR_15->br_blockcount +
     VAR_15->br_startoff);
 }
 VAR_20 = VAR_19 - VAR_18;
 FUNC_0(VAR_20 > 0);

 VAR_21 = VAR_20;
 if (FUNC_10(VAR_23)) {
  if ((VAR_24 = FUNC_9(VAR_18, VAR_23)))
   VAR_21 += VAR_24;
  if ((VAR_24 = FUNC_9(VAR_21, VAR_23)))
   VAR_21 += VAR_23 - VAR_24;
 }

 if (FUNC_10(VAR_28)) {
  VAR_33 = VAR_31 = VAR_21;
  VAR_33 /= VAR_17->m_sb.sb_rextsize;
  VAR_32 = FUNC_4(VAR_17, 0);
  VAR_27 = VAR_6;
 } else {
  VAR_33 = 0;
  VAR_32 = VAR_31 = FUNC_4(VAR_17, VAR_21);
  VAR_27 = VAR_5;
 }




 VAR_29 = FUNC_21(VAR_17, VAR_8);
 VAR_35 = FUNC_25(VAR_29, VAR_32,
   FUNC_8(VAR_17), VAR_33,
   VAR_9,
   VAR_11);



 if (VAR_35) {
  FUNC_22(VAR_29, 0);
  return FUNC_5(VAR_35);
 }

 FUNC_17(VAR_12, VAR_4);

 VAR_35 = FUNC_26(VAR_29, VAR_12, VAR_31, 0, VAR_27);
 if (VAR_35)
  goto out_trans_cancel;

 FUNC_24(VAR_29, VAR_12);

 VAR_26 = VAR_3;
 if (VAR_13 < FUNC_6(VAR_12) || VAR_23)
  VAR_26 |= VAR_2;







 FUNC_14(&VAR_30, &VAR_22);
 VAR_25 = 1;
 VAR_35 = FUNC_15(VAR_29, VAR_12, VAR_18, VAR_20, VAR_26,
  &VAR_22, 0, VAR_15, &VAR_25, &VAR_30);
 if (VAR_35)
  goto out_bmap_cancel;




 VAR_35 = FUNC_13(&VAR_29, &VAR_30, &VAR_34);
 if (VAR_35)
  goto out_bmap_cancel;
 VAR_35 = FUNC_23(VAR_29, VAR_10);
 if (VAR_35)
  goto out_unlock;




 if (VAR_25 == 0) {
  VAR_35 = FUNC_5(VAR_0);
  goto out_unlock;
 }

 if (!(VAR_15->br_startblock || FUNC_7(VAR_12)))
  VAR_35 = FUNC_11(VAR_12, VAR_15);

out_unlock:
 FUNC_19(VAR_12, VAR_4);
 return VAR_35;

out_bmap_cancel:
 FUNC_12(&VAR_30);
 FUNC_27(VAR_29, VAR_12, VAR_31, 0, VAR_27);
out_trans_cancel:
 FUNC_22(VAR_29, VAR_10 | VAR_7);
 goto out_unlock;
}
