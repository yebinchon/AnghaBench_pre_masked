
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int di_flags; scalar_t__ di_nlink; } ;
struct xfs_inode {int i_ino; TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
typedef struct xfs_inode xfs_inode_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_dev_t ;
typedef int xfs_bmap_free_t ;
typedef scalar_t__ uint ;
struct xfs_trans {int dummy; } ;
struct xfs_name {int len; } ;
struct xfs_mount {int m_flags; } ;
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
 int FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 scalar_t__ FUNC_4 (struct xfs_mount*,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct xfs_mount*) ;
 scalar_t__ FUNC_7 (struct xfs_mount*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_8 (struct xfs_mount*) ;
 scalar_t__ FUNC_9 (struct xfs_mount*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct xfs_inode*,struct xfs_name*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct xfs_trans**,int *,int*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct xfs_trans*,struct xfs_inode*) ;
 int FUNC_17 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,scalar_t__) ;
 int FUNC_18 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,int ,int *,int *,scalar_t__) ;
 int FUNC_19 (struct xfs_trans**,struct xfs_inode*,int ,int,int ,int ,int,struct xfs_inode**,int*) ;
 int FUNC_20 (struct xfs_trans*,struct xfs_inode*,struct xfs_inode*) ;
 int FUNC_21 (struct xfs_inode*) ;
 int FUNC_22 (struct xfs_inode*) ;
 int FUNC_23 (struct xfs_inode*,int) ;
 int FUNC_24 (struct xfs_inode*,int) ;
 int FUNC_25 (struct xfs_dquot*) ;
 int FUNC_26 (struct xfs_trans*,struct xfs_inode*,struct xfs_dquot*,struct xfs_dquot*) ;
 int FUNC_27 (struct xfs_inode*,int ,int ,int ,int,struct xfs_dquot**,struct xfs_dquot**) ;
 struct xfs_trans* FUNC_28 (struct xfs_mount*,int ) ;
 int FUNC_29 (struct xfs_trans*,scalar_t__) ;
 int FUNC_30 (struct xfs_trans*,scalar_t__) ;
 int FUNC_31 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_32 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_33 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_34 (struct xfs_trans*,scalar_t__,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_35 (struct xfs_trans*,struct xfs_mount*,struct xfs_dquot*,struct xfs_dquot*,scalar_t__,int,int ) ;
 int FUNC_36 (struct xfs_trans*) ;

int
FUNC_37(
 xfs_inode_t *VAR_24,
 struct xfs_name *VAR_25,
 mode_t VAR_26,
 xfs_dev_t VAR_27,
 xfs_inode_t **VAR_28)
{
 int VAR_29 = FUNC_2(VAR_26);
 struct xfs_mount *VAR_30 = VAR_24->i_mount;
 struct xfs_inode *VAR_31 = ((void*)0);
 struct xfs_trans *VAR_32 = ((void*)0);
 int VAR_33;
 xfs_bmap_free_t VAR_34;
 xfs_fsblock_t VAR_35;
 boolean_t VAR_36 = VAR_0;
 uint VAR_37;
 int VAR_38;
 prid_t VAR_39;
 struct xfs_dquot *VAR_40 = ((void*)0);
 struct xfs_dquot *VAR_41 = ((void*)0);
 uint VAR_42;
 uint VAR_43;
 uint VAR_44;

 FUNC_12(VAR_24, VAR_25);

 if (FUNC_6(VAR_30))
  return FUNC_5(VAR_2);

 if (VAR_24->i_d.di_flags & VAR_6)
  VAR_39 = FUNC_22(VAR_24);
 else
  VAR_39 = VAR_16;




 VAR_33 = FUNC_27(VAR_24, FUNC_11(), FUNC_10(), VAR_39,
   VAR_18 | VAR_17, &VAR_40, &VAR_41);
 if (VAR_33)
  return VAR_33;

 if (VAR_29) {
  VAR_27 = 0;
  VAR_42 = FUNC_9(VAR_30, VAR_25->len);
  VAR_43 = FUNC_8(VAR_30);
  VAR_44 = VAR_13;
  VAR_32 = FUNC_28(VAR_30, VAR_21);
 } else {
  VAR_42 = FUNC_4(VAR_30, VAR_25->len);
  VAR_43 = FUNC_3(VAR_30);
  VAR_44 = VAR_5;
  VAR_32 = FUNC_28(VAR_30, VAR_20);
 }

 VAR_37 = VAR_23;







 VAR_33 = FUNC_34(VAR_32, VAR_42, VAR_43, 0,
   VAR_22, VAR_44);
 if (VAR_33 == VAR_4) {

  FUNC_21(VAR_24);
  VAR_33 = FUNC_34(VAR_32, VAR_42, VAR_43, 0,
    VAR_22, VAR_44);
 }
 if (VAR_33 == VAR_4) {

  VAR_42 = 0;
  VAR_33 = FUNC_34(VAR_32, 0, VAR_43, 0,
    VAR_22, VAR_44);
 }
 if (VAR_33) {
  VAR_37 = 0;
  goto out_trans_cancel;
 }

 FUNC_23(VAR_24, VAR_9 | VAR_10);
 VAR_36 = VAR_1;




 if (VAR_29 && VAR_24->i_d.di_nlink >= VAR_12) {
  VAR_33 = FUNC_5(VAR_3);
  goto out_trans_cancel;
 }

 FUNC_15(&VAR_34, &VAR_35);




 VAR_33 = FUNC_35(VAR_32, VAR_30, VAR_40, VAR_41, VAR_42, 1, 0);
 if (VAR_33)
  goto out_trans_cancel;

 VAR_33 = FUNC_17(VAR_32, VAR_24, VAR_25, VAR_42);
 if (VAR_33)
  goto out_trans_cancel;






 VAR_33 = FUNC_19(&VAR_32, VAR_24, VAR_26, VAR_29 ? 2 : 1, VAR_27,
          VAR_39, VAR_42 > 0, &VAR_31, &VAR_38);
 if (VAR_33) {
  if (VAR_33 == VAR_4)
   goto out_trans_cancel;
  goto out_trans_abort;
 }
 FUNC_32(VAR_32, VAR_24, VAR_9);
 VAR_36 = VAR_0;

 VAR_33 = FUNC_18(VAR_32, VAR_24, VAR_25, VAR_31->i_ino,
     &VAR_35, &VAR_34, VAR_42 ?
     VAR_42 - FUNC_7(VAR_30) : 0);
 if (VAR_33) {
  FUNC_0(VAR_33 != VAR_4);
  goto out_trans_abort;
 }
 FUNC_31(VAR_32, VAR_24, VAR_8 | VAR_7);
 FUNC_33(VAR_32, VAR_24, VAR_11);

 if (VAR_29) {
  VAR_33 = FUNC_20(VAR_32, VAR_31, VAR_24);
  if (VAR_33)
   goto out_bmap_cancel;

  VAR_33 = FUNC_16(VAR_32, VAR_24);
  if (VAR_33)
   goto out_bmap_cancel;
 }






 if (VAR_30->m_flags & (VAR_15|VAR_14))
  FUNC_36(VAR_32);






 FUNC_26(VAR_32, VAR_31, VAR_40, VAR_41);

 VAR_33 = FUNC_14(&VAR_32, &VAR_34, &VAR_38);
 if (VAR_33)
  goto out_bmap_cancel;

 VAR_33 = FUNC_30(VAR_32, VAR_23);
 if (VAR_33)
  goto out_release_inode;

 FUNC_25(VAR_40);
 FUNC_25(VAR_41);

 *VAR_28 = VAR_31;
 return 0;

 out_bmap_cancel:
 FUNC_13(&VAR_34);
 out_trans_abort:
 VAR_37 |= VAR_19;
 out_trans_cancel:
 FUNC_29(VAR_32, VAR_37);
 out_release_inode:





 if (VAR_31)
  FUNC_1(VAR_31);

 FUNC_25(VAR_40);
 FUNC_25(VAR_41);

 if (VAR_36)
  FUNC_24(VAR_24, VAR_9);
 return VAR_33;
}
