
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_40__ {int m_flags; int m_ddev_targp; } ;
typedef TYPE_4__ xfs_mount_t ;
struct TYPE_39__ {int di_flags; int di_size; int di_format; } ;
struct TYPE_37__ {int if_data; } ;
struct TYPE_38__ {int if_flags; TYPE_1__ if_u1; } ;
struct TYPE_41__ {int i_ino; TYPE_3__ i_d; TYPE_2__ i_df; TYPE_4__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
typedef int xfs_daddr_t ;
typedef int xfs_buf_t ;
struct TYPE_42__ {int br_blockcount; int br_startblock; } ;
typedef TYPE_6__ xfs_bmbt_irec_t ;
typedef int xfs_bmap_free_t ;
typedef scalar_t__ uint ;
struct xfs_name {int len; } ;
struct xfs_dquot {int dummy; } ;
typedef int prid_t ;
typedef int mode_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int ,scalar_t__) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char const*,int) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (TYPE_5__*,struct xfs_name*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int *,int*) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,TYPE_5__*,scalar_t__,scalar_t__,int,int *,scalar_t__,TYPE_6__*,int*,int *) ;
 int FUNC_22 (int *,TYPE_5__*,struct xfs_name*,scalar_t__) ;
 int FUNC_23 (int *,TYPE_5__*,struct xfs_name*,int ,int *,int *,scalar_t__) ;
 int FUNC_24 (int **,TYPE_5__*,int,int,int ,int ,int,TYPE_5__**,int *) ;
 int FUNC_25 (TYPE_5__*) ;
 int FUNC_26 (TYPE_5__*,int,int ) ;
 int FUNC_27 (TYPE_5__*,int) ;
 int FUNC_28 (TYPE_5__*,int) ;
 int FUNC_29 (struct xfs_dquot*) ;
 int FUNC_30 (int *,TYPE_5__*,struct xfs_dquot*,struct xfs_dquot*) ;
 int FUNC_31 (TYPE_5__*,int ,int ,int ,int,struct xfs_dquot**,struct xfs_dquot**) ;
 int * FUNC_32 (TYPE_4__*,int ) ;
 int FUNC_33 (int *,scalar_t__) ;
 int FUNC_34 (int *,scalar_t__) ;
 int * FUNC_35 (int *,int ,int ,int ,int ) ;
 int FUNC_36 (int *,TYPE_5__*,int) ;
 int FUNC_37 (int *,TYPE_5__*,int) ;
 int FUNC_38 (int *,int *,int ,int) ;
 int FUNC_39 (int *,TYPE_5__*,int) ;
 int FUNC_40 (int *,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_41 (int *,TYPE_4__*,struct xfs_dquot*,struct xfs_dquot*,scalar_t__,int,int ) ;
 int FUNC_42 (int *) ;

int
FUNC_43(
 xfs_inode_t *VAR_36,
 struct xfs_name *VAR_37,
 const char *VAR_38,
 mode_t VAR_39,
 xfs_inode_t **VAR_40)
{
 xfs_mount_t *VAR_41 = VAR_36->i_mount;
 xfs_trans_t *VAR_42;
 xfs_inode_t *VAR_43;
 int VAR_44;
 int VAR_45;
 xfs_bmap_free_t VAR_46;
 xfs_fsblock_t VAR_47;
 boolean_t VAR_48 = VAR_0;
 uint VAR_49;
 int VAR_50;
 xfs_fileoff_t VAR_51;
 xfs_filblks_t VAR_52;
 int VAR_53;
 xfs_bmbt_irec_t VAR_54[VAR_8];
 xfs_daddr_t VAR_55;
 const char *VAR_56;
 int VAR_57;
 int VAR_58;
 xfs_buf_t *VAR_59;
 prid_t VAR_60;
 struct xfs_dquot *VAR_61, *VAR_62;
 uint VAR_63;

 *VAR_40 = ((void*)0);
 VAR_44 = 0;
 VAR_43 = ((void*)0);
 VAR_42 = ((void*)0);

 FUNC_17(VAR_36, VAR_37);

 if (FUNC_5(VAR_41))
  return FUNC_4(VAR_2);




 VAR_45 = FUNC_16(VAR_38);
 if (VAR_45 >= VAR_7)
  return FUNC_4(VAR_3);

 VAR_61 = VAR_62 = ((void*)0);
 if (VAR_36->i_d.di_flags & VAR_15)
  VAR_60 = FUNC_25(VAR_36);
 else
  VAR_60 = VAR_28;




 VAR_44 = FUNC_31(VAR_36, FUNC_14(), FUNC_13(), VAR_60,
   VAR_30 | VAR_29, &VAR_61, &VAR_62);
 if (VAR_44)
  goto std_return;

 VAR_42 = FUNC_32(VAR_41, VAR_35);
 VAR_49 = VAR_34;




 if (VAR_45 <= FUNC_10(VAR_41))
  VAR_52 = 0;
 else
  VAR_52 = FUNC_3(VAR_41, VAR_45);
 VAR_63 = FUNC_12(VAR_41, VAR_37->len, VAR_52);
 VAR_44 = FUNC_40(VAR_42, VAR_63, FUNC_11(VAR_41), 0,
   VAR_33, VAR_31);
 if (VAR_44 == VAR_5 && VAR_52 == 0) {
  VAR_63 = 0;
  VAR_44 = FUNC_40(VAR_42, 0, FUNC_11(VAR_41), 0,
    VAR_33, VAR_31);
 }
 if (VAR_44) {
  VAR_49 = 0;
  goto error_return;
 }

 FUNC_27(VAR_36, VAR_22 | VAR_23);
 VAR_48 = VAR_1;




 if (VAR_36->i_d.di_flags & VAR_14) {
  VAR_44 = FUNC_4(VAR_6);
  goto error_return;
 }




 VAR_44 = FUNC_41(VAR_42, VAR_41, VAR_61, VAR_62, VAR_63, 1, 0);
 if (VAR_44)
  goto error_return;




 VAR_44 = FUNC_22(VAR_42, VAR_36, VAR_37, VAR_63);
 if (VAR_44)
  goto error_return;




 FUNC_20(&VAR_46, &VAR_47);




 VAR_44 = FUNC_24(&VAR_42, VAR_36, VAR_9 | (VAR_39 & ~VAR_10), 1, 0,
          VAR_60, VAR_63 > 0, &VAR_43, ((void*)0));
 if (VAR_44) {
  if (VAR_44 == VAR_5)
   goto error_return;
  goto error1;
 }






 FUNC_37(VAR_42, VAR_36, VAR_22);
 VAR_48 = VAR_0;




 FUNC_30(VAR_42, VAR_43, VAR_61, VAR_62);

 if (VAR_63)
  VAR_63 -= FUNC_8(VAR_41);



 if (VAR_45 <= FUNC_9(VAR_43)) {
  FUNC_26(VAR_43, VAR_45, VAR_13);
  FUNC_15(VAR_43->i_df.if_u1.if_data, VAR_38, VAR_45);
  VAR_43->i_d.di_size = VAR_45;




  VAR_43->i_df.if_flags &= ~(VAR_20 | VAR_19);
  VAR_43->i_df.if_flags |= VAR_21;

  VAR_43->i_d.di_format = VAR_16;
  FUNC_39(VAR_42, VAR_43, VAR_25 | VAR_24);

 } else {
  VAR_51 = 0;
  VAR_53 = VAR_8;

  VAR_44 = FUNC_21(VAR_42, VAR_43, VAR_51, VAR_52,
      VAR_12 | VAR_11,
      &VAR_47, VAR_63, VAR_54, &VAR_53,
      &VAR_46);
  if (VAR_44)
   goto error2;

  if (VAR_63)
   VAR_63 -= VAR_52;
  VAR_43->i_d.di_size = VAR_45;
  FUNC_39(VAR_42, VAR_43, VAR_24);

  VAR_56 = VAR_38;
  for (VAR_58 = 0; VAR_58 < VAR_53; VAR_58++) {
   VAR_55 = FUNC_7(VAR_41, VAR_54[VAR_58].br_startblock);
   VAR_57 = FUNC_6(VAR_41, VAR_54[VAR_58].br_blockcount);
   VAR_59 = FUNC_35(VAR_42, VAR_41->m_ddev_targp, VAR_55,
            FUNC_0(VAR_57), 0);
   if (!VAR_59) {
    VAR_44 = VAR_4;
    goto error2;
   }
   if (VAR_45 < VAR_57) {
    VAR_57 = VAR_45;
   }
   VAR_45 -= VAR_57;

   FUNC_15(FUNC_2(VAR_59), VAR_56, VAR_57);
   VAR_56 += VAR_57;

   FUNC_38(VAR_42, VAR_59, 0, VAR_57 - 1);
  }
 }




 VAR_44 = FUNC_23(VAR_42, VAR_36, VAR_37, VAR_43->i_ino,
     &VAR_47, &VAR_46, VAR_63);
 if (VAR_44)
  goto error2;
 FUNC_36(VAR_42, VAR_36, VAR_18 | VAR_17);
 FUNC_39(VAR_42, VAR_36, VAR_24);






 if (VAR_41->m_flags & (VAR_27|VAR_26)) {
  FUNC_42(VAR_42);
 }

 VAR_44 = FUNC_19(&VAR_42, &VAR_46, &VAR_50);
 if (VAR_44) {
  goto error2;
 }
 VAR_44 = FUNC_34(VAR_42, VAR_34);
 FUNC_29(VAR_61);
 FUNC_29(VAR_62);

 *VAR_40 = VAR_43;
 return 0;

 error2:
 FUNC_1(VAR_43);
 error1:
 FUNC_18(&VAR_46);
 VAR_49 |= VAR_32;
 error_return:
 FUNC_33(VAR_42, VAR_49);
 FUNC_29(VAR_61);
 FUNC_29(VAR_62);

 if (VAR_48)
  FUNC_28(VAR_36, VAR_22);
 std_return:
 return VAR_44;
}
