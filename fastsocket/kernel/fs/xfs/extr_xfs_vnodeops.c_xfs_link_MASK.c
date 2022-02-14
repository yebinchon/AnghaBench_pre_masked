
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_22__ {int m_flags; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_21__ {scalar_t__ di_nlink; int di_flags; int di_mode; } ;
struct TYPE_23__ {int i_ino; TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_bmap_free_t ;
struct xfs_name {int len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (TYPE_3__*,struct xfs_name*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *,TYPE_3__*,struct xfs_name*,int) ;
 int FUNC_13 (int *,TYPE_3__*,struct xfs_name*,int ,int *,int *,int) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int * FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,TYPE_3__*,int) ;
 int FUNC_21 (int *,TYPE_3__*,int ) ;
 int FUNC_22 (int *,TYPE_3__*,int ) ;
 int FUNC_23 (int *,int,int ,int ,int ,int ) ;
 int FUNC_24 (int *) ;

int
FUNC_25(
 xfs_inode_t *VAR_17,
 xfs_inode_t *VAR_18,
 struct xfs_name *VAR_19)
{
 xfs_mount_t *VAR_20 = VAR_17->i_mount;
 xfs_trans_t *VAR_21;
 int VAR_22;
 xfs_bmap_free_t VAR_23;
 xfs_fsblock_t VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;

 FUNC_6(VAR_17, VAR_19);

 FUNC_0(!FUNC_1(VAR_18->i_d.di_mode));

 if (FUNC_3(VAR_20))
  return FUNC_2(VAR_0);

 VAR_22 = FUNC_16(VAR_18, 0);
 if (VAR_22)
  goto std_return;

 VAR_22 = FUNC_16(VAR_17, 0);
 if (VAR_22)
  goto std_return;

 VAR_21 = FUNC_17(VAR_20, VAR_14);
 VAR_25 = VAR_16;
 VAR_27 = FUNC_5(VAR_20, VAR_19->len);
 VAR_22 = FUNC_23(VAR_21, VAR_27, FUNC_4(VAR_20), 0,
   VAR_15, VAR_9);
 if (VAR_22 == VAR_2) {
  VAR_27 = 0;
  VAR_22 = FUNC_23(VAR_21, 0, FUNC_4(VAR_20), 0,
    VAR_15, VAR_9);
 }
 if (VAR_22) {
  VAR_25 = 0;
  goto error_return;
 }

 FUNC_15(VAR_18, VAR_17, VAR_7);

 FUNC_21(VAR_21, VAR_18, VAR_7);
 FUNC_21(VAR_21, VAR_17, VAR_7);




 if (VAR_18->i_d.di_nlink >= VAR_10) {
  VAR_22 = FUNC_2(VAR_1);
  goto error_return;
 }






 if (FUNC_7((VAR_17->i_d.di_flags & VAR_4) &&
       (FUNC_14(VAR_17) != FUNC_14(VAR_18)))) {
  VAR_22 = FUNC_2(VAR_3);
  goto error_return;
 }

 VAR_22 = FUNC_12(VAR_21, VAR_17, VAR_19, VAR_27);
 if (VAR_22)
  goto error_return;

 FUNC_10(&VAR_23, &VAR_24);

 VAR_22 = FUNC_13(VAR_21, VAR_17, VAR_19, VAR_18->i_ino,
     &VAR_24, &VAR_23, VAR_27);
 if (VAR_22)
  goto abort_return;
 FUNC_20(VAR_21, VAR_17, VAR_6 | VAR_5);
 FUNC_22(VAR_21, VAR_17, VAR_8);

 VAR_22 = FUNC_11(VAR_21, VAR_18);
 if (VAR_22)
  goto abort_return;






 if (VAR_20->m_flags & (VAR_12|VAR_11)) {
  FUNC_24(VAR_21);
 }

 VAR_22 = FUNC_9 (&VAR_21, &VAR_23, &VAR_26);
 if (VAR_22) {
  FUNC_8(&VAR_23);
  goto abort_return;
 }

 return FUNC_19(VAR_21, VAR_16);

 abort_return:
 VAR_25 |= VAR_13;
 error_return:
 FUNC_18(VAR_21, VAR_25);
 std_return:
 return VAR_22;
}
